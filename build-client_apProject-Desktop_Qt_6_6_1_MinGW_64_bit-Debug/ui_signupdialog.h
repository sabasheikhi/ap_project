/********************************************************************************
** Form generated from reading UI file 'signupdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPDIALOG_H
#define UI_SIGNUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
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
    QDialogButtonBox *ok_cancel_buttonBox;
    QPushButton *eyeButton;

    void setupUi(QDialog *SignUpDialog)
    {
        if (SignUpDialog->objectName().isEmpty())
            SignUpDialog->setObjectName("SignUpDialog");
        SignUpDialog->resize(433, 300);
        usernameLineEdit = new QLineEdit(SignUpDialog);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setGeometry(QRect(120, 20, 241, 24));
        passwordLineEdit = new QLineEdit(SignUpDialog);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(120, 60, 241, 24));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        usernameLabel = new QLabel(SignUpDialog);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setGeometry(QRect(50, 20, 61, 16));
        passwordLabel = new QLabel(SignUpDialog);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setGeometry(QRect(50, 60, 61, 16));
        securityQuestionLabel = new QLabel(SignUpDialog);
        securityQuestionLabel->setObjectName("securityQuestionLabel");
        securityQuestionLabel->setGeometry(QRect(30, 180, 201, 16));
        securityQuestionLineEdit = new QLineEdit(SignUpDialog);
        securityQuestionLineEdit->setObjectName("securityQuestionLineEdit");
        securityQuestionLineEdit->setGeometry(QRect(120, 210, 241, 24));
        fullnameLineEdit = new QLineEdit(SignUpDialog);
        fullnameLineEdit->setObjectName("fullnameLineEdit");
        fullnameLineEdit->setGeometry(QRect(120, 100, 241, 24));
        fullNameLabel = new QLabel(SignUpDialog);
        fullNameLabel->setObjectName("fullNameLabel");
        fullNameLabel->setGeometry(QRect(50, 100, 61, 16));
        emailLineEdit = new QLineEdit(SignUpDialog);
        emailLineEdit->setObjectName("emailLineEdit");
        emailLineEdit->setGeometry(QRect(120, 140, 241, 24));
        emailLabel = new QLabel(SignUpDialog);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setGeometry(QRect(30, 140, 81, 20));
        ok_cancel_buttonBox = new QDialogButtonBox(SignUpDialog);
        ok_cancel_buttonBox->setObjectName("ok_cancel_buttonBox");
        ok_cancel_buttonBox->setEnabled(true);
        ok_cancel_buttonBox->setGeometry(QRect(190, 250, 166, 24));
        ok_cancel_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        eyeButton = new QPushButton(SignUpDialog);
        eyeButton->setObjectName("eyeButton");
        eyeButton->setGeometry(QRect(370, 60, 31, 24));
        eyeButton->setStyleSheet(QString::fromUtf8("image: url(:/eye/unhided.png);\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));
        eyeButton->setCheckable(true);
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
        usernameLabel->setText(QCoreApplication::translate("SignUpDialog", "Username: ", nullptr));
        passwordLabel->setText(QCoreApplication::translate("SignUpDialog", "Password: ", nullptr));
        securityQuestionLabel->setText(QCoreApplication::translate("SignUpDialog", "Security Question: your favorite song: ", nullptr));
        fullNameLabel->setText(QCoreApplication::translate("SignUpDialog", "Full name: ", nullptr));
        emailLabel->setText(QCoreApplication::translate("SignUpDialog", "Email address: ", nullptr));
        eyeButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SignUpDialog: public Ui_SignUpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPDIALOG_H
