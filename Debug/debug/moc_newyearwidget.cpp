/****************************************************************************
** Meta object code from reading C++ file 'newyearwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Sourcecode/View/newyearwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newyearwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NewYearWidget_t {
    QByteArrayData data[9];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NewYearWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NewYearWidget_t qt_meta_stringdata_NewYearWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "NewYearWidget"
QT_MOC_LITERAL(1, 14, 12), // "gotoOverview"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 13), // "updateHistory"
QT_MOC_LITERAL(4, 42, 12), // "QList<Event>"
QT_MOC_LITERAL(5, 55, 6), // "events"
QT_MOC_LITERAL(6, 62, 9), // "okPressed"
QT_MOC_LITERAL(7, 72, 24), // "on_pushButtonOk_released"
QT_MOC_LITERAL(8, 97, 23) // "updateResourceSpinboxes"

    },
    "NewYearWidget\0gotoOverview\0\0updateHistory\0"
    "QList<Event>\0events\0okPressed\0"
    "on_pushButtonOk_released\0"
    "updateResourceSpinboxes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewYearWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   44,    2, 0x08 /* Private */,
       8,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NewYearWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NewYearWidget *_t = static_cast<NewYearWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gotoOverview(); break;
        case 1: _t->updateHistory((*reinterpret_cast< QList<Event>(*)>(_a[1]))); break;
        case 2: _t->okPressed(); break;
        case 3: _t->on_pushButtonOk_released(); break;
        case 4: _t->updateResourceSpinboxes(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NewYearWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NewYearWidget::gotoOverview)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (NewYearWidget::*_t)(QList<Event> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NewYearWidget::updateHistory)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (NewYearWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NewYearWidget::okPressed)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject NewYearWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NewYearWidget.data,
      qt_meta_data_NewYearWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NewYearWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewYearWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NewYearWidget.stringdata0))
        return static_cast<void*>(const_cast< NewYearWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int NewYearWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void NewYearWidget::gotoOverview()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void NewYearWidget::updateHistory(QList<Event> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NewYearWidget::okPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
