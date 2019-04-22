#ifndef SERIALTHREAD_H
#define SERIALTHREAD_H
#include <QVector>
#include <QString>
#include <QObject>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QMutex>
#include <QTimer>

class serialThread:public QObject
{
    Q_OBJECT
public:
    explicit serialThread(QObject *parent = 0);
private:
    QSerialPort qserial;
    QString portName;   //串口号
    qint8 baudRate;     //波特率
    qint8 dBits;        //数据位数
    qint8 patiry;       //校验方式
    qint8 stopBits;     //停止位

    bool isCollect;

signals:
    void isSerialOpen(bool);    //

    void response2UI(QVector<float> vec);//数据发送给UI线程
    void send2DataBase(QString,QString,QString,QVector<float> vec);//数据发送给数据库线程

public slots:
    void initialPortSetting(QString portName,qint32 br,qint8 dbits,
                            qint8 patiry,qint8 sBits);//初始化串口配置
    void closeSerialPort_slot();//关闭串口

    void setCollectStatus(bool);
    void responseFromUIRequestData_slot(QString,QString,QString);//处理主线程的请求
};
#endif // SERIALTHREAD_H
