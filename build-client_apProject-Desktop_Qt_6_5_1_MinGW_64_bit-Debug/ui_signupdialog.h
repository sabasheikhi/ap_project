/********************************************************************************
** Form generated from reading UI file 'signupdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPDIALOG_H
#define UI_SIGNUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SignUpDialog
{
public:
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QLabel *usernameLabel;
    QLabel *passwordLabel;
    QLabel *securityQuestionLabel;
    QLineEdit *securityQuestionLineEdit;
    QLineEdit *fullnameLineEdit;
    QLabel *fullNameLabel;
    QLineEdit *emailLineEdit;
    QLabel *emailLabel;
    QPushButton *eyeButton;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *SignUpDialog)
    {
        if (SignUpDialog->objectName().isEmpty())
            SignUpDialog->setObjectName("SignUpDialog");
        SignUpDialog->resize(478, 418);
        usernameLineEdit = new QLineEdit(SignUpDialog);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setGeometry(QRect(210, 80, 171, 24));
        usernameLineEdit->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"background-color: #DCDCDC;"));
        passwordLineEdit = new QLineEdit(SignUpDialog);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(210, 230, 171, 24));
        passwordLineEdit->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"background-color: #DCDCDC;"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        usernameLabel = new QLabel(SignUpDialog);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setGeometry(QRect(60, 80, 91, 21));
        usernameLabel->setStyleSheet(QString::fromUtf8("color: #ECD8BE;"));
        passwordLabel = new QLabel(SignUpDialog);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setGeometry(QRect(60, 230, 81, 21));
        passwordLabel->setStyleSheet(QString::fromUtf8("color: #ECD8BE;"));
        securityQuestionLabel = new QLabel(SignUpDialog);
        securityQuestionLabel->setObjectName("securityQuestionLabel");
        securityQuestionLabel->setGeometry(QRect(60, 280, 121, 21));
        securityQuestionLabel->setStyleSheet(QString::fromUtf8("color: #ECD8BE;"));
        securityQuestionLineEdit = new QLineEdit(SignUpDialog);
        securityQuestionLineEdit->setObjectName("securityQuestionLineEdit");
        securityQuestionLineEdit->setGeometry(QRect(210, 280, 171, 24));
        securityQuestionLineEdit->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"background-color: #DCDCDC;"));
        fullnameLineEdit = new QLineEdit(SignUpDialog);
        fullnameLineEdit->setObjectName("fullnameLineEdit");
        fullnameLineEdit->setGeometry(QRect(210, 130, 171, 24));
        fullnameLineEdit->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"background-color: #DCDCDC;"));
        fullNameLabel = new QLabel(SignUpDialog);
        fullNameLabel->setObjectName("fullNameLabel");
        fullNameLabel->setGeometry(QRect(60, 130, 91, 21));
        fullNameLabel->setStyleSheet(QString::fromUtf8("color: #ECD8BE;"));
        emailLineEdit = new QLineEdit(SignUpDialog);
        emailLineEdit->setObjectName("emailLineEdit");
        emailLineEdit->setGeometry(QRect(210, 180, 171, 24));
        emailLineEdit->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"background-color: #DCDCDC;"));
        emailLabel = new QLabel(SignUpDialog);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setGeometry(QRect(60, 180, 101, 21));
        emailLabel->setStyleSheet(QString::fromUtf8("color: #ECD8BE;"));
        eyeButton = new QPushButton(SignUpDialog);
        eyeButton->setObjectName("eyeButton");
        eyeButton->setGeometry(QRect(400, 230, 31, 24));
        eyeButton->setStyleSheet(QString::fromUtf8("image: url(:/chesh/show-password.png);\n"
""));
        eyeButton->setCheckable(true);
        label = new QLabel(SignUpDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(0, -10, 481, 431));
        label->setStyleSheet(QString::fromUtf8("image: url(:/backs/backsi.png);"));
        label_2 = new QLabel(SignUpDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 30, 101, 31));
        label_2->setStyleSheet(QString::fromUtf8("color: #ECD8BE;\n"
""));
        pushButton = new QPushButton(SignUpDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(170, 330, 131, 31));
        QFont font;
        font.setPointSize(11);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"color: rgb(4, 11, 68);\n"
"background-color: #DCDCDC;"));
        label->raise();
        usernameLineEdit->raise();
        passwordLineEdit->raise();
        usernameLabel->raise();
        passwordLabel->raise();
        securityQuestionLabel->raise();
        securityQuestionLineEdit->raise();
        fullnameLineEdit->raise();
        fullNameLabel->raise();
        emailLineEdit->raise();
        emailLabel->raise();
        eyeButton->raise();
        label_2->raise();
        pushButton->raise();
        QWidget::setTabOrder(usernameLineEdit, passwordLineEdit);
        QWidget::setTabOrder(passwordLineEdit, fullnameLineEdit);
        QWidget::setTabOrder(fullnameLineEdit, emailLineEdit);
        QWidget::setTabOrder(emailLineEdit, securityQuestionLineEdit);

        retranslateUi(SignUpDialog);

        QMetaObject::connectSlotsByName(SignUpDialog);
    } // setupUi

    void retranslateUi(QDialog *SignUpDialog)
    {
        SignUpDialog->setWindowTitle(QCoreApplication::translate("SignUpDialog", "Sign Up", nullptr));
        usernameLabel->setText(QCoreApplication::translate("SignUpDialog", "Username : ", nullptr));
        passwordLabel->setText(QCoreApplication::translate("SignUpDialog", "Password : ", nullptr));
        securityQuestionLabel->setText(QCoreApplication::translate("SignUpDialog", "Security Question: ", nullptr));
#if QT_CONFIG(whatsthis)
        securityQuestionLineEdit->setWhatsThis(QCoreApplication::translate("SignUpDialog", "<html><head/><body><p>border-radius:7px;</p><p>background-color: #DCDCDC;</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        fullNameLabel->setText(QCoreApplication::translate("SignUpDialog", "Full name : ", nullptr));
        emailLabel->setText(QCoreApplication::translate("SignUpDialog", "Email address : ", nullptr));
        eyeButton->setText(QString());
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("SignUpDialog", "signup page", nullptr));
        pushButton->setText(QCoreApplication::translate("SignUpDialog", "sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUpDialog: public Ui_SignUpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPDIALOG_H
