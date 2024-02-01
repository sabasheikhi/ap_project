/****************************************************************************
** Meta object code from reading C++ file 'teamdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../client_apProject/teamdialog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'teamdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
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
struct qt_meta_stringdata_CLASSteamdialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSteamdialogENDCLASS = QtMocHelpers::stringData(
    "teamdialog",
    "closeeditpro",
    "",
    "handleWrite",
    "on_editpro_clicked",
    "request_edit",
    "on_deletepro_clicked",
    "on_addOrEditUser_clicked",
    "on_delete_user_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSteamdialogENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[11];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[19];
    char stringdata5[13];
    char stringdata6[21];
    char stringdata7[25];
    char stringdata8[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSteamdialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSteamdialogENDCLASS_t qt_meta_stringdata_CLASSteamdialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "teamdialog"
        QT_MOC_LITERAL(11, 12),  // "closeeditpro"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 11),  // "handleWrite"
        QT_MOC_LITERAL(37, 18),  // "on_editpro_clicked"
        QT_MOC_LITERAL(56, 12),  // "request_edit"
        QT_MOC_LITERAL(69, 20),  // "on_deletepro_clicked"
        QT_MOC_LITERAL(90, 24),  // "on_addOrEditUser_clicked"
        QT_MOC_LITERAL(115, 22)   // "on_delete_user_clicked"
    },
    "teamdialog",
    "closeeditpro",
    "",
    "handleWrite",
    "on_editpro_clicked",
    "request_edit",
    "on_deletepro_clicked",
    "on_addOrEditUser_clicked",
    "on_delete_user_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSteamdialogENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    2,   59,    2, 0x08,    4 /* Private */,
       6,    0,   64,    2, 0x08,    7 /* Private */,
       7,    0,   65,    2, 0x08,    8 /* Private */,
       8,    0,   66,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject teamdialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSteamdialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSteamdialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSteamdialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<teamdialog, std::true_type>,
        // method 'closeeditpro'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleWrite'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_editpro_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'request_edit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_deletepro_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addOrEditUser_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_delete_user_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void teamdialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<teamdialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeeditpro(); break;
        case 1: _t->handleWrite(); break;
        case 2: _t->on_editpro_clicked(); break;
        case 3: _t->request_edit((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->on_deletepro_clicked(); break;
        case 5: _t->on_addOrEditUser_clicked(); break;
        case 6: _t->on_delete_user_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (teamdialog::*)();
            if (_t _q_method = &teamdialog::closeeditpro; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *teamdialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *teamdialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSteamdialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int teamdialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void teamdialog::closeeditpro()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
