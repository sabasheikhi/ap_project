/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *SignInButton;
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QLabel *usernameLabel;
    QLabel *passwordLabel;
    QLabel *SignUpMessageLabel;
    QPushButton *SignUpButton;
    QPushButton *forgotPasswordButton;
    QPushButton *eyeButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        SignInButton = new QPushButton(centralwidget);
        SignInButton->setObjectName("SignInButton");
        SignInButton->setEnabled(false);
        SignInButton->setGeometry(QRect(160, 250, 321, 31));
        usernameLineEdit = new QLineEdit(centralwidget);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setGeometry(QRect(220, 160, 261, 24));
        passwordLineEdit = new QLineEdit(centralwidget);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(220, 200, 261, 24));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        usernameLabel = new QLabel(centralwidget);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setGeometry(QRect(160, 160, 61, 20));
        passwordLabel = new QLabel(centralwidget);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setGeometry(QRect(160, 200, 49, 16));
        SignUpMessageLabel = new QLabel(centralwidget);
        SignUpMessageLabel->setObjectName("SignUpMessageLabel");
        SignUpMessageLabel->setGeometry(QRect(10, 10, 171, 16));
        SignUpButton = new QPushButton(centralwidget);
        SignUpButton->setObjectName("SignUpButton");
        SignUpButton->setGeometry(QRect(200, 10, 71, 24));
        forgotPasswordButton = new QPushButton(centralwidget);
        forgotPasswordButton->setObjectName("forgotPasswordButton");
        forgotPasswordButton->setGeometry(QRect(160, 300, 321, 31));
        eyeButton = new QPushButton(centralwidget);
        eyeButton->setObjectName("eyeButton");
        eyeButton->setGeometry(QRect(490, 200, 31, 24));
        eyeButton->setStyleSheet(QString::fromUtf8("image: url(:/eye/unhided.png);\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));
        eyeButton->setCheckable(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(usernameLineEdit, passwordLineEdit);
        QWidget::setTabOrder(passwordLineEdit, forgotPasswordButton);
        QWidget::setTabOrder(forgotPasswordButton, SignUpButton);
        QWidget::setTabOrder(SignUpButton, SignInButton);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        SignInButton->setText(QCoreApplication::translate("MainWindow", "Sign in", nullptr));
        usernameLabel->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        passwordLabel->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        SignUpMessageLabel->setText(QCoreApplication::translate("MainWindow", "Don't have an account? Sign up!", nullptr));
        SignUpButton->setText(QCoreApplication::translate("MainWindow", "Sign up", nullptr));
        forgotPasswordButton->setText(QCoreApplication::translate("MainWindow", "Forgot password? ", nullptr));
        eyeButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
