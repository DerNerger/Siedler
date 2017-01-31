/****************************************************************************
** Meta object code from reading C++ file 'IconDisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Sourcecode/View/IconDisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IconDisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_IconDisplay_t {
    QByteArrayData data[8];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IconDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IconDisplay_t qt_meta_stringdata_IconDisplay = {
    {
QT_MOC_LITERAL(0, 0, 11), // "IconDisplay"
QT_MOC_LITERAL(1, 12, 17), // "mouseOverBuilding"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 9), // "Building*"
QT_MOC_LITERAL(4, 41, 12), // "ResourceEnum"
QT_MOC_LITERAL(5, 54, 8), // "getWidth"
QT_MOC_LITERAL(6, 63, 16), // "processMouseover"
QT_MOC_LITERAL(7, 80, 1) // "b"

    },
    "IconDisplay\0mouseOverBuilding\0\0Building*\0"
    "ResourceEnum\0getWidth\0processMouseover\0"
    "b"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IconDisplay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   34,    2, 0x0a /* Public */,
       6,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Void, 0x80000000 | 3,    7,

       0        // eod
};

void IconDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IconDisplay *_t = static_cast<IconDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mouseOverBuilding((*reinterpret_cast< Building*(*)>(_a[1])),(*reinterpret_cast< ResourceEnum(*)>(_a[2]))); break;
        case 1: { int _r = _t->getWidth();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: _t->processMouseover((*reinterpret_cast< Building*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (IconDisplay::*_t)(Building * , ResourceEnum );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IconDisplay::mouseOverBuilding)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject IconDisplay::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IconDisplay.data,
      qt_meta_data_IconDisplay,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *IconDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IconDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_IconDisplay.stringdata0))
        return static_cast<void*>(const_cast< IconDisplay*>(this));
    return QWidget::qt_metacast(_clname);
}

int IconDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void IconDisplay::mouseOverBuilding(Building * _t1, ResourceEnum _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
