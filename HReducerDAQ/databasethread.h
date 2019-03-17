#ifndef DATABASETHREAD_H
#define DATABASETHREAD_H
#include <QVector>
#include <QString>
#include <QObject>
#include <QSqlDatabase>

class dataBaseThread : public QObject
{
    Q_OBJECT
public:
    explicit dataBaseThread(QObject *parent = 0);
private:
    QSqlDatabase dbHandle;
signals:
    void dbIsOpen(bool);//数据库状态
public slots:
    void initialDB_slot(QString hostname,QString userName,QString pw,
                                     QString dbName);
    void saveData_slot(QString,QString,QString,QVector<float> data);
    void dbClose_slot(bool);

};
#endif // DATABASETHREAD_H
