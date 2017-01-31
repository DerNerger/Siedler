/****************************************************************************
** Meta object code from reading C++ file 'buildingtreewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Sourcecode/View/buildingtreewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buildingtreewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BuildingTreeWidget_t {
    QByteArrayData data[9];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BuildingTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BuildingTreeWidget_t qt_meta_stringdata_BuildingTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "BuildingTreeWidget"
QT_MOC_LITERAL(1, 19, 16), // "gotoBuildingTree"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 12), // "ResourceEnum"
QT_MOC_LITERAL(4, 50, 1), // "e"
QT_MOC_LITERAL(5, 52, 12), // "gotoOverview"
QT_MOC_LITERAL(6, 65, 13), // "updateHistory"
QT_MOC_LITERAL(7, 79, 16), // "QList<Building*>"
QT_MOC_LITERAL(8, 96, 16) // "repaintBuildings"

    },
    "BuildingTreeWidget\0gotoBuildingTree\0"
    "\0ResourceEnum\0e\0gotoOverview\0updateHistory\0"
    "QList<Building*>\0repaintBuildings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BuildingTreeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,
       6,    3,   38,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7, 0x80000000 | 3,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void BuildingTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BuildingTreeWidget *_t = static_cast<BuildingTreeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gotoBuildingTree((*reinterpret_cast< ResourceEnum(*)>(_a[1]))); break;
        case 1: _t->gotoOverview(); break;
        case 2: _t->updateHistory((*reinterpret_cast< QList<Building*>(*)>(_a[1])),(*reinterpret_cast< QList<Building*>(*)>(_a[2])),(*reinterpret_cast< ResourceEnum(*)>(_a[3]))); break;
        case 3: _t->repaintBuildings(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BuildingTreeWidget::*_t)(ResourceEnum );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BuildingTreeWidget::gotoBuildingTree)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BuildingTreeWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BuildingTreeWidget::gotoOverview)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BuildingTreeWidget::*_t)(QList<Building*> , QList<Building*> , ResourceEnum );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BuildingTreeWidget::updateHistory)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject BuildingTreeWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BuildingTreeWidget.data,
      qt_meta_data_BuildingTreeWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BuildingTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BuildingTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BuildingTreeWidget.stringdata0))
        return static_cast<void*>(const_cast< BuildingTreeWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int BuildingTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void BuildingTreeWidget::gotoBuildingTree(ResourceEnum _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BuildingTreeWidget::gotoOverview()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void BuildingTreeWidget::updateHistory(QList<Building*> _t1, QList<Building*> _t2, ResourceEnum _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
