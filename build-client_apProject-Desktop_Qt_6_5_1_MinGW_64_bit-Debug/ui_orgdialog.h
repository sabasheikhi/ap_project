/********************************************************************************
** Form generated from reading UI file 'orgdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
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
    QLineEdit *namelineEdit;
    QLineEdit *deslineEdit;
    QPushButton *editorg;
    QPushButton *deleteorg;
    QComboBox *roleComboBox;
    QLabel *roleLabel;
    QLabel *nameLabelel;
    QLineEdidescriptionLabelneEdit;
    QPushButton *delete_user;
    QPushButton *addOrEditUser;

    void setupUi(QWidget *OrgDialog)
    {
        if (OrgDialog->objectName().isEmpty())
            OrgDialog->setObjectName("OrgDialog");
        OrgDialog->resize(1169, 700);
        img = new QLabel(OrgDialog);
        img->setObjectName("img");
        img->setGeometry(QRect(-20, 0, 1211, 701));
        img->setStyleSheet(QString::fromUtf8("image: url(:/dashboard/dashboard.png);"));
        namelineEdit = new QLineEdit(OrgDialog);
        namelineEdit->setObjectName("namelineEdit");
        namelineEdit->setGeometry(QRect(90, 70, 113, 25));
        deslineEdit = new QLineEdit(OrgDialog);
        deslineEdit->setObjectName("deslineEdit");
        deslineEdit->setGeometry(QRect(90, 120, 113, 25));
        editorg = new QPushButton(OrgDialog);
        editorg->setObjectName("editorg");
        editorg->setGeometry(QRect(50, 170, 201, 29));
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
        nameLabeleEdit->setObjectName("idLineEdit");
        nameLabeleEdit->setGeometry(QRect(140, 310, 113, 25));
        nameLabele_user = new QPushButton(OrgDialog);
        nameLabele_user->setObjectName("delete_user");
        descriptionLabeluser->setGeometry(QRect(70, 440, 181, 29));
        descriptionLabelitUser = new QPushButton(OrgDialog);
        descriptionLabelitUser->setObjectName("addOrEditUser");
        descriptionLabelitUser->setGeometry(QRect(70, 490, 181, 29));

        retranslateUi(OrgDialog);

        QMetaObject::connectSlotsByName(OrgDialog);
    } // setupUi

    void retranslateUi(QWidget *OrgDialog)
    {
        OrgDialog->setWindowTitle(QCoreApplication::translate("OrgDialog", "Form", nullptr));
        img->setText(QString());
        editorg->setText(QCoreApplication::translate("OrgDialog", "Edit", nullptr));
        deleteorg->setText(QCoreApplication::translate("OrgDialog", "Delete", nullptr));
        roleComboBox->setItemText(0, QCoreApplication::translate("OrgDialog", "Owner", nullptr));
        roleComboBox->setItemText(1, QCoreApplication::translate("OrgDialog", "Admin", nullptr));
        roleComboBox->setItemText(2, QCoreApplication::translate("OrgDialog", "User", nullptr));

        roleLabel->setText(QCoreApplication::translate("OrgDialog", "Role:", nullptr));
        idLabel->setText(QCoreApplication::translate("OrgDialog", "ID:", nullptr));
        delete_user->setText(QCoreApplication::translate("OrgDialog", "Delete", nullptr));
        addOrEditUser->setText(QCoreApplication::translate("OrgDialog", "Add or Edit", nullptr));
    } //nameLabelanslateUi

};

namdescriptionLabelUi {
    class OrgDialog: public Ui_OrgDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORGDIALOG_H
