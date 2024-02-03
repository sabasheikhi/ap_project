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
#include <QtWidgets/QFrame>
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
    QWidget *Tasks;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *teamlabel_2;
    QLineEdit *taskname;
    QTextEdit *taskdes;
    QPushButton *addteask;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *tasklay;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *projectname;
    QLineEdit *teamname;
    QLabel *label_9;
    QComboBox *year;
    QComboBox *month;
    QComboBox *day;
    QLabel *label_10;
    QLineEdit *namearchive;
    QPushButton *setarchive;
    QPushButton *setunarchive;
    QFrame *line;
    QPushButton *setarchive_2;
    QPushButton *setarchive_3;

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
        tabWidget->setGeometry(QRect(360, 100, 761, 561));
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
        horizontalLayoutWidget_2->setGeometry(QRect(40, 310, 661, 151));
        teamlay = new QHBoxLayout(horizontalLayoutWidget_2);
        teamlay->setObjectName("teamlay");
        teamlay->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(Teams, QString());
        Tasks = new QWidget();
        Tasks->setObjectName("Tasks");
        label_5 = new QLabel(Tasks);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(360, 60, 91, 31));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(248, 245, 211);"));
        label_6 = new QLabel(Tasks);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(100, 60, 71, 31));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(248, 245, 211);"));
        teamlabel_2 = new QLabel(Tasks);
        teamlabel_2->setObjectName("teamlabel_2");
        teamlabel_2->setGeometry(QRect(40, 20, 71, 31));
        teamlabel_2->setFont(font1);
        teamlabel_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        taskname = new QLineEdit(Tasks);
        taskname->setObjectName("taskname");
        taskname->setGeometry(QRect(210, 60, 113, 31));
        taskname->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 199, 199);\n"
"border-radius:7px;"));
        taskdes = new QTextEdit(Tasks);
        taskdes->setObjectName("taskdes");
        taskdes->setGeometry(QRect(490, 60, 231, 51));
        taskdes->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 199, 199);\n"
"border-radius:7px;"));
        addteask = new QPushButton(Tasks);
        addteask->setObjectName("addteask");
        addteask->setGeometry(QRect(620, 170, 101, 31));
        addteask->setStyleSheet(QString::fromUtf8("background-color: rgb(140, 140, 140);\n"
"border-radius:6px;"));
        horizontalLayoutWidget_3 = new QWidget(Tasks);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(30, 300, 711, 191));
        tasklay = new QHBoxLayout(horizontalLayoutWidget_3);
        tasklay->setObjectName("tasklay");
        tasklay->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(Tasks);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(90, 110, 101, 31));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_8 = new QLabel(Tasks);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(90, 160, 101, 31));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        projectname = new QLineEdit(Tasks);
        projectname->setObjectName("projectname");
        projectname->setGeometry(QRect(210, 110, 113, 31));
        projectname->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 199, 199);\n"
"border-radius:7px;"));
        teamname = new QLineEdit(Tasks);
        teamname->setObjectName("teamname");
        teamname->setGeometry(QRect(210, 160, 113, 31));
        teamname->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 199, 199);\n"
"border-radius:7px;"));
        label_9 = new QLabel(Tasks);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(360, 160, 81, 21));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        year = new QComboBox(Tasks);
        year->addItem(QString());
        year->addItem(QString());
        year->addItem(QString());
        year->addItem(QString());
        year->addItem(QString());
        year->addItem(QString());
        year->addItem(QString());
        year->setObjectName("year");
        year->setGeometry(QRect(490, 130, 75, 25));
        year->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 199, 199);\n"
"border-radius:7px;"));
        month = new QComboBox(Tasks);
        month->addItem(QString());
        month->addItem(QString());
        month->addItem(QString());
        month->addItem(QString());
        month->addItem(QString());
        month->addItem(QString());
        month->addItem(QString());
        month->addItem(QString());
        month->addItem(QString());
        month->addItem(QString());
        month->addItem(QString());
        month->addItem(QString());
        month->setObjectName("month");
        month->setGeometry(QRect(570, 130, 75, 25));
        month->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 199, 199);\n"
"border-radius:7px;"));
        day = new QComboBox(Tasks);
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->addItem(QString());
        day->setObjectName("day");
        day->setGeometry(QRect(650, 130, 75, 25));
        day->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 199, 199);\n"
"border-radius:7px;"));
        label_10 = new QLabel(Tasks);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(90, 230, 91, 31));
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        namearchive = new QLineEdit(Tasks);
        namearchive->setObjectName("namearchive");
        namearchive->setGeometry(QRect(200, 230, 113, 31));
        namearchive->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 199, 199);\n"
"border-radius:7px;"));
        setarchive = new QPushButton(Tasks);
        setarchive->setObjectName("setarchive");
        setarchive->setGeometry(QRect(340, 220, 81, 21));
        setarchive->setStyleSheet(QString::fromUtf8("background-color: rgb(140, 140, 140);\n"
"border-radius:6px;"));
        setunarchive = new QPushButton(Tasks);
        setunarchive->setObjectName("setunarchive");
        setunarchive->setGeometry(QRect(340, 250, 81, 21));
        setunarchive->setStyleSheet(QString::fromUtf8("background-color: rgb(140, 140, 140);\n"
"border-radius:6px;"));
        line = new QFrame(Tasks);
        line->setObjectName("line");
        line->setGeometry(QRect(30, 200, 701, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        setarchive_2 = new QPushButton(Tasks);
        setarchive_2->setObjectName("setarchive_2");
        setarchive_2->setGeometry(QRect(610, 230, 111, 21));
        setarchive_2->setStyleSheet(QString::fromUtf8("background-color: rgb(140, 140, 140);\n"
"border-radius:6px;"));
        setarchive_3 = new QPushButton(Tasks);
        setarchive_3->setObjectName("setarchive_3");
        setarchive_3->setGeometry(QRect(610, 260, 111, 21));
        setarchive_3->setStyleSheet(QString::fromUtf8("background-color: rgb(140, 140, 140);\n"
"border-radius:6px;"));
        tabWidget->addTab(Tasks, QString());

        retranslateUi(OrgDialog);

        tabWidget->setCurrentIndex(2);


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
        label_5->setText(QCoreApplication::translate("OrgDialog", "Description :", nullptr));
        label_6->setText(QCoreApplication::translate("OrgDialog", "Name :", nullptr));
        teamlabel_2->setText(QCoreApplication::translate("OrgDialog", "Tasks :", nullptr));
        addteask->setText(QCoreApplication::translate("OrgDialog", "Add task", nullptr));
        label_7->setText(QCoreApplication::translate("OrgDialog", "Project name :", nullptr));
        label_8->setText(QCoreApplication::translate("OrgDialog", "Team name :", nullptr));
        label_9->setText(QCoreApplication::translate("OrgDialog", "Deadline :", nullptr));
        year->setItemText(0, QCoreApplication::translate("OrgDialog", "2024", nullptr));
        year->setItemText(1, QCoreApplication::translate("OrgDialog", "2025", nullptr));
        year->setItemText(2, QCoreApplication::translate("OrgDialog", "2026", nullptr));
        year->setItemText(3, QCoreApplication::translate("OrgDialog", "2027", nullptr));
        year->setItemText(4, QCoreApplication::translate("OrgDialog", "2028", nullptr));
        year->setItemText(5, QCoreApplication::translate("OrgDialog", "2029", nullptr));
        year->setItemText(6, QCoreApplication::translate("OrgDialog", "2030", nullptr));

        month->setItemText(0, QCoreApplication::translate("OrgDialog", "1", nullptr));
        month->setItemText(1, QCoreApplication::translate("OrgDialog", "2", nullptr));
        month->setItemText(2, QCoreApplication::translate("OrgDialog", "3", nullptr));
        month->setItemText(3, QCoreApplication::translate("OrgDialog", "4", nullptr));
        month->setItemText(4, QCoreApplication::translate("OrgDialog", "5", nullptr));
        month->setItemText(5, QCoreApplication::translate("OrgDialog", "6", nullptr));
        month->setItemText(6, QCoreApplication::translate("OrgDialog", "7", nullptr));
        month->setItemText(7, QCoreApplication::translate("OrgDialog", "8", nullptr));
        month->setItemText(8, QCoreApplication::translate("OrgDialog", "9", nullptr));
        month->setItemText(9, QCoreApplication::translate("OrgDialog", "10", nullptr));
        month->setItemText(10, QCoreApplication::translate("OrgDialog", "11", nullptr));
        month->setItemText(11, QCoreApplication::translate("OrgDialog", "12", nullptr));

        day->setItemText(0, QCoreApplication::translate("OrgDialog", "1", nullptr));
        day->setItemText(1, QCoreApplication::translate("OrgDialog", "2", nullptr));
        day->setItemText(2, QCoreApplication::translate("OrgDialog", "3", nullptr));
        day->setItemText(3, QCoreApplication::translate("OrgDialog", "4", nullptr));
        day->setItemText(4, QCoreApplication::translate("OrgDialog", "5", nullptr));
        day->setItemText(5, QCoreApplication::translate("OrgDialog", "6", nullptr));
        day->setItemText(6, QCoreApplication::translate("OrgDialog", "7", nullptr));
        day->setItemText(7, QCoreApplication::translate("OrgDialog", "8", nullptr));
        day->setItemText(8, QCoreApplication::translate("OrgDialog", "9", nullptr));
        day->setItemText(9, QCoreApplication::translate("OrgDialog", "10", nullptr));
        day->setItemText(10, QCoreApplication::translate("OrgDialog", "11", nullptr));
        day->setItemText(11, QCoreApplication::translate("OrgDialog", "12", nullptr));
        day->setItemText(12, QCoreApplication::translate("OrgDialog", "13", nullptr));
        day->setItemText(13, QCoreApplication::translate("OrgDialog", "14", nullptr));
        day->setItemText(14, QCoreApplication::translate("OrgDialog", "15", nullptr));
        day->setItemText(15, QCoreApplication::translate("OrgDialog", "16", nullptr));
        day->setItemText(16, QCoreApplication::translate("OrgDialog", "17", nullptr));
        day->setItemText(17, QCoreApplication::translate("OrgDialog", "18", nullptr));
        day->setItemText(18, QCoreApplication::translate("OrgDialog", "19", nullptr));
        day->setItemText(19, QCoreApplication::translate("OrgDialog", "20", nullptr));
        day->setItemText(20, QCoreApplication::translate("OrgDialog", "21", nullptr));
        day->setItemText(21, QCoreApplication::translate("OrgDialog", "22", nullptr));
        day->setItemText(22, QCoreApplication::translate("OrgDialog", "23", nullptr));
        day->setItemText(23, QCoreApplication::translate("OrgDialog", "24", nullptr));
        day->setItemText(24, QCoreApplication::translate("OrgDialog", "25", nullptr));
        day->setItemText(25, QCoreApplication::translate("OrgDialog", "26", nullptr));
        day->setItemText(26, QCoreApplication::translate("OrgDialog", "27", nullptr));
        day->setItemText(27, QCoreApplication::translate("OrgDialog", "28", nullptr));
        day->setItemText(28, QCoreApplication::translate("OrgDialog", "29", nullptr));
        day->setItemText(29, QCoreApplication::translate("OrgDialog", "30", nullptr));

        label_10->setText(QCoreApplication::translate("OrgDialog", "Task name :", nullptr));
        setarchive->setText(QCoreApplication::translate("OrgDialog", "Archive", nullptr));
        setunarchive->setText(QCoreApplication::translate("OrgDialog", "Unarchive", nullptr));
        setarchive_2->setText(QCoreApplication::translate("OrgDialog", "Show Archives", nullptr));
        setarchive_3->setText(QCoreApplication::translate("OrgDialog", "Hide Archives", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Tasks), QCoreApplication::translate("OrgDialog", "Tasks", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrgDialog: public Ui_OrgDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORGDIALOG_H
