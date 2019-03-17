/****************************************************************************
** Meta object code from reading C++ file 'serialthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../serialthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_serialThread_t {
    QByteArrayData data[16];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_serialThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_serialThread_t qt_meta_stringdata_serialThread = {
    {
QT_MOC_LITERAL(0, 0, 12), // "serialThread"
QT_MOC_LITERAL(1, 13, 12), // "isSerialOpen"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "response2UI"
QT_MOC_LITERAL(4, 39, 14), // "QVector<float>"
QT_MOC_LITERAL(5, 54, 3), // "vec"
QT_MOC_LITERAL(6, 58, 13), // "send2DataBase"
QT_MOC_LITERAL(7, 72, 18), // "initialPortSetting"
QT_MOC_LITERAL(8, 91, 8), // "portName"
QT_MOC_LITERAL(9, 100, 2), // "br"
QT_MOC_LITERAL(10, 103, 5), // "dbits"
QT_MOC_LITERAL(11, 109, 6), // "patiry"
QT_MOC_LITERAL(12, 116, 5), // "sBits"
QT_MOC_LITERAL(13, 122, 20), // "closeSerialPort_slot"
QT_MOC_LITERAL(14, 143, 16), // "setCollectStatus"
QT_MOC_LITERAL(15, 160, 30) // "responseFromUIRequestData_slot"

    },
    "serialThread\0isSerialOpen\0\0response2UI\0"
    "QVector<float>\0vec\0send2DataBase\0"
    "initialPortSetting\0portName\0br\0dbits\0"
    "patiry\0sBits\0closeSerialPort_slot\0"
    "setCollectStatus\0responseFromUIRequestData_slot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_serialThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       3,    1,   52,    2, 0x06 /* Public */,
       6,    4,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    5,   64,    2, 0x0a /* Public */,
      13,    0,   75,    2, 0x0a /* Public */,
      14,    1,   76,    2, 0x0a /* Public */,
      15,    3,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 4,    2,    2,    2,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::SChar, QMetaType::SChar, QMetaType::SChar,    8,    9,   10,   11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,

       0        // eod
};

void serialThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        serialThread *_t = static_cast<serialThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->isSerialOpen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->response2UI((*reinterpret_cast< QVector<float>(*)>(_a[1]))); break;
        case 2: _t->send2DataBase((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVector<float>(*)>(_a[4]))); break;
        case 3: _t->initialPortSetting((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qint8(*)>(_a[3])),(*reinterpret_cast< qint8(*)>(_a[4])),(*reinterpret_cast< qint8(*)>(_a[5]))); break;
        case 4: _t->closeSerialPort_slot(); break;
        case 5: _t->setCollectStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->responseFromUIRequestData_slot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<float> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<float> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (serialThread::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&serialThread::isSerialOpen)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (serialThread::*_t)(QVector<float> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&serialThread::response2UI)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (serialThread::*_t)(QString , QString , QString , QVector<float> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&serialThread::send2DataBase)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject serialThread::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_serialThread.data,
      qt_meta_data_serialThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *serialThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *serialThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_serialThread.stringdata0))
        return static_cast<void*>(const_cast< serialThread*>(this));
    return QObject::qt_metacast(_clname);
}

int serialThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void serialThread::isSerialOpen(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void serialThread::response2UI(QVector<float> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void serialThread::send2DataBase(QString _t1, QString _t2, QString _t3, QVector<float> _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
