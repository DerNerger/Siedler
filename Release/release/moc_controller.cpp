/****************************************************************************
** Meta object code from reading C++ file 'controller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Sourcecode/Model/controller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Controller_t {
    QByteArrayData data[19];
    char stringdata0[221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Controller_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Controller_t qt_meta_stringdata_Controller = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Controller"
QT_MOC_LITERAL(1, 11, 4), // "exit"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 11), // "openNewGame"
QT_MOC_LITERAL(4, 29, 11), // "openNewYear"
QT_MOC_LITERAL(5, 41, 12), // "openOverview"
QT_MOC_LITERAL(6, 54, 11), // "openOptions"
QT_MOC_LITERAL(7, 66, 15), // "openBuyBuilding"
QT_MOC_LITERAL(8, 82, 12), // "ResourceEnum"
QT_MOC_LITERAL(9, 95, 1), // "r"
QT_MOC_LITERAL(10, 97, 12), // "openMainMenu"
QT_MOC_LITERAL(11, 110, 18), // "initTeamsAndEvents"
QT_MOC_LITERAL(12, 129, 9), // "teamNames"
QT_MOC_LITERAL(13, 139, 14), // "loadStylesheet"
QT_MOC_LITERAL(14, 154, 13), // "updateHistory"
QT_MOC_LITERAL(15, 168, 12), // "QList<Event>"
QT_MOC_LITERAL(16, 181, 6), // "events"
QT_MOC_LITERAL(17, 188, 16), // "switchWindowMode"
QT_MOC_LITERAL(18, 205, 15) // "generatePixmaps"

    },
    "Controller\0exit\0\0openNewGame\0openNewYear\0"
    "openOverview\0openOptions\0openBuyBuilding\0"
    "ResourceEnum\0r\0openMainMenu\0"
    "initTeamsAndEvents\0teamNames\0"
    "loadStylesheet\0updateHistory\0QList<Event>\0"
    "events\0switchWindowMode\0generatePixmaps"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Controller[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    1,   79,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    1,   83,    2, 0x08 /* Private */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    1,   87,    2, 0x08 /* Private */,
      17,    0,   90,    2, 0x08 /* Private */,
      18,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Controller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Controller *_t = static_cast<Controller *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->exit(); break;
        case 1: _t->openNewGame(); break;
        case 2: _t->openNewYear(); break;
        case 3: _t->openOverview(); break;
        case 4: _t->openOptions(); break;
        case 5: _t->openBuyBuilding((*reinterpret_cast< ResourceEnum(*)>(_a[1]))); break;
        case 6: _t->openMainMenu(); break;
        case 7: _t->initTeamsAndEvents((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 8: _t->loadStylesheet(); break;
        case 9: _t->updateHistory((*reinterpret_cast< QList<Event>(*)>(_a[1]))); break;
        case 10: _t->switchWindowMode(); break;
        case 11: _t->generatePixmaps(); break;
        default: ;
        }
    }
}

const QMetaObject Controller::staticMetaObject = {
    { &QApplication::staticMetaObject, qt_meta_stringdata_Controller.data,
      qt_meta_data_Controller,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Controller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Controller::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Controller.stringdata0))
        return static_cast<void*>(const_cast< Controller*>(this));
    return QApplication::qt_metacast(_clname);
}

int Controller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
