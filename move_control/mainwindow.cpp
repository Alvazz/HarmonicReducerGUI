#include "mainwindow.h"
#include "ui_mainwindow.h"

//导入必要的头文件
#include "stdafx.h"
#include "windows.h"
#include "stdio.h"
#include "gts.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->portNameBox->clear();

    foreach(const QSerialPortInfo & info,QSerialPortInfo::availablePorts())
    {
        ui->portNameBox->addItem(info.portName());
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_openButton_clicked()
{

    portName = ui->portNameBox->currentText();
    baudRate = ui->baudrateBox->currentText().toInt();
    dBits = ui->dataBitsBox->currentText().toInt();
    patiry = ui->parityBox->currentText().toInt();
    stopBits = ui->stopBitsBox->currentText().toInt();

    qserial.setPortName(portName);
    qserial.setBaudRate(baudRate);
    if(dBits==8)
        qserial.setDataBits(QSerialPort::Data8);
    if(patiry==0)
        qserial.setParity(QSerialPort::NoParity);
    if(stopBits==1)
        qserial.setStopBits(QSerialPort::OneStop);
    if(stopBits==2)
       qserial.setStopBits(QSerialPort::TwoStop);
    qserial.setFlowControl(QSerialPort::NoFlowControl);
    if(qserial.isOpen())
    {
        QMessageBox::warning(this,"提示","串口已打开");
        return;
    }
    if(!qserial.open(QIODevice::ReadWrite))
    {
        QMessageBox::warning(this,"提示","串口打开失败!");
        return;
    }
    ui->portNameBox->setEnabled(false);
    qDebug()<<"串口打开成功"<<endl;
}

void MainWindow::on_closeButton_clicked()
{
    if(qserial.isOpen())
    {
        ui->portNameBox->setEnabled(true);
        qserial.close();
    }
    return;
}

void MainWindow::on_stopMove_clicked()
{
    on_closeButton_clicked();
}

void MainWindow::commandhandler(char*command,short error)
{
    if(error)
    {
        printf("%s=%d\n",command,error);
    }
}
//参考运动控制器中PT运动模式程序，使用动态FIFO
void MainWindow::on_startMove_clicked()
{
    long 1AxisStatus;
    short sRtn;
    TTrapPrm trap;
    long sts;
    double prfPos;

    if(qserial.isOpen())
    {
        /*move control*/

        //打开运动控制器
        sRtn = GT_Open();
        commandhandler("GT_Open",sRtn);
        //加载配置文件
        sRtn = GT_LoadConfig("test.cfg");
        commandahandle("GT_LoadConfig",sRtn);
        //清楚各轴的报警和限位
        sRtn = GT_ClrSts(1,8);
        commandhandler("GT_ClrSts",sRtn);
        //伺服使能
        sRtn = GT_Axis(AXIS);
        commandhandler("GT_AxisOn",sRtn);
        //位置清零
        sRtn = GT_ZeroPos(AXIS);
        commandhandler("GT_AxisOn",sRtn);
        //AXIS轴规划位置清零
        sRtn = GT_SetPrfPos(AXIS,0);
        commandhandler("GT_SetPrPos",sRtn);
        //将轴设置为点位模式
        sRtn = GT_PrfTrap(AXIS);
        commandhandler("GT_PrfTrap",sRtn);
        //读取点位运动参数
        sRtn = GT_GetTrapPrm(AXIS,&trap);
        commandhandler("GT_GetTrapPrm",sRtn);
        trap.acc = 0.25;
        trap.dec = 0.125;
        trap.smoothTime = 25;
        //设置点位运动参数
        sRtn = GT_SetTrapPrm(AXIS,&trap);
        commandhandler("GT_SetTrapPrm",sRtn);
        //设置Axis轴的规划位置
        sRtn = GT_SetPos(AXIS,50000L);
        commandhandler("GT_SetPos",&sRtn);
        //设置Axis轴的目标速度
        sRtn = GT_SetVel(AXIS,50);
        commandhandler("GT_SetVel",&sRtn);
        //启动Axis轴的运动
        sRtn = GT_Update(1<<(AXIS-1));
        commandhandler("GT_Update",&sRtn);

        while(1)
        {
            //读取AXIS轴的状态
            sRtn = GT_GetSts(AXIS,&sts);
            //读取AXIS轴的规划位置
            sRtn = GT_GetPrfPos(AXIS,&prfPos);
            if(prfPos>=100000)//到达指定位置后重新设定参数
            {
                //设置Axis轴的新目标速度
                sRtn = GT_SetVel(AXIS,50);
                commandhandler("GT_SetVel",&sRtn);
                //update
                sRtn = GT_Update(1<<(AXIS-1));
                commandhandler("GT_Update",sRtn);
                break;
            }
        }
        while(!kbhit())//没有碰撞
        {
            //do something
        }


        //伺服关闭
        sRtn = GT_AxisOff(AXIS);
        printf("\nGT_AxisOff()=%d\n",sRtn);
        getch();
        return;
    }
}
