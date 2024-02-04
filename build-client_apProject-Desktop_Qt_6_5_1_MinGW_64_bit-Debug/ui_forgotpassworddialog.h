/********************************************************************************
** Form generated from reading UI file 'forgotpassworddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGOTPASSWORDDIALOG_H
#define UI_FORGOTPASSWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_forgotPasswordDialog
{
public:
    QDialogButtonBox *ok_cancel_buttonBox;
    QLineEdit *emailLineEdit;
    QLineEdit *securityQuestionLineEdit;
    QLineEdit *newPasswordLineEdit;
    QLabel *emailLabel;
    QLabel *securityQuestionLabel;
    QLabel *newPasswordLabel;
    QPushButton *eyeButton;
    QLabel *label;

    void setupUi(QDialog *forgotPasswordDialog)
    {
        if (forgotPasswordDialog->objectName().isEmpty())
            forgotPasswordDialog->setObjectName("forgotPasswordDialog");
        forgotPasswordDialog->resize(436, 403);
        ok_cancel_buttonBox = new QDialogButtonBox(forgotPasswordDialog);
        ok_cancel_buttonBox->setObjectName("ok_cancel_buttonBox");
        ok_cancel_buttonBox->setEnabled(true);
        ok_cancel_buttonBox->setGeometry(QRect(110, 240, 201, 32));
        ok_cancel_buttonBox->setOrientation(Qt::Horizontal);
        ok_cancel_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        emailLineEdit = new QLineEdit(forgotPasswordDialog);
        emailLineEdit->setObjectName("emailLineEdit");
        emailLineEdit->setGeometry(QRect(200, 100, 141, 21));
        emailLineEdit->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"background-color: #DCDCDC;"));
        securityQuestionLineEdit = new QLineEdit(forgotPasswordDialog);
        securityQuestionLineEdit->setObjectName("securityQuestionLineEdit");
        securityQuestionLineEdit->setGeometry(QRect(200, 180, 141, 21));
        securityQuestionLineEdit->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"background-color: #DCDCDC;"));
        newPasswordLineEdit = new QLineEdit(forgotPasswordDialog);
        newPasswordLineEdit->setObjectName("newPasswordLineEdit");
        newPasswordLineEdit->setGeometry(QRect(200, 140, 141, 21));
        newPasswordLineEdit->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"background-color: #DCDCDC;"));
        newPasswordLineEdit->setEchoMode(QLineEdit::Password);
        emailLabel = new QLabel(forgotPasswordDialog);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setGeometry(QRect(60, 100, 101, 20));
        emailLabel->setStyleSheet(QString::fromUtf8("color: #ECD8BE;"));
        securityQuestionLabel = new QLabel(forgotPasswordDialog);
        securityQuestionLabel->setObjectName("securityQuestionLabel");
        securityQuestionLabel->setGeometry(QRect(60, 180, 141, 21));
        securityQuestionLabel->setStyleSheet(QString::fromUtf8("color: #ECD8BE;"));
        newPasswordLabel = new QLabel(forgotPasswordDialog);
        newPasswordLabel->setObjectName("newPasswordLabel");
        newPasswordLabel->setGeometry(QRect(60, 140, 101, 20));
        newPasswordLabel->setStyleSheet(QString::fromUtf8("color: #ECD8BE;"));
        eyeButton = new QPushButton(forgotPasswordDialog);
        eyeButton->setObjectName("eyeButton");
        eyeButton->setGeometry(QRect(350, 140, 31, 24));
        eyeButton->setStyleSheet(QString::fromUtf8("image: url(:/eye/unhided.png);\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));
        eyeButton->setCheckable(true);
        label = new QLabel(forgotPasswordDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(-20, 0, 471, 401));
        label->setStyleSheet(QString::fromUtf8("image: url(:/back/back.png)"));
        label->raise();
        ok_cancel_buttonBox->raise();
        emailLineEdit->raise();
        securityQuestionLineEdit->raise();
        newPasswordLineEdit->raise();
        emailLabel->raise();
        securityQuestionLabel->raise();
        newPasswordLabel->raise();
        eyeButton->raise();
        QWidget::setTabOrder(emailLineEdit, securityQuestionLineEdit);
        QWidget::setTabOrder(securityQuestionLineEdit, newPasswordLineEdit);

        retranslateUi(forgotPasswordDialog);
        QObject::connect(ok_cancel_buttonBox, &QDialogButtonBox::accepted, forgotPasswordDialog, qOverload<>(&QDialog::accept));
        QObject::connect(ok_cancel_buttonBox, &QDialogButtonBox::rejected, forgotPasswordDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(forgotPasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *forgotPasswordDialog)
    {
        forgotPasswordDialog->setWindowTitle(QCoreApplication::translate("forgotPasswordDialog", "Forgot Password", nullptr));
        emailLabel->setText(QCoreApplication::translate("forgotPasswordDialog", "Email address : ", nullptr));
        securityQuestionLabel->setText(QCoreApplication::translate("forgotPasswordDialog", "First grade teacher", nullptr));
        newPasswordLabel->setText(QCoreApplication::translate("forgotPasswordDialog", "New password :  ", nullptr));
        eyeButton->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class forgotPasswordDialog: public Ui_forgotPasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGOTPASSWORDDIALOG_H
