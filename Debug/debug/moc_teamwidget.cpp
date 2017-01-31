/****************************************************************************
** Meta object code from reading C++ file 'teamwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Sourcecode/View/teamwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'teamwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TeamWidget_t {
    QByteArrayData data[8];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TeamWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TeamWidget_t qt_meta_stringdata_TeamWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TeamWidget"
QT_MOC_LITERAL(1, 11, 7), // "clicked"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 12), // "ResourceEnum"
QT_MOC_LITERAL(4, 33, 1), // "e"
QT_MOC_LITERAL(5, 35, 12), // "gotoOverview"
QT_MOC_LITERAL(6, 48, 24), // "on_pushButtonBuy_clicked"
QT_MOC_LITERAL(7, 73, 38) // "on_pushButtonTeamPointOvervie..."

    },
    "TeamWidget\0clicked\0\0ResourceEnum\0e\0"
    "gotoOverview\0on_pushButtonBuy_clicked\0"
    "on_pushButtonTeamPointOverview_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TeamWidget[] = {

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
       6,    0,   38,    2, 0x08 /* Private */,
       7,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TeamWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TeamWidget *_t = static_cast<TeamWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< ResourceEnum(*)>(_a[1]))); break;
        case 1: _t->gotoOverview(); break;
        case 2: _t->on_pushButtonBuy_clicked(); break;
        case 3: _t->on_pushButtonTeamPointOverview_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TeamWidget::*_t)(ResourceEnum );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TeamWidget::clicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TeamWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TeamWidget::gotoOverview)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject TeamWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_TeamWidget.data,
      qt_meta_data_TeamWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TeamWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TeamWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TeamWidget.stringdata0))
        return static_cast<void*>(const_cast< TeamWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int TeamWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void TeamWidget::clicked(ResourceEnum _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TeamWidget::gotoOverview()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
