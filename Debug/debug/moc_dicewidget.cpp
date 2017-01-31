/****************************************************************************
** Meta object code from reading C++ file 'dicewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Sourcecode/View/dicewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dicewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DiceWidget_t {
    QByteArrayData data[14];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DiceWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DiceWidget_t qt_meta_stringdata_DiceWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DiceWidget"
QT_MOC_LITERAL(1, 11, 13), // "buttonClicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 9), // "getNumber"
QT_MOC_LITERAL(4, 36, 11), // "getResource"
QT_MOC_LITERAL(5, 48, 12), // "ResourceEnum"
QT_MOC_LITERAL(6, 61, 13), // "keyPressEvent"
QT_MOC_LITERAL(7, 75, 10), // "QKeyEvent*"
QT_MOC_LITERAL(8, 86, 1), // "e"
QT_MOC_LITERAL(9, 88, 10), // "enterEvent"
QT_MOC_LITERAL(10, 99, 7), // "QEvent*"
QT_MOC_LITERAL(11, 107, 10), // "leaveEvent"
QT_MOC_LITERAL(12, 118, 10), // "wheelEvent"
QT_MOC_LITERAL(13, 129, 12) // "QWheelEvent*"

    },
    "DiceWidget\0buttonClicked\0\0getNumber\0"
    "getResource\0ResourceEnum\0keyPressEvent\0"
    "QKeyEvent*\0e\0enterEvent\0QEvent*\0"
    "leaveEvent\0wheelEvent\0QWheelEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DiceWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       6,    1,   52,    2, 0x08 /* Private */,
       9,    1,   55,    2, 0x08 /* Private */,
      11,    1,   58,    2, 0x08 /* Private */,
      12,    1,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Int,
    0x80000000 | 5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,    8,
    QMetaType::Void, 0x80000000 | 10,    8,
    QMetaType::Void, 0x80000000 | 13,    8,

       0        // eod
};

void DiceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DiceWidget *_t = static_cast<DiceWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buttonClicked(); break;
        case 1: { int _r = _t->getNumber();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { ResourceEnum _r = _t->getResource();
            if (_a[0]) *reinterpret_cast< ResourceEnum*>(_a[0]) = _r; }  break;
        case 3: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 4: _t->enterEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 5: _t->leaveEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 6: _t->wheelEvent((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DiceWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DiceWidget::buttonClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject DiceWidget::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_DiceWidget.data,
      qt_meta_data_DiceWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DiceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DiceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DiceWidget.stringdata0))
        return static_cast<void*>(const_cast< DiceWidget*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int DiceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void DiceWidget::buttonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
