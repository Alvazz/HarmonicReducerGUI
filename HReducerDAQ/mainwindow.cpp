#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "figureutils.h"
#include <QVector>
#include <QTimer>
#include <QStringList>
#include <QDoubleValidator>
#include <QValidator>
#include <QSqlDatabase>
#include <QThread>
#include <QDebug>
#include <QMessageBox>
#include <QMetaType>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //开启串口和数据库线程
    serial_thread = new serialThread;
    db_thread = new dataBaseThread;

    qRegisterMetaType<QVector<float>>("QVector<float>");

    QThread * serial_ptr = new QThread(this);
    QThread * db_ptr = new QThread(this);

    serial_thread->moveToThread(serial_ptr);
    db_thread->moveToThread(db_ptr);

    serial_ptr->start();
    db_ptr->start();
    //串口设置
    ui->portNameBox->clear();
    serialFlag = false;
    dbFlag = false;
    foreach(const QSerialPortInfo & info,QSerialPortInfo::availablePorts())
    {
        ui->portNameBox->addItem(info.portName());
    }

    connect(this,SIGNAL(serialPort(QString,qint32,qint8,qint8,qint8)),serial_thread,SLOT(initialPortSetting(QString,qint32,qint8,qint8,qint8)),Qt::QueuedConnection);
    connect(this,SIGNAL(serialCloseButton(bool)),serial_thread,SLOT(closeSerialPort_slot()),Qt::QueuedConnection);
    connect(serial_thread,SIGNAL(isSerialOpen(bool)),this,SLOT(setBoxStatus(bool)));

    //database
    connect(this,SIGNAL(dataBaseConnect(QString,QString,QString,QString)),db_thread,SLOT(initialDB_slot(QString,QString,QString,QString)),Qt::QueuedConnection);
    connect(this,SIGNAL(dbCloseButton(bool)),db_thread,SLOT(dbClose_slot(bool)),Qt::QueuedConnection);
    connect(db_thread,SIGNAL(dbIsOpen(bool)),this,SLOT(setTextStatus(bool)),Qt::QueuedConnection);

    //test setting
    connect(this,SIGNAL(requestCollect(bool)),serial_thread,SLOT(setCollectStatus(bool))),Qt::QueuedConnection;
    connect(this,SIGNAL(requestData(QString,QString,QString)),serial_thread,SLOT(responseFromUIRequestData_slot(QString,QString,QString)),Qt::QueuedConnection);

    connect(serial_thread,SIGNAL(response2UI(QVector<float>)),this,SLOT(getResponseData(QVector<float>)),Qt::QueuedConnection);
    connect(serial_thread,SIGNAL(send2DataBase(QString,QString,QString,QVector<float>)),db_thread,SLOT(saveData_slot(QString,QString,QString,QVector<float>)));

    //初始化figure
    figHandle[0] = ui->c_motorAngleplot;
    figHandle[1] = ui->c_motorCurrentplot;
    figHandle[2]= ui->c_motorVelocityplot;

    initialFigure(ui->c_motorAngleplot,QString("location"));
    initialFigure(ui->c_motorCurrentplot,QString("current"));
    initialFigure(ui->c_motorVelocityplot,QString("velocity"));
    for(int index=0;index<3;index++)
        graphHandle[index] = addGraph(figHandle[index]);
    serialTimer = new QTimer(this);
    connect(serialTimer,SIGNAL(timeout()),this,SLOT(requestSerialData()));
    //控制定时重新绘图
    upFigTimer = new QTimer(this);
    upFigTimer->start(100);
    connect(upFigTimer,SIGNAL(timeout()),this,SLOT(updateFigure()));
}

MainWindow::~MainWindow()
{
    delete db_thread;
    delete serial_thread;
    delete ui;
}

void MainWindow::on_openButton_clicked()
{
    portName = ui->portNameBox->currentText();
    baudrate = ui->baudrateBox->currentText().toInt();
    dBits = ui->dataBitsBox->currentText().toInt();
    patiry = ui->parityBox->currentText().toInt();
    stopBits = ui->stopBitsBox->currentText().toInt();
    emit serialPort(portName,baudrate,dBits,patiry,stopBits);
}

void MainWindow::on_closeButton_clicked()
{
    emit serialCloseButton(true);
}
void MainWindow::setBoxStatus(bool isOpen)
{
    if(isOpen)
    {
        ui->portNameBox->setEnabled(false);
        ui->baudrateBox->setEnabled(false);
        ui->dataBitsBox->setEnabled(false);
        ui->stopBitsBox->setEnabled(false);
        ui->parityBox->setEnabled(false);
        ui->openButton->setEnabled(false);
        ui->closeButton->setEnabled(true);
        serialFlag = true;
    }
    else{
        ui->portNameBox->setEnabled(true);
        ui->baudrateBox->setEnabled(true);
        ui->dataBitsBox->setEnabled(true);
        ui->stopBitsBox->setEnabled(true);
        ui->parityBox->setEnabled(true);
        ui->openButton->setEnabled(true);
        serialFlag = false;
    }
}
//连接数据库
void MainWindow::on_connectDB_clicked()
{
    hostName = ui->dataBaseIP->text();
    dbName = ui->dataBaseName->text();
    userName = ui->userName->text();
    passWord = ui->passWord->text();
    emit dataBaseConnect(hostName,dbName,userName,passWord);

}
void MainWindow::setTextStatus(bool isOpen)
{
    if(isOpen)
    {
        ui->dataBaseIP->setEnabled(false);
        ui->dataBaseName->setEnabled(false);
        ui->userName->setEnabled(false);
        ui->passWord->setEnabled(false);
        ui->connectDB->setEnabled(false);
        ui->disconnectDB->setEnabled(true);
        dbFlag = true;

    }
    else{
        ui->dataBaseIP->setEnabled(true);
        ui->dataBaseName->setEnabled(true);
        ui->userName->setEnabled(true);
        ui->passWord->setEnabled(true);
        ui->connectDB->setEnabled(true);
        dbFlag = false;
    }
}

void MainWindow::on_disconnectDB_clicked()
{
    emit dbCloseButton(true);
}

void MainWindow::on_motorRadioButton_clicked()
{
    ui->motorBox->setEnabled(true);
    ui->HRBox->setEnabled(false);
    ui->beltBox->setEnabled(false);
}

void MainWindow::on_hrRadioButton_clicked()
{
    ui->motorBox->setEnabled(false);
    ui->HRBox->setEnabled(true);
    ui->beltBox->setEnabled(false);
}

void MainWindow::on_beltRadioButton_clicked()
{
    ui->motorBox->setEnabled(false);
    ui->HRBox->setEnabled(false);
    ui->beltBox->setEnabled(true);
}

void MainWindow::on_startCollectButton_clicked()
{

    //串口开始读取数据
    serialFlag = true;
    ui->progressBar->setValue(50);
    if(serialFlag && dbFlag)
    {
        collectFlag = true;
        ui->startCollectButton->setEnabled(false);
        motorMode = ui->motorBox->currentText();
        reducerMode = ui->HRBox->currentText();
        beltMode = ui->beltBox->currentText();
        emit requestCollect(true);
        serialTimer->start();
        upFigTimer->start(100);
    }
    else
    {
        ui->startCollectButton->setEnabled(true);
        emit requestCollect(false);
        QMessageBox::warning(this,"警告","请确认串口或数据库是否打开!");
        return;
    }
}
void MainWindow::requestSerialData()
{
    if(serialFlag&&dbFlag)
    {
        emit requestData(motorMode,reducerMode,beltMode);//定时向serialThred请求数据
    }
    else
    {
       ui->startCollectButton->setEnabled(true);
       emit requestCollect(false);
       serialTimer->stop();
       QMessageBox::warning(this,"警告","请确认串口或数据库是否打开!");
       return;
    }
}

void MainWindow::on_stopCollectButton_clicked()
{
    //串口停止采集数据
    collectFlag = false;
    upFigTimer->stop();//关掉绘图定时器
    serialTimer->stop();
    emit requestCollect(false);
    ui->startCollectButton->setEnabled(true);
    ui->progressBar->setValue(0);
}

void MainWindow::getResponseData(QVector<float>data)
{
    //获取来自serial的数据
    if(collectFlag)
    {
        _motor_current.push_back(data[0]);
        _motor_angle.push_back(data[1]);
        _motor_velocity.push_back(data[2]);
    }
    qDebug()<<"_motor_current"<<_motor_current.size();
}

void MainWindow::initialFigure(QCustomPlot* fig,QString ylabel)
{
    QBrush qBrush(QColor("darkCyan"));//设置背景色
    fig->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectAxes |	//设置交互方式
                                         QCP::iSelectLegend | QCP::iSelectPlottables);
    fig->axisRect()->setupFullAxesBox();
    fig->setBackground(qBrush);

    fig->xAxis->setLabel("Time Axis (t/s)");//设置x轴
    fig->xAxis->setTicks(false);

    fig->yAxis->setLabel(ylabel);//设置y轴
    fig->yAxis->setRange(0,10);

}
QCPGraph* MainWindow::addGraph(QCustomPlot* fig)
{
    QCPGraph * graph = fig->addGraph();//增加图层
    QPen qPen(QColor(255,0,0));
    graph->setPen(qPen);//设置画笔颜色
    graph->setName(QString("F4"));
    return graph;
}
void MainWindow::updateFigure()
{
    QVector<double> xvec,yvec;
    for(int i=0;i<1000;i++){
        xvec.push_back(qrand()%100);
        yvec.push_back(qrand()%100);
    }
    if(collectFlag)
    {
        for(int i=0;i<3;i++)
        {
            figHandle[i]->graph()->addData(xvec,yvec);
            figHandle[i]->rescaleAxes(true);
            figHandle[i]->replot();
        }
    }
}

