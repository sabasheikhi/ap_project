/********************************************************************************
** Form generated from reading UI file 'prodialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODIALOG_H
#define UI_PRODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_prodialog
{
public:
    QLabel *img;
    QPushButton *editpro;
    QLineEdit *idLineEdit;
    QPushButton *deletepro;
    QComboBox *roleComboBox;
    QPushButton *addOrEditUser;
    QPushButton *delete_user;
    QLabel *idLabel;
    QLabel *nameLabel;
    QLabel *descriptionLabel;
    QComboBox *combo;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *currentstatus;

    void setupUi(QWidget *prodialog)
    {
        if (prodialog->objectName().isEmpty())
            prodialog->setObjectName("prodialog");
        prodialog->resize(1072, 638);
        img = new QLabel(prodialog);
        img->setObjectName("img");
        img->setGeometry(QRect(0, -10, 1071, 651));
        img->setStyleSheet(QString::fromUtf8("image: url(:/dashboard/dashboard.png);"));
        editpro = new QPushButton(prodialog);
        editpro->setObjectName("editpro");
        editpro->setGeometry(QRect(770, 110, 191, 29));
        editpro->setStyleSheet(QString::fromUtf8("color: rgb(38, 0, 115);\n"
"background-color: rgb(216, 213, 184);\n"
"border-radius:6px;"));
        idLineEdit = new QLineEdit(prodialog);
        idLineEdit->setObjectName("idLineEdit");
        idLineEdit->setGeometry(QRect(370, 290, 121, 31));
        idLineEdit->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color: rgb(181, 181, 181);"));
        deletepro = new QPushButton(prodialog);
        deletepro->setObjectName("deletepro");
        deletepro->setGeometry(QRect(770, 150, 191, 29));
        deletepro->setStyleSheet(QString::fromUtf8("color: rgb(38, 0, 115);\n"
"background-color: rgb(216, 213, 184);\n"
"border-radius:6px;"));
        roleComboBox = new QComboBox(prodialog);
        roleComboBox->addItem(QString::fromUtf8("Role"));
        roleComboBox->addItem(QString());
        roleComboBox->addItem(QString());
        roleComboBox->setObjectName("roleComboBox");
        roleComboBox->setGeometry(QRect(520, 290, 111, 31));
        roleComboBox->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color: rgb(140, 140, 140);"));
        addOrEditUser = new QPushButton(prodialog);
        addOrEditUser->setObjectName("addOrEditUser");
        addOrEditUser->setGeometry(QRect(410, 340, 181, 29));
        addOrEditUser->setStyleSheet(QString::fromUtf8("color: rgb(241, 238, 205);\n"
"background-color: rgb(113, 113, 113);\n"
"border-radius:6px;"));
        delete_user = new QPushButton(prodialog);
        delete_user->setObjectName("delete_user");
        delete_user->setGeometry(QRect(410, 390, 181, 29));
        delete_user->setStyleSheet(QString::fromUtf8("color: rgb(241, 238, 205);\n"
"background-color: rgb(113, 113, 113);\n"
"border-radius:6px;"));
        idLabel = new QLabel(prodialog);
        idLabel->setObjectName("idLabel");
        idLabel->setGeometry(QRect(370, 250, 101, 21));
        idLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        nameLabel = new QLabel(prodialog);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(60, 40, 161, 51));
        nameLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 157);\n"
"background-color: rgb(241, 238, 205);\n"
"border-radius:7px;"));
        descriptionLabel = new QLabel(prodialog);
        descriptionLabel->setObjectName("descriptionLabel");
        descriptionLabel->setGeometry(QRect(390, 90, 271, 101));
        descriptionLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 157);\n"
"background-color: rgb(241, 238, 205);\n"
"border-radius:7px;"));
        combo = new QComboBox(prodialog);
        combo->addItem(QString());
        combo->addItem(QString());
        combo->setObjectName("combo");
        combo->setGeometry(QRect(850, 270, 101, 31));
        combo->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"background-color: rgb(197, 197, 197);"));
        label = new QLabel(prodialog);
        label->setObjectName("label");
        label->setGeometry(QRect(760, 270, 63, 20));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(prodialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(810, 320, 93, 29));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(38, 0, 115);\n"
"background-color: rgb(216, 213, 184);\n"
"border-radius:6px;"));
        label_2 = new QLabel(prodialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 140, 141, 31));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Segoe UI\";"));
        currentstatus = new QLabel(prodialog);
        currentstatus->setObjectName("currentstatus");
        currentstatus->setGeometry(QRect(120, 190, 101, 41));
        currentstatus->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 157);\n"
"text-align: center;\n"
"background-color: rgb(241, 238, 205);\n"
"border-radius:7px;\n"
""));

        retranslateUi(prodialog);

        QMetaObject::connectSlotsByName(prodialog);
    } // setupUi

    void retranslateUi(QWidget *prodialog)
    {
        prodialog->setWindowTitle(QCoreApplication::translate("prodialog", "Form", nullptr));
        img->setText(QString());
        editpro->setText(QCoreApplication::translate("prodialog", " Edit Project", nullptr));
        deletepro->setText(QCoreApplication::translate("prodialog", "Delete Project", nullptr));
        roleComboBox->setItemText(1, QCoreApplication::translate("prodialog", "Admin", nullptr));
        roleComboBox->setItemText(2, QCoreApplication::translate("prodialog", "User", nullptr));

        addOrEditUser->setText(QCoreApplication::translate("prodialog", "Add or Edit User", nullptr));
        delete_user->setText(QCoreApplication::translate("prodialog", "Delete User", nullptr));
        idLabel->setText(QCoreApplication::translate("prodialog", "Members  :", nullptr));
        nameLabel->setText(QString());
        descriptionLabel->setText(QString());
        combo->setItemText(0, QCoreApplication::translate("prodialog", "Active", nullptr));
        combo->setItemText(1, QCoreApplication::translate("prodialog", "Inactive", nullptr));

        label->setText(QCoreApplication::translate("prodialog", "Status :", nullptr));
        pushButton->setText(QCoreApplication::translate("prodialog", "Change", nullptr));
        label_2->setText(QCoreApplication::translate("prodialog", "Current Situation :", nullptr));
        currentstatus->setText(QCoreApplication::translate("prodialog", "\331\216Active", nullptr));
    } // retranslateUi

};

namespace Ui {
    class prodialog: public Ui_prodialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODIALOG_H
