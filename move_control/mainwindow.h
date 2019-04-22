#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QString>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void commandhandler(char*command,short error);

private slots:
    void on_openButton_clicked();

    void on_closeButton_clicked();

    void on_stopMove_clicked();

    void on_startMove_clicked();

private:
    Ui::MainWindow *ui;
    QSerialPort qserial;
    QString portName;   //串口号
    qint32 baudRate;     //波特率
    qint8 dBits;        //数据位数
    qint8 patiry;       //校验方式
    qint8 stopBits;     //停止位
};

#endif // MAINWINDOW_H
