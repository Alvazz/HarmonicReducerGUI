#include "serialthread.h"
#include <QVector>
#include<QString>
#include<QObject>
#include<QMessageBox>
#include<QDebug>
#include<QThread>
serialThread::serialThread(QObject *parent):QObject(parent)
{
}

void serialThread::initialPortSetting(QString pname,qint32 br,
                                      qint8 dbits,qint8 parity,qint8 sBits)
{
    qserial.setPortName(pname);
    qserial.setBaudRate(br);
    if(dbits==8)
        qserial.setDataBits(QSerialPort::Data8);
    if(parity==0)
        qserial.setParity(QSerialPort::NoParity);
    if(sBits==1)
        qserial.setStopBits(QSerialPort::OneStop);
    if(sBits==2)
       qserial.setStopBits(QSerialPort::TwoStop);
    qserial.setFlowControl(QSerialPort::NoFlowControl);
    if(!qserial.open(QIODevice::ReadWrite))
    {
        qDebug()<<"串口打开失败"<<endl;
        return;
    }
    qDebug()<<"串口打开成功"<<endl;
    emit isSerialOpen(true);
}
void serialThread::closeSerialPort_slot()
{
    if(qserial.isOpen())
    {
        qserial.close();
        emit isSerialOpen(false);
    }
}

void serialThread::setCollectStatus(volatile bool isCollect)
{
    isCollect = isCollect;
    qDebug()<<"是否采集数据："<<isCollect<<endl;
}

void serialThread::responseFromUIRequestData_slot(QString mrMode, QString rdMode, QString btMode)
{
    //获取串口数据
    QVector<float> data;
    data.push_back(0.0);
    data.push_back(0.0);
    data.push_back(0.0);

    if(qserial.isOpen()&&isCollect)
    {
        /*
         * do something
        */
        qDebug()<<"is starting....";
        emit send2DataBase(mrMode,rdMode,btMode,data);
        emit response2UI(data);
        QThread::msleep(10);
    }
    return;
}
