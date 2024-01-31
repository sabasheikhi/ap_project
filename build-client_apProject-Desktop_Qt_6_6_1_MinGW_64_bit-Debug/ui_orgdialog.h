/********************************************************************************
** Form generated from reading UI file 'orgdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORGDIALOG_H
#define UI_ORGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrgDialog
{
public:
    QLabel *img;
    QPushButton *editorg;
    QPushButton *deleteorg;
    QComboBox *roleComboBox;
    QLabel *roleLabel;
    QLabel *idLabel;
    QLineEdit *idLineEdit;
    QPushButton *delete_user;
    QPushButton *addOrEditUser;
    QLabel *nameLabel;
    QLabel *descriptionLabel;

    void setupUi(QWidget *OrgDialog)
    {
        if (OrgDialog->objectName().isEmpty())
            OrgDialog->setObjectName("OrgDialog");
        OrgDialog->resize(1169, 700);
        img = new QLabel(OrgDialog);
        img->setObjectName("img");
        img->setGeometry(QRect(-20, 0, 1211, 701));
        img->setStyleSheet(QString::fromUtf8("image: url(:/dashboard/dashboard.png);"));
        editorg = new QPushButton(OrgDialog);
        editorg->setObjectName("editorg");
        editorg->setGeometry(QRect(50, 170, 201, 29));
        editorg->setStyleSheet(QString::fromUtf8("color: rgb(7, 7, 7);\n"
"background-color: rgb(255, 255, 255);"));
        deleteorg = new QPushButton(OrgDialog);
        deleteorg->setObjectName("deleteorg");
        deleteorg->setGeometry(QRect(50, 230, 201, 29));
        roleComboBox = new QComboBox(OrgDialog);
        roleComboBox->addItem(QString());
        roleComboBox->addItem(QString());
        roleComboBox->addItem(QString());
        roleComboBox->setObjectName("roleComboBox");
        roleComboBox->setGeometry(QRect(140, 360, 111, 25));
        roleLabel = new QLabel(OrgDialog);
        roleLabel->setObjectName("roleLabel");
        roleLabel->setGeometry(QRect(70, 360, 41, 20));
        roleLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        idLabel = new QLabel(OrgDialog);
        idLabel->setObjectName("idLabel");
        idLabel->setGeometry(QRect(70, 320, 31, 20));
        idLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        idLineEdit = new QLineEdit(OrgDialog);
        idLineEdit->setObjectName("idLineEdit");
        idLineEdit->setGeometry(QRect(140, 310, 113, 25));
        delete_user = new QPushButton(OrgDialog);
        delete_user->setObjectName("delete_user");
        delete_user->setGeometry(QRect(70, 440, 181, 29));
        addOrEditUser = new QPushButton(OrgDialog);
        addOrEditUser->setObjectName("addOrEditUser");
        addOrEditUser->setGeometry(QRect(70, 490, 181, 29));
        nameLabel = new QLabel(OrgDialog);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(110, 70, 63, 20));
        nameLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 170, 127);"));
        descriptionLabel = new QLabel(OrgDialog);
        descriptionLabel->setObjectName("descriptionLabel");
        descriptionLabel->setGeometry(QRect(110, 110, 63, 20));
        descriptionLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 170, 127);"));

        retranslateUi(OrgDialog);

        QMetaObject::connectSlotsByName(OrgDialog);
    } // setupUi

    void retranslateUi(QWidget *OrgDialog)
    {
        OrgDialog->setWindowTitle(QCoreApplication::translate("OrgDialog", "Form", nullptr));
        img->setText(QString());
        editorg->setText(QCoreApplication::translate("OrgDialog", " Edit Organization", nullptr));
        deleteorg->setText(QCoreApplication::translate("OrgDialog", "Delete Organization", nullptr));
        roleComboBox->setItemText(0, QCoreApplication::translate("OrgDialog", "Owner", nullptr));
        roleComboBox->setItemText(1, QCoreApplication::translate("OrgDialog", "Admin", nullptr));
        roleComboBox->setItemText(2, QCoreApplication::translate("OrgDialog", "User", nullptr));

        roleLabel->setText(QCoreApplication::translate("OrgDialog", "Role:", nullptr));
        idLabel->setText(QCoreApplication::translate("OrgDialog", "ID:", nullptr));
        delete_user->setText(QCoreApplication::translate("OrgDialog", "Delete User", nullptr));
        addOrEditUser->setText(QCoreApplication::translate("OrgDialog", "Add or Edit User", nullptr));
        nameLabel->setText(QString());
        descriptionLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OrgDialog: public Ui_OrgDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORGDIALOG_H
