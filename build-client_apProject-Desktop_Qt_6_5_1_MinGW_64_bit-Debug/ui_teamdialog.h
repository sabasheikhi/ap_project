/********************************************************************************
** Form generated from reading UI file 'teamdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEAMDIALOG_H
#define UI_TEAMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teamdialog
{
public:
    QLabel *label;
    QPushButton *addOrEditUser;
    QLabel *nameLabel;
    QLabel *descriptionLabel;
    QPushButton *delete_user;
    QLabel *idLabel;
    QLineEdit *idLineEdit;
    QComboBox *roleComboBox;
    QPushButton *editTeam;
    QPushButton *deleteTeam;

    void setupUi(QWidget *teamdialog)
    {
        if (teamdialog->objectName().isEmpty())
            teamdialog->setObjectName("teamdialog");
        teamdialog->resize(1038, 633);
        label = new QLabel(teamdialog);
        label->setObjectName("label");
        label->setGeometry(QRect(-20, 0, 1061, 631));
        label->setStyleSheet(QString::fromUtf8("image: url(:/dashboard/dashboard.png);"));
        addOrEditUser = new QPushButton(teamdialog);
        addOrEditUser->setObjectName("addOrEditUser");
        addOrEditUser->setGeometry(QRect(390, 350, 181, 29));
        addOrEditUser->setStyleSheet(QString::fromUtf8("color: rgb(241, 238, 205);\n"
"background-color: rgb(113, 113, 113);\n"
"border-radius:6px;"));
        nameLabel = new QLabel(teamdialog);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(40, 50, 161, 51));
        nameLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 157);\n"
"background-color: rgb(241, 238, 205);\n"
"border-radius:7px;"));
        descriptionLabel = new QLabel(teamdialog);
        descriptionLabel->setObjectName("descriptionLabel");
        descriptionLabel->setGeometry(QRect(350, 100, 271, 101));
        descriptionLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 157);\n"
"background-color: rgb(241, 238, 205);\n"
"border-radius:7px;"));
        delete_user = new QPushButton(teamdialog);
        delete_user->setObjectName("delete_user");
        delete_user->setGeometry(QRect(390, 400, 181, 29));
        delete_user->setStyleSheet(QString::fromUtf8("color: rgb(241, 238, 205);\n"
"background-color: rgb(113, 113, 113);\n"
"border-radius:6px;"));
        idLabel = new QLabel(teamdialog);
        idLabel->setObjectName("idLabel");
        idLabel->setGeometry(QRect(350, 260, 101, 21));
        idLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        idLineEdit = new QLineEdit(teamdialog);
        idLineEdit->setObjectName("idLineEdit");
        idLineEdit->setGeometry(QRect(350, 300, 121, 31));
        idLineEdit->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color: rgb(181, 181, 181);"));
        roleComboBox = new QComboBox(teamdialog);
        roleComboBox->addItem(QString::fromUtf8("Role"));
        roleComboBox->addItem(QString());
        roleComboBox->addItem(QString());
        roleComboBox->setObjectName("roleComboBox");
        roleComboBox->setGeometry(QRect(500, 300, 111, 31));
        roleComboBox->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color: rgb(140, 140, 140);"));
        editTeam = new QPushButton(teamdialog);
        editTeam->setObjectName("editTeam");
        editTeam->setGeometry(QRect(760, 130, 191, 29));
        editTeam->setStyleSheet(QString::fromUtf8("color: rgb(38, 0, 115);\n"
"background-color: rgb(216, 213, 184);\n"
"border-radius:6px;"));
        deleteTeam = new QPushButton(teamdialog);
        deleteTeam->setObjectName("deleteTeam");
        deleteTeam->setGeometry(QRect(760, 170, 191, 29));
        deleteTeam->setStyleSheet(QString::fromUtf8("color: rgb(38, 0, 115);\n"
"background-color: rgb(216, 213, 184);\n"
"border-radius:6px;"));

        retranslateUi(teamdialog);

        QMetaObject::connectSlotsByName(teamdialog);
    } // setupUi

    void retranslateUi(QWidget *teamdialog)
    {
        teamdialog->setWindowTitle(QCoreApplication::translate("teamdialog", "Form", nullptr));
        label->setText(QString());
        addOrEditUser->setText(QCoreApplication::translate("teamdialog", "Add or Edit User", nullptr));
        nameLabel->setText(QString());
        descriptionLabel->setText(QString());
        delete_user->setText(QCoreApplication::translate("teamdialog", "Delete User", nullptr));
        idLabel->setText(QCoreApplication::translate("teamdialog", "Members  :", nullptr));
        roleComboBox->setItemText(1, QCoreApplication::translate("teamdialog", "Admin", nullptr));
        roleComboBox->setItemText(2, QCoreApplication::translate("teamdialog", "User", nullptr));

        editTeam->setText(QCoreApplication::translate("teamdialog", " Edit Team", nullptr));
        deleteTeam->setText(QCoreApplication::translate("teamdialog", "Delete Team", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teamdialog: public Ui_teamdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAMDIALOG_H
