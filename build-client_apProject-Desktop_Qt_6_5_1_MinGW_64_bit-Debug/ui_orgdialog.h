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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrgDialog
{
public:
    QLabel *img;
    QPushButton *editorg;
    QPushButton *deleteorg;
    QComboBox *roleComboBox;
    QLabel *idLabel;
    QLineEdit *idLineEdit;
    QPushButton *delete_user;
    QPushButton *addOrEditUser;
    QLabel *nameLabel;
    QLabel *descriptionLabel;
    QTabWidget *tabWidget;
    QWidget *Projects;
    QPushButton *addproject;
    QLabel *projectlabel;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *project_name_2;
    QTextEdit *projectdes_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *prolay;
    QWidget *Teams;
    QLabel *teamlabel;
    QPushButton *addteam;
    QLineEdit *team_name;
    QTextEdit *teamdes;
    QLabel *label;
    QLabel *label_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *teamlay;

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
        editorg->setGeometry(QRect(50, 190, 191, 29));
        editorg->setStyleSheet(QString::fromUtf8("color: rgb(38, 0, 115);\n"
"background-color: rgb(216, 213, 184);\n"
"border-radius:6px;"));
        deleteorg = new QPushButton(OrgDialog);
        deleteorg->setObjectName("deleteorg");
        deleteorg->setGeometry(QRect(50, 230, 191, 29));
        deleteorg->setStyleSheet(QString::fromUtf8("color: rgb(38, 0, 115);\n"
"background-color: rgb(216, 213, 184);\n"
"border-radius:6px;"));
        roleComboBox = new QComboBox(OrgDialog);
        roleComboBox->addItem(QString::fromUtf8("Role"));
        roleComboBox->addItem(QString());
        roleComboBox->addItem(QString());
        roleComboBox->setObjectName("roleComboBox");
        roleComboBox->setGeometry(QRect(160, 330, 111, 25));
        roleComboBox->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color: rgb(140, 140, 140);"));
        idLabel = new QLabel(OrgDialog);
        idLabel->setObjectName("idLabel");
        idLabel->setGeometry(QRect(50, 300, 101, 21));
        idLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        idLineEdit = new QLineEdit(OrgDialog);
        idLineEdit->setObjectName("idLineEdit");
        idLineEdit->setGeometry(QRect(40, 330, 113, 25));
        idLineEdit->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color: rgb(181, 181, 181);"));
        delete_user = new QPushButton(OrgDialog);
        delete_user->setObjectName("delete_user");
        delete_user->setGeometry(QRect(60, 410, 181, 29));
        delete_user->setStyleSheet(QString::fromUtf8("color: rgb(241, 238, 205);\n"
"background-color: rgb(113, 113, 113);\n"
"border-radius:6px;"));
        addOrEditUser = new QPushButton(OrgDialog);
        addOrEditUser->setObjectName("addOrEditUser");
        addOrEditUser->setGeometry(QRect(60, 370, 181, 29));
        addOrEditUser->setStyleSheet(QString::fromUtf8("color: rgb(241, 238, 205);\n"
"background-color: rgb(113, 113, 113);\n"
"border-radius:6px;"));
        nameLabel = new QLabel(OrgDialog);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(50, 40, 131, 31));
        nameLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 157);\n"
"background-color: rgb(241, 238, 205);\n"
"border-radius:7px;"));
        descriptionLabel = new QLabel(OrgDialog);
        descriptionLabel->setObjectName("descriptionLabel");
        descriptionLabel->setGeometry(QRect(50, 90, 191, 71));
        descriptionLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 157);\n"
"background-color: rgb(241, 238, 205);\n"
"border-radius:7px;"));
        tabWidget = new QTabWidget(OrgDialog);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(350, 100, 761, 541));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 17, 68);\n"
"border-color: rgb(26, 17, 68);\n"
""));
        Projects = new QWidget();
        Projects->setObjectName("Projects");
        Projects->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 17, 68);"));
        addproject = new QPushButton(Projects);
        addproject->setObjectName("addproject");
        addproject->setGeometry(QRect(390, 220, 93, 29));
        addproject->setStyleSheet(QString::fromUtf8("background-color: rgb(140, 140, 140);\n"
"border-radius:6px;"));
        projectlabel = new QLabel(Projects);
        projectlabel->setObjectName("projectlabel");
        projectlabel->setGeometry(QRect(30, 30, 111, 31));
        QFont font;
        font.setPointSize(12);
        projectlabel->setFont(font);
        projectlabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(Projects);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 120, 71, 31));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(248, 245, 211);"));
        label_4 = new QLabel(Projects);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 170, 91, 31));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(248, 245, 211);"));
        project_name_2 = new QLineEdit(Projects);
        project_name_2->setObjectName("project_name_2");
        project_name_2->setGeometry(QRect(200, 120, 113, 31));
        project_name_2->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 199, 199);\n"
"border-radius:7px;"));
        projectdes_2 = new QTextEdit(Projects);
        projectdes_2->setObjectName("projectdes_2");
        projectdes_2->setGeometry(QRect(200, 170, 161, 81));
        projectdes_2->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 199, 199);\n"
"border-radius:7px;"));
        horizontalLayoutWidget = new QWidget(Projects);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(40, 310, 651, 161));
        prolay = new QHBoxLayout(horizontalLayoutWidget);
        prolay->setObjectName("prolay");
        prolay->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(Projects, QString());
        Teams = new QWidget();
        Teams->setObjectName("Teams");
        Teams->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 17, 68);"));
        teamlabel = new QLabel(Teams);
        teamlabel->setObjectName("teamlabel");
        teamlabel->setGeometry(QRect(30, 30, 71, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        teamlabel->setFont(font1);
        teamlabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        addteam = new QPushButton(Teams);
        addteam->setObjectName("addteam");
        addteam->setGeometry(QRect(370, 200, 93, 29));
        addteam->setStyleSheet(QString::fromUtf8("background-color: rgb(140, 140, 140);\n"
"border-radius:6px;"));
        team_name = new QLineEdit(Teams);
        team_name->setObjectName("team_name");
        team_name->setGeometry(QRect(160, 100, 113, 31));
        team_name->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 199, 199);\n"
"border-radius:7px;"));
        teamdes = new QTextEdit(Teams);
        teamdes->setObjectName("teamdes");
        teamdes->setGeometry(QRect(160, 150, 161, 81));
        teamdes->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 199, 199);\n"
"border-radius:7px;"));
        label = new QLabel(Teams);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 100, 71, 31));
        label->setStyleSheet(QString::fromUtf8("color: rgb(248, 245, 211);"));
        label_2 = new QLabel(Teams);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 150, 91, 31));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(248, 245, 211);"));
        horizontalLayoutWidget_2 = new QWidget(Teams);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(40, 330, 661, 131));
        teamlay = new QHBoxLayout(horizontalLayoutWidget_2);
        teamlay->setObjectName("teamlay");
        teamlay->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(Teams, QString());

        retranslateUi(OrgDialog);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(OrgDialog);
    } // setupUi

    void retranslateUi(QWidget *OrgDialog)
    {
        OrgDialog->setWindowTitle(QCoreApplication::translate("OrgDialog", "Form", nullptr));
        img->setText(QString());
        editorg->setText(QCoreApplication::translate("OrgDialog", " Edit Organization", nullptr));
        deleteorg->setText(QCoreApplication::translate("OrgDialog", "Delete Organization", nullptr));
        roleComboBox->setItemText(1, QCoreApplication::translate("OrgDialog", "Admin", nullptr));
        roleComboBox->setItemText(2, QCoreApplication::translate("OrgDialog", "User", nullptr));

        idLabel->setText(QCoreApplication::translate("OrgDialog", "Members  :", nullptr));
        delete_user->setText(QCoreApplication::translate("OrgDialog", "Delete User", nullptr));
        addOrEditUser->setText(QCoreApplication::translate("OrgDialog", "Add or Edit User", nullptr));
        nameLabel->setText(QString());
        descriptionLabel->setText(QString());
        addproject->setText(QCoreApplication::translate("OrgDialog", "Add project", nullptr));
        projectlabel->setText(QCoreApplication::translate("OrgDialog", "Projects :", nullptr));
        label_3->setText(QCoreApplication::translate("OrgDialog", "Name :", nullptr));
        label_4->setText(QCoreApplication::translate("OrgDialog", "Description :", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Projects), QCoreApplication::translate("OrgDialog", "Projects", nullptr));
        teamlabel->setText(QCoreApplication::translate("OrgDialog", "Teams :", nullptr));
        addteam->setText(QCoreApplication::translate("OrgDialog", "Add team", nullptr));
        label->setText(QCoreApplication::translate("OrgDialog", "Name :", nullptr));
        label_2->setText(QCoreApplication::translate("OrgDialog", "Description :", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Teams), QCoreApplication::translate("OrgDialog", "Teams", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrgDialog: public Ui_OrgDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORGDIALOG_H
