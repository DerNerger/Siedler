/****************************************************************************
** Meta object code from reading C++ file 'TreeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Sourcecode/View/TreeWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TreeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TreeWidget_t {
    QByteArrayData data[9];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TreeWidget_t qt_meta_stringdata_TreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TreeWidget"
QT_MOC_LITERAL(1, 11, 16), // "gotoBuildingTree"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 12), // "ResourceEnum"
QT_MOC_LITERAL(4, 42, 1), // "e"
QT_MOC_LITERAL(5, 44, 12), // "gotoOverview"
QT_MOC_LITERAL(6, 57, 13), // "updateHistory"
QT_MOC_LITERAL(7, 71, 16), // "QList<Building*>"
QT_MOC_LITERAL(8, 88, 16) // "repaintBuildings"

    },
    "TreeWidget\0gotoBuildingTree\0\0ResourceEnum\0"
    "e\0gotoOverview\0updateHistory\0"
    "QList<Building*>\0repaintBuildings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TreeWidget[] = {

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

void TreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TreeWidget *_t = static_cast<TreeWidget *>(_o);
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
            typedef void (TreeWidget::*_t)(ResourceEnum );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TreeWidget::gotoBuildingTree)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TreeWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TreeWidget::gotoOverview)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TreeWidget::*_t)(QList<Building*> , QList<Building*> , ResourceEnum );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TreeWidget::updateHistory)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject TreeWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TreeWidget.data,
      qt_meta_data_TreeWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TreeWidget.stringdata0))
        return static_cast<void*>(const_cast< TreeWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int TreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void TreeWidget::gotoBuildingTree(ResourceEnum _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TreeWidget::gotoOverview()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void TreeWidget::updateHistory(QList<Building*> _t1, QList<Building*> _t2, ResourceEnum _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
