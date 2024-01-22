/********************************************************************************
** Form generated from reading UI file 'forgotpassworddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
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

    void setupUi(QDialog *forgotPasswordDialog)
    {
        if (forgotPasswordDialog->objectName().isEmpty())
            forgotPasswordDialog->setObjectName("forgotPasswordDialog");
        forgotPasswordDialog->resize(420, 234);
        ok_cancel_buttonBox = new QDialogButtonBox(forgotPasswordDialog);
        ok_cancel_buttonBox->setObjectName("ok_cancel_buttonBox");
        ok_cancel_buttonBox->setEnabled(true);
        ok_cancel_buttonBox->setGeometry(QRect(20, 170, 341, 32));
        ok_cancel_buttonBox->setOrientation(Qt::Horizontal);
        ok_cancel_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        emailLineEdit = new QLineEdit(forgotPasswordDialog);
        emailLineEdit->setObjectName("emailLineEdit");
        emailLineEdit->setGeometry(QRect(160, 50, 171, 24));
        securityQuestionLineEdit = new QLineEdit(forgotPasswordDialog);
        securityQuestionLineEdit->setObjectName("securityQuestionLineEdit");
        securityQuestionLineEdit->setGeometry(QRect(160, 90, 171, 24));
        newPasswordLineEdit = new QLineEdit(forgotPasswordDialog);
        newPasswordLineEdit->setObjectName("newPasswordLineEdit");
        newPasswordLineEdit->setGeometry(QRect(160, 130, 171, 24));
        newPasswordLineEdit->setEchoMode(QLineEdit::Password);
        emailLabel = new QLabel(forgotPasswordDialog);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setGeometry(QRect(70, 50, 81, 20));
        securityQuestionLabel = new QLabel(forgotPasswordDialog);
        securityQuestionLabel->setObjectName("securityQuestionLabel");
        securityQuestionLabel->setGeometry(QRect(50, 90, 111, 20));
        newPasswordLabel = new QLabel(forgotPasswordDialog);
        newPasswordLabel->setObjectName("newPasswordLabel");
        newPasswordLabel->setGeometry(QRect(70, 130, 81, 20));
        eyeButton = new QPushButton(forgotPasswordDialog);
        eyeButton->setObjectName("eyeButton");
        eyeButton->setGeometry(QRect(340, 130, 31, 24));
        eyeButton->setStyleSheet(QString::fromUtf8("image: url(:/eye/unhided.png);\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));
        eyeButton->setCheckable(true);
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
        emailLabel->setText(QCoreApplication::translate("forgotPasswordDialog", "Email address: ", nullptr));
        securityQuestionLabel->setText(QCoreApplication::translate("forgotPasswordDialog", "Your favorite song:", nullptr));
        newPasswordLabel->setText(QCoreApplication::translate("forgotPasswordDialog", "New password: ", nullptr));
        eyeButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class forgotPasswordDialog: public Ui_forgotPasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGOTPASSWORDDIALOG_H
