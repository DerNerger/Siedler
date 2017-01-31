/****************************************************************************
** Meta object code from reading C++ file 'seasoncontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Sourcecode/Model/seasoncontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'seasoncontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SeasonController_t {
    QByteArrayData data[9];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeasonController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeasonController_t qt_meta_stringdata_SeasonController = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SeasonController"
QT_MOC_LITERAL(1, 17, 11), // "changeSound"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "SoundType"
QT_MOC_LITERAL(4, 40, 4), // "type"
QT_MOC_LITERAL(5, 45, 10), // "yearIsOver"
QT_MOC_LITERAL(6, 56, 10), // "nextSeason"
QT_MOC_LITERAL(7, 67, 10), // "gotoSeason"
QT_MOC_LITERAL(8, 78, 4) // "name"

    },
    "SeasonController\0changeSound\0\0SoundType\0"
    "type\0yearIsOver\0nextSeason\0gotoSeason\0"
    "name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeasonController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   38,    2, 0x0a /* Public */,
       7,    1,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void SeasonController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SeasonController *_t = static_cast<SeasonController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeSound((*reinterpret_cast< SoundType(*)>(_a[1]))); break;
        case 1: _t->yearIsOver(); break;
        case 2: _t->nextSeason(); break;
        case 3: _t->gotoSeason((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SeasonController::*_t)(SoundType );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SeasonController::changeSound)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SeasonController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SeasonController::yearIsOver)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject SeasonController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SeasonController.data,
      qt_meta_data_SeasonController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SeasonController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeasonController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SeasonController.stringdata0))
        return static_cast<void*>(const_cast< SeasonController*>(this));
    return QObject::qt_metacast(_clname);
}

int SeasonController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SeasonController::changeSound(SoundType _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SeasonController::yearIsOver()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
