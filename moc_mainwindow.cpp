/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[34];
    char stringdata0[452];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 29), // "on_pushButtonAddTable_clicked"
QT_MOC_LITERAL(41, 0), // ""
QT_MOC_LITERAL(42, 30), // "on_pushButtonSqlExecut_clicked"
QT_MOC_LITERAL(73, 35), // "on_listWidgetTablesList_itemC..."
QT_MOC_LITERAL(109, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(126, 4), // "item"
QT_MOC_LITERAL(131, 35), // "on_pushButtonChangeDatabase_c..."
QT_MOC_LITERAL(167, 32), // "on_pushButtonDeleteEntry_clicked"
QT_MOC_LITERAL(200, 33), // "on_pushButtonInsertExecut_cli..."
QT_MOC_LITERAL(234, 25), // "on_action_Close_triggered"
QT_MOC_LITERAL(260, 34), // "on_actionChange_Database_trig..."
QT_MOC_LITERAL(295, 32), // "on_pushButtonDeleteTable_clicked"
QT_MOC_LITERAL(328, 35), // "on_pushButtonExportDatabase_c..."
QT_MOC_LITERAL(364, 32), // "on_pushButtonExportTable_clicked"
QT_MOC_LITERAL(397, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(419, 32) // "on_pushButtonImportTable_clicked"

    },
    "MainWindow\0on_pushButtonAddTable_clicked\0"
    "\0on_pushButtonSqlExecut_clicked\0"
    "on_listWidgetTablesList_itemClicked\0"
    "QListWidgetItem*\0item\0"
    "on_pushButtonChangeDatabase_clicked\0"
    "on_pushButtonDeleteEntry_clicked\0"
    "on_pushButtonInsertExecut_clicked\0"
    "on_action_Close_triggered\0"
    "on_actionChange_Database_triggered\0"
    "on_pushButtonDeleteTable_clicked\0"
    "on_pushButtonExportDatabase_clicked\0"
    "on_pushButtonExportTable_clicked\0"
    "on_pushButton_clicked\0"
    "on_pushButtonImportTable_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x08,    1 /* Private */,
       3,    0,   93,    2, 0x08,    2 /* Private */,
       4,    1,   94,    2, 0x08,    3 /* Private */,
       7,    0,   97,    2, 0x08,    5 /* Private */,
       8,    0,   98,    2, 0x08,    6 /* Private */,
       9,    0,   99,    2, 0x08,    7 /* Private */,
      10,    0,  100,    2, 0x08,    8 /* Private */,
      11,    0,  101,    2, 0x08,    9 /* Private */,
      12,    0,  102,    2, 0x08,   10 /* Private */,
      13,    0,  103,    2, 0x08,   11 /* Private */,
      14,    0,  104,    2, 0x08,   12 /* Private */,
      15,    0,  105,    2, 0x08,   13 /* Private */,
      16,    0,  106,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
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

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButtonAddTable_clicked(); break;
        case 1: _t->on_pushButtonSqlExecut_clicked(); break;
        case 2: _t->on_listWidgetTablesList_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->on_pushButtonChangeDatabase_clicked(); break;
        case 4: _t->on_pushButtonDeleteEntry_clicked(); break;
        case 5: _t->on_pushButtonInsertExecut_clicked(); break;
        case 6: _t->on_action_Close_triggered(); break;
        case 7: _t->on_actionChange_Database_triggered(); break;
        case 8: _t->on_pushButtonDeleteTable_clicked(); break;
        case 9: _t->on_pushButtonExportDatabase_clicked(); break;
        case 10: _t->on_pushButtonExportTable_clicked(); break;
        case 11: _t->on_pushButton_clicked(); break;
        case 12: _t->on_pushButtonImportTable_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
