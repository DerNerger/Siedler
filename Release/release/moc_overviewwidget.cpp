/****************************************************************************
** Meta object code from reading C++ file 'overviewwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Sourcecode/View/overviewwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overviewwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OverviewWidget_t {
    QByteArrayData data[19];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OverviewWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OverviewWidget_t qt_meta_stringdata_OverviewWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "OverviewWidget"
QT_MOC_LITERAL(1, 15, 14), // "buyBuildingFor"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 12), // "ResourceEnum"
QT_MOC_LITERAL(4, 44, 3), // "res"
QT_MOC_LITERAL(5, 48, 12), // "gotoMainMenu"
QT_MOC_LITERAL(6, 61, 12), // "gotoOverview"
QT_MOC_LITERAL(7, 74, 11), // "gotoOptions"
QT_MOC_LITERAL(8, 86, 8), // "exitGame"
QT_MOC_LITERAL(9, 95, 13), // "volumeChanged"
QT_MOC_LITERAL(10, 109, 3), // "vol"
QT_MOC_LITERAL(11, 113, 8), // "playMain"
QT_MOC_LITERAL(12, 122, 10), // "playSecond"
QT_MOC_LITERAL(13, 133, 5), // "pause"
QT_MOC_LITERAL(14, 139, 13), // "keyPressEvent"
QT_MOC_LITERAL(15, 153, 10), // "QKeyEvent*"
QT_MOC_LITERAL(16, 164, 5), // "event"
QT_MOC_LITERAL(17, 170, 12), // "getButtonBox"
QT_MOC_LITERAL(18, 183, 14) // "Ui::ButtonBox*"

    },
    "OverviewWidget\0buyBuildingFor\0\0"
    "ResourceEnum\0res\0gotoMainMenu\0"
    "gotoOverview\0gotoOptions\0exitGame\0"
    "volumeChanged\0vol\0playMain\0playSecond\0"
    "pause\0keyPressEvent\0QKeyEvent*\0event\0"
    "getButtonBox\0Ui::ButtonBox*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OverviewWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    0,   73,    2, 0x06 /* Public */,
       7,    0,   74,    2, 0x06 /* Public */,
       8,    0,   75,    2, 0x06 /* Public */,
       9,    1,   76,    2, 0x06 /* Public */,
      11,    0,   79,    2, 0x06 /* Public */,
      12,    0,   80,    2, 0x06 /* Public */,
      13,    0,   81,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,   82,    2, 0x0a /* Public */,
      17,    0,   85,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 15,   16,
    0x80000000 | 18,

       0        // eod
};

void OverviewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OverviewWidget *_t = static_cast<OverviewWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buyBuildingFor((*reinterpret_cast< ResourceEnum(*)>(_a[1]))); break;
        case 1: _t->gotoMainMenu(); break;
        case 2: _t->gotoOverview(); break;
        case 3: _t->gotoOptions(); break;
        case 4: _t->exitGame(); break;
        case 5: _t->volumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->playMain(); break;
        case 7: _t->playSecond(); break;
        case 8: _t->pause(); break;
        case 9: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 10: { Ui::ButtonBox* _r = _t->getButtonBox();
            if (_a[0]) *reinterpret_cast< Ui::ButtonBox**>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OverviewWidget::*_t)(ResourceEnum );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OverviewWidget::buyBuildingFor)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OverviewWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OverviewWidget::gotoMainMenu)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (OverviewWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OverviewWidget::gotoOverview)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (OverviewWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OverviewWidget::gotoOptions)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (OverviewWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OverviewWidget::exitGame)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (OverviewWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OverviewWidget::volumeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (OverviewWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OverviewWidget::playMain)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (OverviewWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OverviewWidget::playSecond)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (OverviewWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OverviewWidget::pause)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject OverviewWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OverviewWidget.data,
      qt_meta_data_OverviewWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OverviewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OverviewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OverviewWidget.stringdata0))
        return static_cast<void*>(const_cast< OverviewWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int OverviewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void OverviewWidget::buyBuildingFor(ResourceEnum _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OverviewWidget::gotoMainMenu()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void OverviewWidget::gotoOverview()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void OverviewWidget::gotoOptions()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void OverviewWidget::exitGame()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void OverviewWidget::volumeChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void OverviewWidget::playMain()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void OverviewWidget::playSecond()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void OverviewWidget::pause()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
