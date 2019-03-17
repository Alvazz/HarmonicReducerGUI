/****************************************************************************
** Meta object code from reading C++ file 'databasethread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../databasethread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'databasethread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dataBaseThread_t {
    QByteArrayData data[12];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dataBaseThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dataBaseThread_t qt_meta_stringdata_dataBaseThread = {
    {
QT_MOC_LITERAL(0, 0, 14), // "dataBaseThread"
QT_MOC_LITERAL(1, 15, 8), // "dbIsOpen"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 14), // "initialDB_slot"
QT_MOC_LITERAL(4, 40, 8), // "hostname"
QT_MOC_LITERAL(5, 49, 8), // "userName"
QT_MOC_LITERAL(6, 58, 2), // "pw"
QT_MOC_LITERAL(7, 61, 6), // "dbName"
QT_MOC_LITERAL(8, 68, 13), // "saveData_slot"
QT_MOC_LITERAL(9, 82, 14), // "QVector<float>"
QT_MOC_LITERAL(10, 97, 4), // "data"
QT_MOC_LITERAL(11, 102, 12) // "dbClose_slot"

    },
    "dataBaseThread\0dbIsOpen\0\0initialDB_slot\0"
    "hostname\0userName\0pw\0dbName\0saveData_slot\0"
    "QVector<float>\0data\0dbClose_slot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dataBaseThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    4,   37,    2, 0x0a /* Public */,
       8,    4,   46,    2, 0x0a /* Public */,
      11,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    4,    5,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 9,    2,    2,    2,   10,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void dataBaseThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        dataBaseThread *_t = static_cast<dataBaseThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dbIsOpen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->initialDB_slot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 2: _t->saveData_slot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVector<float>(*)>(_a[4]))); break;
        case 3: _t->dbClose_slot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
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
            typedef void (dataBaseThread::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&dataBaseThread::dbIsOpen)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject dataBaseThread::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dataBaseThread.data,
      qt_meta_data_dataBaseThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dataBaseThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dataBaseThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dataBaseThread.stringdata0))
        return static_cast<void*>(const_cast< dataBaseThread*>(this));
    return QObject::qt_metacast(_clname);
}

int dataBaseThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void dataBaseThread::dbIsOpen(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
