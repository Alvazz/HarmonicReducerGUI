/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[28];
    char stringdata0[436];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "serialPort"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5), // "pname"
QT_MOC_LITERAL(4, 29, 2), // "br"
QT_MOC_LITERAL(5, 32, 2), // "db"
QT_MOC_LITERAL(6, 35, 1), // "p"
QT_MOC_LITERAL(7, 37, 5), // "sbits"
QT_MOC_LITERAL(8, 43, 17), // "serialCloseButton"
QT_MOC_LITERAL(9, 61, 15), // "dataBaseConnect"
QT_MOC_LITERAL(10, 77, 13), // "dbCloseButton"
QT_MOC_LITERAL(11, 91, 14), // "requestCollect"
QT_MOC_LITERAL(12, 106, 11), // "requestData"
QT_MOC_LITERAL(13, 118, 12), // "setBoxStatus"
QT_MOC_LITERAL(14, 131, 13), // "setTextStatus"
QT_MOC_LITERAL(15, 145, 15), // "getResponseData"
QT_MOC_LITERAL(16, 161, 14), // "QVector<float>"
QT_MOC_LITERAL(17, 176, 12), // "updateFigure"
QT_MOC_LITERAL(18, 189, 17), // "requestSerialData"
QT_MOC_LITERAL(19, 207, 21), // "on_openButton_clicked"
QT_MOC_LITERAL(20, 229, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(21, 252, 20), // "on_connectDB_clicked"
QT_MOC_LITERAL(22, 273, 23), // "on_disconnectDB_clicked"
QT_MOC_LITERAL(23, 297, 27), // "on_motorRadioButton_clicked"
QT_MOC_LITERAL(24, 325, 24), // "on_hrRadioButton_clicked"
QT_MOC_LITERAL(25, 350, 26), // "on_beltRadioButton_clicked"
QT_MOC_LITERAL(26, 377, 29), // "on_startCollectButton_clicked"
QT_MOC_LITERAL(27, 407, 28) // "on_stopCollectButton_clicked"

    },
    "MainWindow\0serialPort\0\0pname\0br\0db\0p\0"
    "sbits\0serialCloseButton\0dataBaseConnect\0"
    "dbCloseButton\0requestCollect\0requestData\0"
    "setBoxStatus\0setTextStatus\0getResponseData\0"
    "QVector<float>\0updateFigure\0"
    "requestSerialData\0on_openButton_clicked\0"
    "on_closeButton_clicked\0on_connectDB_clicked\0"
    "on_disconnectDB_clicked\0"
    "on_motorRadioButton_clicked\0"
    "on_hrRadioButton_clicked\0"
    "on_beltRadioButton_clicked\0"
    "on_startCollectButton_clicked\0"
    "on_stopCollectButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,  114,    2, 0x06 /* Public */,
       8,    1,  125,    2, 0x06 /* Public */,
       9,    4,  128,    2, 0x06 /* Public */,
      10,    1,  137,    2, 0x06 /* Public */,
      11,    1,  140,    2, 0x06 /* Public */,
      12,    3,  143,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  150,    2, 0x08 /* Private */,
      14,    1,  153,    2, 0x08 /* Private */,
      15,    1,  156,    2, 0x08 /* Private */,
      17,    0,  159,    2, 0x08 /* Private */,
      18,    0,  160,    2, 0x08 /* Private */,
      19,    0,  161,    2, 0x08 /* Private */,
      20,    0,  162,    2, 0x08 /* Private */,
      21,    0,  163,    2, 0x08 /* Private */,
      22,    0,  164,    2, 0x08 /* Private */,
      23,    0,  165,    2, 0x08 /* Private */,
      24,    0,  166,    2, 0x08 /* Private */,
      25,    0,  167,    2, 0x08 /* Private */,
      26,    0,  168,    2, 0x08 /* Private */,
      27,    0,  169,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::SChar, QMetaType::SChar, QMetaType::SChar,    3,    4,    5,    6,    7,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->serialPort((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qint8(*)>(_a[3])),(*reinterpret_cast< qint8(*)>(_a[4])),(*reinterpret_cast< qint8(*)>(_a[5]))); break;
        case 1: _t->serialCloseButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->dataBaseConnect((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 3: _t->dbCloseButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->requestCollect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->requestData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 6: _t->setBoxStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setTextStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->getResponseData((*reinterpret_cast< QVector<float>(*)>(_a[1]))); break;
        case 9: _t->updateFigure(); break;
        case 10: _t->requestSerialData(); break;
        case 11: _t->on_openButton_clicked(); break;
        case 12: _t->on_closeButton_clicked(); break;
        case 13: _t->on_connectDB_clicked(); break;
        case 14: _t->on_disconnectDB_clicked(); break;
        case 15: _t->on_motorRadioButton_clicked(); break;
        case 16: _t->on_hrRadioButton_clicked(); break;
        case 17: _t->on_beltRadioButton_clicked(); break;
        case 18: _t->on_startCollectButton_clicked(); break;
        case 19: _t->on_stopCollectButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<float> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(QString , qint32 , qint8 , qint8 , qint8 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::serialPort)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::serialCloseButton)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::dataBaseConnect)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::dbCloseButton)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::requestCollect)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::requestData)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::serialPort(QString _t1, qint32 _t2, qint8 _t3, qint8 _t4, qint8 _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::serialCloseButton(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::dataBaseConnect(QString _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::dbCloseButton(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::requestCollect(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindow::requestData(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
