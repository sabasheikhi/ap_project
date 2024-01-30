/****************************************************************************
** Meta object code from reading C++ file 'signupdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../client_apProject/signupdialog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signupdialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSignUpDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSignUpDialogENDCLASS = QtMocHelpers::stringData(
    "SignUpDialog",
    "SignUpRequest",
    "",
    "username",
    "password",
    "name",
    "email",
    "security",
    "on_ok_cancel_buttonBox_accepted",
    "on_eyeButton_clicked",
    "signup_success",
    "username_taken",
    "on_pushButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSignUpDialogENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[13];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[9];
    char stringdata5[5];
    char stringdata6[6];
    char stringdata7[9];
    char stringdata8[32];
    char stringdata9[21];
    char stringdata10[15];
    char stringdata11[15];
    char stringdata12[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSignUpDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSignUpDialogENDCLASS_t qt_meta_stringdata_CLASSSignUpDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "SignUpDialog"
        QT_MOC_LITERAL(13, 13),  // "SignUpRequest"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 8),  // "username"
        QT_MOC_LITERAL(37, 8),  // "password"
        QT_MOC_LITERAL(46, 4),  // "name"
        QT_MOC_LITERAL(51, 5),  // "email"
        QT_MOC_LITERAL(57, 8),  // "security"
        QT_MOC_LITERAL(66, 31),  // "on_ok_cancel_buttonBox_accepted"
        QT_MOC_LITERAL(98, 20),  // "on_eyeButton_clicked"
        QT_MOC_LITERAL(119, 14),  // "signup_success"
        QT_MOC_LITERAL(134, 14),  // "username_taken"
        QT_MOC_LITERAL(149, 21)   // "on_pushButton_clicked"
    },
    "SignUpDialog",
    "SignUpRequest",
    "",
    "username",
    "password",
    "name",
    "email",
    "security",
    "on_ok_cancel_buttonBox_accepted",
    "on_eyeButton_clicked",
    "signup_success",
    "username_taken",
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSignUpDialogENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    5,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   61,    2, 0x08,    7 /* Private */,
       9,    0,   62,    2, 0x08,    8 /* Private */,
      10,    0,   63,    2, 0x08,    9 /* Private */,
      11,    0,   64,    2, 0x08,   10 /* Private */,
      12,    0,   65,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SignUpDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSSignUpDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSignUpDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSignUpDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SignUpDialog, std::true_type>,
        // method 'SignUpRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_ok_cancel_buttonBox_accepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_eyeButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signup_success'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'username_taken'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SignUpDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SignUpDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SignUpRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5]))); break;
        case 1: _t->on_ok_cancel_buttonBox_accepted(); break;
        case 2: _t->on_eyeButton_clicked(); break;
        case 3: _t->signup_success(); break;
        case 4: _t->username_taken(); break;
        case 5: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SignUpDialog::*)(QString , QString , QString , QString , QString );
            if (_t _q_method = &SignUpDialog::SignUpRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *SignUpDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SignUpDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSignUpDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SignUpDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SignUpDialog::SignUpRequest(QString _t1, QString _t2, QString _t3, QString _t4, QString _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
