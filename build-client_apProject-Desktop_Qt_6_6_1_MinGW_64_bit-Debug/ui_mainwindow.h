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
#include <QtWidgets/QPushButton>
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
    QLabel *label;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(432, 451);
        MainWindow->setWindowOpacity(8.000000000000000);
        MainWindow->setTabShape(QTabWidget::Rounded);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        SignInButton = new QPushButton(centralwidget);
        SignInButton->setObjectName("SignInButton");
        SignInButton->setEnabled(false);
        SignInButton->setGeometry(QRect(100, 180, 221, 31));
        SignInButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:10px;\n"
"color: rgb(11, 4, 57);\n"
"background-color: rgb(204, 204, 204);\n"
"}\n"
"QPushButton:hover {\n"
"	;\n"
"	background-color: rgb(222, 255, 131);\n"
"    }\n"
""));
        usernameLineEdit = new QLineEdit(centralwidget);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setGeometry(QRect(200, 100, 121, 21));
        usernameLineEdit->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"background-color: #DCDCDC;"));
        passwordLineEdit = new QLineEdit(centralwidget);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(200, 140, 121, 21));
        passwordLineEdit->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"background-color: #DCDCDC;"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        usernameLabel = new QLabel(centralwidget);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setGeometry(QRect(100, 100, 81, 21));
        usernameLabel->setStyleSheet(QString::fromUtf8("color: #ECD8BE;"));
        passwordLabel = new QLabel(centralwidget);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setGeometry(QRect(100, 140, 81, 20));
        passwordLabel->setStyleSheet(QString::fromUtf8("color: #ECD8BE;"));
        SignUpMessageLabel = new QLabel(centralwidget);
        SignUpMessageLabel->setObjectName("SignUpMessageLabel");
        SignUpMessageLabel->setGeometry(QRect(100, 290, 161, 21));
        SignUpMessageLabel->setStyleSheet(QString::fromUtf8("color: #ECD8BE;"));
        SignUpButton = new QPushButton(centralwidget);
        SignUpButton->setObjectName("SignUpButton");
        SignUpButton->setGeometry(QRect(260, 287, 51, 24));
        QFont font;
        font.setPointSize(8);
        SignUpButton->setFont(font);
        SignUpButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{border:none;\n"
"color: #ECD8BE;\n"
"}\n"
"QPushButton:hover {\n"
"	\n"
"	color: rgb(255, 255, 52);\n"
"    }\n"
""));
        forgotPasswordButton = new QPushButton(centralwidget);
        forgotPasswordButton->setObjectName("forgotPasswordButton");
        forgotPasswordButton->setGeometry(QRect(160, 220, 111, 21));
        forgotPasswordButton->setFont(font);
        forgotPasswordButton->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: #ECD8BE;\n"
"QPushButton::hover {\n"
"color: rgb(228, 255, 179);\n"
"}\n"
""));
        eyeButton = new QPushButton(centralwidget);
        eyeButton->setObjectName("eyeButton");
        eyeButton->setGeometry(QRect(330, 140, 31, 21));
        eyeButton->setStyleSheet(QString::fromUtf8("image: url(:/chesh/show-password.png);\n"
"border-color: rgb(255, 255, 255);\n"
"\n"
"border-radius:5px;"));
        eyeButton->setCheckable(true);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(-120, 0, 671, 451));
        label->setStyleSheet(QString::fromUtf8("image: url(:/back/back.png)"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(180, 10, 71, 71));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/per/pe.png);"));
        MainWindow->setCentralWidget(centralwidget);
        label->raise();
        SignInButton->raise();
        usernameLineEdit->raise();
        passwordLineEdit->raise();
        usernameLabel->raise();
        passwordLabel->raise();
        SignUpMessageLabel->raise();
        SignUpButton->raise();
        forgotPasswordButton->raise();
        eyeButton->raise();
        label_2->raise();
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
        usernameLabel->setText(QCoreApplication::translate("MainWindow", "Username :", nullptr));
        passwordLabel->setText(QCoreApplication::translate("MainWindow", "Password :", nullptr));
        SignUpMessageLabel->setText(QCoreApplication::translate("MainWindow", "Don't have an account? ", nullptr));
        SignUpButton->setText(QCoreApplication::translate("MainWindow", "Sign up", nullptr));
        forgotPasswordButton->setText(QCoreApplication::translate("MainWindow", "Forgot password? ", nullptr));
        eyeButton->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
