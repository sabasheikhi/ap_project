/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../client_apProject/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "success_signup",
    "",
    "username_taken",
    "signUpRequest",
    "username",
    "password",
    "name",
    "email",
    "security",
    "handleWrite",
    "on_SignInButton_clicked",
    "on_SignUpButton_clicked",
    "on_forgotPasswordButton_clicked",
    "on_usernameLineEdit_textChanged",
    "arg1",
    "on_passwordLineEdit_textChanged",
    "on_eyeButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[36];
    char stringdata0[11];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[14];
    char stringdata5[9];
    char stringdata6[9];
    char stringdata7[5];
    char stringdata8[6];
    char stringdata9[9];
    char stringdata10[12];
    char stringdata11[24];
    char stringdata12[24];
    char stringdata13[32];
    char stringdata14[32];
    char stringdata15[5];
    char stringdata16[32];
    char stringdata17[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 14),  // "success_signup"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 14),  // "username_taken"
        QT_MOC_LITERAL(42, 13),  // "signUpRequest"
        QT_MOC_LITERAL(56, 8),  // "username"
        QT_MOC_LITERAL(65, 8),  // "password"
        QT_MOC_LITERAL(74, 4),  // "name"
        QT_MOC_LITERAL(79, 5),  // "email"
        QT_MOC_LITERAL(85, 8),  // "security"
        QT_MOC_LITERAL(94, 11),  // "handleWrite"
        QT_MOC_LITERAL(106, 23),  // "on_SignInButton_clicked"
        QT_MOC_LITERAL(130, 23),  // "on_SignUpButton_clicked"
        QT_MOC_LITERAL(154, 31),  // "on_forgotPasswordButton_clicked"
        QT_MOC_LITERAL(186, 31),  // "on_usernameLineEdit_textChanged"
        QT_MOC_LITERAL(218, 4),  // "arg1"
        QT_MOC_LITERAL(223, 31),  // "on_passwordLineEdit_textChanged"
        QT_MOC_LITERAL(255, 20)   // "on_eyeButton_clicked"
    },
    "MainWindow",
    "success_signup",
    "",
    "username_taken",
    "signUpRequest",
    "username",
    "password",
    "name",
    "email",
    "security",
    "handleWrite",
    "on_SignInButton_clicked",
    "on_SignUpButton_clicked",
    "on_forgotPasswordButton_clicked",
    "on_usernameLineEdit_textChanged",
    "arg1",
    "on_passwordLineEdit_textChanged",
    "on_eyeButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    1 /* Public */,
       3,    0,   75,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    5,   76,    2, 0x08,    3 /* Private */,
      10,    0,   87,    2, 0x08,    9 /* Private */,
      11,    0,   88,    2, 0x08,   10 /* Private */,
      12,    0,   89,    2, 0x08,   11 /* Private */,
      13,    0,   90,    2, 0x08,   12 /* Private */,
      14,    1,   91,    2, 0x08,   13 /* Private */,
      16,    1,   94,    2, 0x08,   15 /* Private */,
      17,    0,   97,    2, 0x08,   17 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,    7,    8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'success_signup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'username_taken'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signUpRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'handleWrite'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_SignInButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_SignUpButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_forgotPasswordButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_usernameLineEdit_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_passwordLineEdit_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_eyeButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success_signup(); break;
        case 1: _t->username_taken(); break;
        case 2: _t->signUpRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5]))); break;
        case 3: _t->handleWrite(); break;
        case 4: _t->on_SignInButton_clicked(); break;
        case 5: _t->on_SignUpButton_clicked(); break;
        case 6: _t->on_forgotPasswordButton_clicked(); break;
        case 7: _t->on_usernameLineEdit_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->on_passwordLineEdit_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->on_eyeButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::success_signup; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::username_taken; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::success_signup()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::username_taken()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
