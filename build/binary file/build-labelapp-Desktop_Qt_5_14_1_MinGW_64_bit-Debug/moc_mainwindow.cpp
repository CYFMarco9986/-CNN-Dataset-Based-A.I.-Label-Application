/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../labelapp/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mainwindow_t {
    QByteArrayData data[20];
    char stringdata0[426];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mainwindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mainwindow_t qt_meta_stringdata_mainwindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "mainwindow"
QT_MOC_LITERAL(1, 11, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(4, 58, 23), // "on_actionQuit_triggered"
QT_MOC_LITERAL(5, 82, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(6, 106, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(7, 130, 25), // "on_actionsquare_triggered"
QT_MOC_LITERAL(8, 156, 27), // "on_actiontriangle_triggered"
QT_MOC_LITERAL(9, 184, 28), // "on_actiontrapezium_triggered"
QT_MOC_LITERAL(10, 213, 26), // "on_actionpolygon_triggered"
QT_MOC_LITERAL(11, 240, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(12, 264, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(13, 288, 26), // "on_tableWidget_cellClicked"
QT_MOC_LITERAL(14, 315, 3), // "row"
QT_MOC_LITERAL(15, 319, 6), // "column"
QT_MOC_LITERAL(16, 326, 24), // "on_pushButton_13_clicked"
QT_MOC_LITERAL(17, 351, 24), // "on_pushButton_14_clicked"
QT_MOC_LITERAL(18, 376, 24), // "on_pushButton_16_clicked"
QT_MOC_LITERAL(19, 401, 24) // "on_pushButton_15_clicked"

    },
    "mainwindow\0on_pushButton_clicked\0\0"
    "on_pushButton_2_clicked\0on_actionQuit_triggered\0"
    "on_pushButton_3_clicked\0on_pushButton_4_clicked\0"
    "on_actionsquare_triggered\0"
    "on_actiontriangle_triggered\0"
    "on_actiontrapezium_triggered\0"
    "on_actionpolygon_triggered\0"
    "on_pushButton_7_clicked\0on_pushButton_8_clicked\0"
    "on_tableWidget_cellClicked\0row\0column\0"
    "on_pushButton_13_clicked\0"
    "on_pushButton_14_clicked\0"
    "on_pushButton_16_clicked\0"
    "on_pushButton_15_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mainwindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    0,  100,    2, 0x08 /* Private */,
       9,    0,  101,    2, 0x08 /* Private */,
      10,    0,  102,    2, 0x08 /* Private */,
      11,    0,  103,    2, 0x08 /* Private */,
      12,    0,  104,    2, 0x08 /* Private */,
      13,    2,  105,    2, 0x08 /* Private */,
      16,    0,  110,    2, 0x08 /* Private */,
      17,    0,  111,    2, 0x08 /* Private */,
      18,    0,  112,    2, 0x08 /* Private */,
      19,    0,  113,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void mainwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mainwindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->on_actionQuit_triggered(); break;
        case 3: _t->on_pushButton_3_clicked(); break;
        case 4: _t->on_pushButton_4_clicked(); break;
        case 5: _t->on_actionsquare_triggered(); break;
        case 6: _t->on_actiontriangle_triggered(); break;
        case 7: _t->on_actiontrapezium_triggered(); break;
        case 8: _t->on_actionpolygon_triggered(); break;
        case 9: _t->on_pushButton_7_clicked(); break;
        case 10: _t->on_pushButton_8_clicked(); break;
        case 11: _t->on_tableWidget_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->on_pushButton_13_clicked(); break;
        case 13: _t->on_pushButton_14_clicked(); break;
        case 14: _t->on_pushButton_16_clicked(); break;
        case 15: _t->on_pushButton_15_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mainwindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_mainwindow.data,
    qt_meta_data_mainwindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mainwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mainwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mainwindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int mainwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
