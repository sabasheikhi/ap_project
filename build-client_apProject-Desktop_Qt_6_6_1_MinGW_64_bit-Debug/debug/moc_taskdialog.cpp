/****************************************************************************
** Meta object code from reading C++ file 'taskdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../client_apProject/taskdialog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'taskdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASStaskdialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASStaskdialogENDCLASS = QtMocHelpers::stringData(
    "taskdialog",
    "closeedittask",
    "",
    "on_changestatus_clicked",
    "on_deletetask_clicked",
    "handleWrite",
    "on_edittask_clicked",
    "on_addtask_clicked",
    "onMessageClicked",
    "QListWidgetItem*",
    "item",
    "on_sendButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASStaskdialogENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[11];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[22];
    char stringdata5[12];
    char stringdata6[20];
    char stringdata7[19];
    char stringdata8[17];
    char stringdata9[17];
    char stringdata10[5];
    char stringdata11[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASStaskdialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASStaskdialogENDCLASS_t qt_meta_stringdata_CLASStaskdialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "taskdialog"
        QT_MOC_LITERAL(11, 13),  // "closeedittask"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 23),  // "on_changestatus_clicked"
        QT_MOC_LITERAL(50, 21),  // "on_deletetask_clicked"
        QT_MOC_LITERAL(72, 11),  // "handleWrite"
        QT_MOC_LITERAL(84, 19),  // "on_edittask_clicked"
        QT_MOC_LITERAL(104, 18),  // "on_addtask_clicked"
        QT_MOC_LITERAL(123, 16),  // "onMessageClicked"
        QT_MOC_LITERAL(140, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(157, 4),  // "item"
        QT_MOC_LITERAL(162, 21)   // "on_sendButton_clicked"
    },
    "taskdialog",
    "closeedittask",
    "",
    "on_changestatus_clicked",
    "on_deletetask_clicked",
    "handleWrite",
    "on_edittask_clicked",
    "on_addtask_clicked",
    "onMessageClicked",
    "QListWidgetItem*",
    "item",
    "on_sendButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASStaskdialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    1,   68,    2, 0x08,    7 /* Private */,
      11,    0,   71,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject taskdialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASStaskdialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASStaskdialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASStaskdialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<taskdialog, std::true_type>,
        // method 'closeedittask'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_changestatus_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deletetask_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleWrite'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_edittask_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addtask_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMessageClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'on_sendButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void taskdialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<taskdialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeedittask(); break;
        case 1: _t->on_changestatus_clicked(); break;
        case 2: _t->on_deletetask_clicked(); break;
        case 3: _t->handleWrite(); break;
        case 4: _t->on_edittask_clicked(); break;
        case 5: _t->on_addtask_clicked(); break;
        case 6: _t->onMessageClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 7: _t->on_sendButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (taskdialog::*)();
            if (_t _q_method = &taskdialog::closeedittask; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *taskdialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *taskdialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASStaskdialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int taskdialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void taskdialog::closeedittask()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
