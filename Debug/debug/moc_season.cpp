/****************************************************************************
** Meta object code from reading C++ file 'season.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Sourcecode/Model/season.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'season.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Season_t {
    QByteArrayData data[8];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Season_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Season_t qt_meta_stringdata_Season = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Season"
QT_MOC_LITERAL(1, 7, 18), // "elapsedTimeChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "time"
QT_MOC_LITERAL(4, 32, 12), // "seasonIsOver"
QT_MOC_LITERAL(5, 45, 5), // "start"
QT_MOC_LITERAL(6, 51, 4), // "stop"
QT_MOC_LITERAL(7, 56, 11) // "timerTicked"

    },
    "Season\0elapsedTimeChanged\0\0time\0"
    "seasonIsOver\0start\0stop\0timerTicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Season[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    0,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   43,    2, 0x0a /* Public */,
       6,    0,   44,    2, 0x0a /* Public */,
       7,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Season::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Season *_t = static_cast<Season *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->elapsedTimeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->seasonIsOver(); break;
        case 2: _t->start(); break;
        case 3: _t->stop(); break;
        case 4: _t->timerTicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Season::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Season::elapsedTimeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Season::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Season::seasonIsOver)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Season::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Season.data,
      qt_meta_data_Season,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Season::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Season::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Season.stringdata0))
        return static_cast<void*>(const_cast< Season*>(this));
    return QObject::qt_metacast(_clname);
}

int Season::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Season::elapsedTimeChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Season::seasonIsOver()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
