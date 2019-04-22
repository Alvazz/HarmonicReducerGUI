#include "databasethread.h"
#include <QVector>
#include <QDebug>
#include <QString>
#include <QSqlQuery>
#include <QThread>
#include <QTimer>
#include <QDateTime>

dataBaseThread::dataBaseThread(QObject *parent): QObject(parent)
{
    //
}
void dataBaseThread::initialDB_slot(QString hostName,QString dbName,QString userName,
                                    QString pw)
{
    if(QSqlDatabase::contains("mysql"))
        dbHandle = QSqlDatabase::addDatabase("mysql");
    else
        dbHandle = QSqlDatabase::addDatabase("QMYSQL");
    dbHandle.setHostName(hostName);
    dbHandle.setPort(3306);
    dbHandle.setDatabaseName(dbName);
    dbHandle.setUserName(userName);
    dbHandle.setPassword(pw);
    bool isOpen = dbHandle.open();
    if(isOpen)
    {
        qDebug()<<"db is open success in dataBaseThread"<<endl;
    }
    else{
        qDebug()<<"db is open fail in dataBaseThread"<<endl;
    }
    emit dbIsOpen(isOpen);
}
void dataBaseThread::dbClose_slot(bool check)
{
    if(dbHandle.isOpen())
    {
        dbHandle.close();
        emit dbIsOpen(false);
    }
}
void dataBaseThread::saveData_slot(QString mrMode,QString rdMode,
                                   QString btMode,QVector<float> data)
{   //数据列名：序号-时间-电机模式-减速器模式-皮带模式-转角-转速-电流
    QString str;
    QSqlQuery sql(dbHandle);
    if(dbHandle.isOpen())
    {
        QDateTime local(QDateTime::currentDateTime());
        QString localTime = local.toString("yyyy-MM-dd:hh:mm:ss");
        str = QString("insert into harmonic (date,motorMode,reducerMode,beltMode,rotation_angle,rotation_vel,current) values('%1','%2','%3','%4','%5','%6','%7')")
                .arg(localTime).arg(mrMode).arg(rdMode).arg(btMode)
                .arg(QString::number(data[0])).arg(QString::number(data[1]))
                .arg(QString::number(data[2]));//sql插入语句
        bool check = sql.exec(str);
        qDebug()<<"数据插入："<<check<<endl;
    }
    else
    {
        qDebug()<<"数据库连接异常!!"<<endl;
        return;
    }
}
