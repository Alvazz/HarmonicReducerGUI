#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "serialthread.h"
#include "databasethread.h"
#include "qcustomplot.h"
#include <QListWidgetItem>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void initialFigure(QCustomPlot*,QString);
    QCPGraph* addGraph(QCustomPlot* fig);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    serialThread *serial_thread;
    dataBaseThread *db_thread;
    //serialport
    QString portName;
    qint32 baudrate;
    qint8 dBits;
    qint8 patiry;
    qint8 stopBits;
    bool serialFlag;
    //database
    QString hostName;
    QString dbName;
    QString userName;
    QString passWord;
    bool dbFlag;
    //test Setting
    QString motorMode;//电机设置
    QString reducerMode;//减速器设置
    QString beltMode;//皮带设置
    bool collectFlag;
    //figure
    QCustomPlot *figHandle[3];
    QCPGraph* graphHandle[3];
    QVector<double> _motor_current;
    QVector<double> _motor_angle;
    QVector<double> _motor_velocity;
    QTimer *serialTimer;
    QTimer *upFigTimer;
signals:
    void serialPort(QString pname,qint32 br,
                    qint8 db,qint8 p,qint8 sbits);//打开串口信号
    void serialCloseButton(bool);

    void dataBaseConnect(QString,QString,QString,QString);//连接数据库信号
    void dbCloseButton(bool);

    void requestCollect(bool);
    void requestData(QString,QString,QString);//开始请求数据采集

private slots:
    void setBoxStatus(bool);//设置串口BOX使能
    void setTextStatus(bool);//设置数据库TEXT使能
    void getResponseData(QVector<float>);
    void updateFigure();
    void requestSerialData();

    void on_openButton_clicked();
    void on_closeButton_clicked();
    void on_connectDB_clicked();
    void on_disconnectDB_clicked();
    void on_motorRadioButton_clicked();
    void on_hrRadioButton_clicked();
    void on_beltRadioButton_clicked();
    void on_startCollectButton_clicked();
    void on_stopCollectButton_clicked();
};

#endif // MAINWINDOW_H
