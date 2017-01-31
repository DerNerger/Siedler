/****************************************************************************
** Meta object code from reading C++ file 'OptionWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Sourcecode/View/OptionWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OptionWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OptionWidget_t {
    QByteArrayData data[10];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OptionWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OptionWidget_t qt_meta_stringdata_OptionWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "OptionWidget"
QT_MOC_LITERAL(1, 13, 14), // "gotoMainWindow"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "volumeChanged"
QT_MOC_LITERAL(4, 43, 14), // "screensChanged"
QT_MOC_LITERAL(5, 58, 17), // "showScreenNumbers"
QT_MOC_LITERAL(6, 76, 25), // "on_pushButtonSave_clicked"
QT_MOC_LITERAL(7, 102, 25), // "on_pushButtonStop_clicked"
QT_MOC_LITERAL(8, 128, 31), // "on_horizontalSlider_sliderMoved"
QT_MOC_LITERAL(9, 160, 8) // "position"

    },
    "OptionWidget\0gotoMainWindow\0\0volumeChanged\0"
    "screensChanged\0showScreenNumbers\0"
    "on_pushButtonSave_clicked\0"
    "on_pushButtonStop_clicked\0"
    "on_horizontalSlider_sliderMoved\0"
    "position"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OptionWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    1,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void OptionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OptionWidget *_t = static_cast<OptionWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gotoMainWindow(); break;
        case 1: _t->volumeChanged(); break;
        case 2: _t->screensChanged(); break;
        case 3: _t->showScreenNumbers(); break;
        case 4: _t->on_pushButtonSave_clicked(); break;
        case 5: _t->on_pushButtonStop_clicked(); break;
        case 6: _t->on_horizontalSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OptionWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OptionWidget::gotoMainWindow)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OptionWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OptionWidget::volumeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (OptionWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OptionWidget::screensChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (OptionWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OptionWidget::showScreenNumbers)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject OptionWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OptionWidget.data,
      qt_meta_data_OptionWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OptionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OptionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OptionWidget.stringdata0))
        return static_cast<void*>(const_cast< OptionWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int OptionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void OptionWidget::gotoMainWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void OptionWidget::volumeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void OptionWidget::screensChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void OptionWidget::showScreenNumbers()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
