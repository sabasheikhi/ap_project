/********************************************************************************
** Form generated from reading UI file 'taskdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKDIALOG_H
#define UI_TASKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_taskdialog
{
public:
    QLabel *img_2;
    QLabel *label_2;
    QPushButton *changestatus;
    QPushButton *edittask;
    QLabel *nameLabel;
    QLabel *descriptionLabel;
    QPushButton *deletetask;
    QTabWidget *tabWidget;
    QWidget *user;
    QLabel *username;
    QLabel *des_of_usertask;
    QLabel *userproperity;
    QLabel *label;
    QComboBox *combodutyuser;
    QLabel *label_3;
    QPushButton *change_user_duty;
    QLabel *deadline_user;
    QLabel *label_5;
    QWidget *tab_2;
    QLineEdit *nameu;
    QLabel *idLabel;
    QTextEdit *dutyu;
    QLabel *label_6;
    QComboBox *year_2;
    QComboBox *month_2;
    QComboBox *day_2;
    QPushButton *addtask;
    QLabel *label_18;
    QLabel *label_7;
    QComboBox *combopriority;
    QWidget *tab_4;
    QComboBox *taskstatus;
    QLabel *deadline;
    QLabel *label_4;

    void setupUi(QWidget *taskdialog)
    {
        if (taskdialog->objectName().isEmpty())
            taskdialog->setObjectName("taskdialog");
        taskdialog->resize(1119, 671);
        img_2 = new QLabel(taskdialog);
        img_2->setObjectName("img_2");
        img_2->setGeometry(QRect(0, 0, 1121, 671));
        img_2->setStyleSheet(QString::fromUtf8("image: url(:/dashboard/dashboard.png);"));
        label_2 = new QLabel(taskdialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 420, 91, 20));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Segoe UI\";"));
        changestatus = new QPushButton(taskdialog);
        changestatus->setObjectName("changestatus");
        changestatus->setGeometry(QRect(100, 460, 93, 29));
        changestatus->setStyleSheet(QString::fromUtf8("color: rgb(38, 0, 115);\n"
"background-color: rgb(216, 213, 184);\n"
"border-radius:6px;"));
        edittask = new QPushButton(taskdialog);
        edittask->setObjectName("edittask");
        edittask->setGeometry(QRect(60, 210, 191, 29));
        edittask->setStyleSheet(QString::fromUtf8("color: rgb(38, 0, 115);\n"
"background-color: rgb(216, 213, 184);\n"
"border-radius:6px;"));
        nameLabel = new QLabel(taskdialog);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(60, 60, 151, 41));
        nameLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 157);\n"
"background-color: rgb(241, 238, 205);\n"
"border-radius:7px;"));
        descriptionLabel = new QLabel(taskdialog);
        descriptionLabel->setObjectName("descriptionLabel");
        descriptionLabel->setGeometry(QRect(60, 110, 191, 81));
        descriptionLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 157);\n"
"background-color: rgb(241, 238, 205);\n"
"border-radius:7px;"));
        deletetask = new QPushButton(taskdialog);
        deletetask->setObjectName("deletetask");
        deletetask->setGeometry(QRect(60, 250, 191, 29));
        deletetask->setStyleSheet(QString::fromUtf8("color: rgb(38, 0, 115);\n"
"background-color: rgb(216, 213, 184);\n"
"border-radius:6px;"));
        tabWidget = new QTabWidget(taskdialog);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(330, 80, 751, 551));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 17, 68);\n"
"border-color: rgb(26, 17, 68);"));
        user = new QWidget();
        user->setObjectName("user");
        username = new QLabel(user);
        username->setObjectName("username");
        username->setGeometry(QRect(150, 30, 121, 41));
        username->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 157);\n"
"background-color: rgb(241, 238, 205);\n"
"border-radius:7px;"));
        des_of_usertask = new QLabel(user);
        des_of_usertask->setObjectName("des_of_usertask");
        des_of_usertask->setGeometry(QRect(300, 30, 271, 81));
        des_of_usertask->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 157);\n"
"background-color: rgb(241, 238, 205);\n"
"border-radius:7px;"));
        userproperity = new QLabel(user);
        userproperity->setObjectName("userproperity");
        userproperity->setGeometry(QRect(120, 260, 151, 41));
        userproperity->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 157);\n"
"background-color: rgb(241, 238, 205);\n"
"border-radius:7px;"));
        label = new QLabel(user);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 220, 91, 31));
        label->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        combodutyuser = new QComboBox(user);
        combodutyuser->addItem(QString());
        combodutyuser->addItem(QString());
        combodutyuser->setObjectName("combodutyuser");
        combodutyuser->setGeometry(QRect(460, 210, 111, 31));
        label_3 = new QLabel(user);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(370, 210, 63, 20));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        change_user_duty = new QPushButton(user);
        change_user_duty->setObjectName("change_user_duty");
        change_user_duty->setGeometry(QRect(410, 270, 111, 31));
        change_user_duty->setStyleSheet(QString::fromUtf8("color: rgb(38, 0, 115);\n"
"background-color: rgb(216, 213, 184);\n"
"border-radius:6px;"));
        deadline_user = new QLabel(user);
        deadline_user->setObjectName("deadline_user");
        deadline_user->setGeometry(QRect(120, 360, 151, 41));
        deadline_user->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 157);\n"
"background-color: rgb(241, 238, 205);\n"
"border-radius:7px;"));
        label_5 = new QLabel(user);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 320, 101, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        tabWidget->addTab(user, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        nameu = new QLineEdit(tab_2);
        nameu->setObjectName("nameu");
        nameu->setGeometry(QRect(190, 60, 121, 31));
        nameu->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color: rgb(181, 181, 181);"));
        idLabel = new QLabel(tab_2);
        idLabel->setObjectName("idLabel");
        idLabel->setGeometry(QRect(60, 70, 101, 16));
        idLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        dutyu = new QTextEdit(tab_2);
        dutyu->setObjectName("dutyu");
        dutyu->setGeometry(QRect(470, 60, 191, 111));
        dutyu->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"background-color: rgb(181, 181, 181);"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(370, 70, 63, 20));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        year_2 = new QComboBox(tab_2);
        year_2->addItem(QString());
        year_2->addItem(QString());
        year_2->addItem(QString());
        year_2->addItem(QString());
        year_2->addItem(QString());
        year_2->addItem(QString());
        year_2->addItem(QString());
        year_2->setObjectName("year_2");
        year_2->setGeometry(QRect(190, 210, 75, 25));
        year_2->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 199, 199);\n"
"border-radius:7px;"));
        month_2 = new QComboBox(tab_2);
        month_2->addItem(QString());
        month_2->addItem(QString());
        month_2->addItem(QString());
        month_2->addItem(QString());
        month_2->addItem(QString());
        month_2->addItem(QString());
        month_2->addItem(QString());
        month_2->addItem(QString());
        month_2->addItem(QString());
        month_2->addItem(QString());
        month_2->addItem(QString());
        month_2->addItem(QString());
        month_2->setObjectName("month_2");
        month_2->setGeometry(QRect(280, 210, 75, 25));
        month_2->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 199, 199);\n"
"border-radius:7px;"));
        day_2 = new QComboBox(tab_2);
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->addItem(QString());
        day_2->setObjectName("day_2");
        day_2->setGeometry(QRect(370, 210, 75, 25));
        day_2->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 199, 199);\n"
"border-radius:7px;"));
        addtask = new QPushButton(tab_2);
        addtask->setObjectName("addtask");
        addtask->setGeometry(QRect(280, 300, 151, 41));
        addtask->setStyleSheet(QString::fromUtf8("background-color: rgb(140, 140, 140);\n"
"border-radius:6px;"));
        label_18 = new QLabel(tab_2);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(60, 210, 81, 21));
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(60, 130, 91, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        combopriority = new QComboBox(tab_2);
        combopriority->addItem(QString());
        combopriority->addItem(QString());
        combopriority->addItem(QString());
        combopriority->addItem(QString());
        combopriority->addItem(QString());
        combopriority->addItem(QString());
        combopriority->addItem(QString());
        combopriority->addItem(QString());
        combopriority->addItem(QString());
        combopriority->addItem(QString());
        combopriority->setObjectName("combopriority");
        combopriority->setGeometry(QRect(190, 130, 81, 31));
        combopriority->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 199, 199);\n"
"border-radius:7px;"));
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        tabWidget->addTab(tab_4, QString());
        taskstatus = new QComboBox(taskdialog);
        taskstatus->addItem(QString());
        taskstatus->addItem(QString());
        taskstatus->setObjectName("taskstatus");
        taskstatus->setGeometry(QRect(160, 420, 91, 25));
        taskstatus->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 157);\n"
"background-color: rgb(241, 238, 205);\n"
"border-radius:7px;"));
        deadline = new QLabel(taskdialog);
        deadline->setObjectName("deadline");
        deadline->setGeometry(QRect(80, 540, 151, 41));
        deadline->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 157);\n"
"background-color: rgb(241, 238, 205);\n"
"border-radius:7px;"));
        label_4 = new QLabel(taskdialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 500, 91, 20));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Segoe UI\";"));

        retranslateUi(taskdialog);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(taskdialog);
    } // setupUi

    void retranslateUi(QWidget *taskdialog)
    {
        taskdialog->setWindowTitle(QCoreApplication::translate("taskdialog", "Form", nullptr));
        img_2->setText(QString());
        label_2->setText(QCoreApplication::translate("taskdialog", "Task status :", nullptr));
        changestatus->setText(QCoreApplication::translate("taskdialog", "Change", nullptr));
        edittask->setText(QCoreApplication::translate("taskdialog", " Edit Task", nullptr));
        nameLabel->setText(QString());
        descriptionLabel->setText(QString());
        deletetask->setText(QCoreApplication::translate("taskdialog", "Delete Task", nullptr));
        username->setText(QString());
        des_of_usertask->setText(QString());
        userproperity->setText(QString());
        label->setText(QCoreApplication::translate("taskdialog", " Priority:", nullptr));
        combodutyuser->setItemText(0, QCoreApplication::translate("taskdialog", "Undone", nullptr));
        combodutyuser->setItemText(1, QCoreApplication::translate("taskdialog", "Done", nullptr));

        label_3->setText(QCoreApplication::translate("taskdialog", "Duty :", nullptr));
        change_user_duty->setText(QCoreApplication::translate("taskdialog", "Change duty", nullptr));
        deadline_user->setText(QString());
        label_5->setText(QCoreApplication::translate("taskdialog", " User deadline :", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(user), QCoreApplication::translate("taskdialog", "Your Task", nullptr));
        idLabel->setText(QCoreApplication::translate("taskdialog", "Member :", nullptr));
        label_6->setText(QCoreApplication::translate("taskdialog", "Duty :", nullptr));
        year_2->setItemText(0, QCoreApplication::translate("taskdialog", "2024", nullptr));
        year_2->setItemText(1, QCoreApplication::translate("taskdialog", "2025", nullptr));
        year_2->setItemText(2, QCoreApplication::translate("taskdialog", "2026", nullptr));
        year_2->setItemText(3, QCoreApplication::translate("taskdialog", "2027", nullptr));
        year_2->setItemText(4, QCoreApplication::translate("taskdialog", "2028", nullptr));
        year_2->setItemText(5, QCoreApplication::translate("taskdialog", "2029", nullptr));
        year_2->setItemText(6, QCoreApplication::translate("taskdialog", "2030", nullptr));

        month_2->setItemText(0, QCoreApplication::translate("taskdialog", "1", nullptr));
        month_2->setItemText(1, QCoreApplication::translate("taskdialog", "2", nullptr));
        month_2->setItemText(2, QCoreApplication::translate("taskdialog", "3", nullptr));
        month_2->setItemText(3, QCoreApplication::translate("taskdialog", "4", nullptr));
        month_2->setItemText(4, QCoreApplication::translate("taskdialog", "5", nullptr));
        month_2->setItemText(5, QCoreApplication::translate("taskdialog", "6", nullptr));
        month_2->setItemText(6, QCoreApplication::translate("taskdialog", "7", nullptr));
        month_2->setItemText(7, QCoreApplication::translate("taskdialog", "8", nullptr));
        month_2->setItemText(8, QCoreApplication::translate("taskdialog", "9", nullptr));
        month_2->setItemText(9, QCoreApplication::translate("taskdialog", "10", nullptr));
        month_2->setItemText(10, QCoreApplication::translate("taskdialog", "11", nullptr));
        month_2->setItemText(11, QCoreApplication::translate("taskdialog", "12", nullptr));

        day_2->setItemText(0, QCoreApplication::translate("taskdialog", "1", nullptr));
        day_2->setItemText(1, QCoreApplication::translate("taskdialog", "2", nullptr));
        day_2->setItemText(2, QCoreApplication::translate("taskdialog", "3", nullptr));
        day_2->setItemText(3, QCoreApplication::translate("taskdialog", "4", nullptr));
        day_2->setItemText(4, QCoreApplication::translate("taskdialog", "5", nullptr));
        day_2->setItemText(5, QCoreApplication::translate("taskdialog", "6", nullptr));
        day_2->setItemText(6, QCoreApplication::translate("taskdialog", "7", nullptr));
        day_2->setItemText(7, QCoreApplication::translate("taskdialog", "8", nullptr));
        day_2->setItemText(8, QCoreApplication::translate("taskdialog", "9", nullptr));
        day_2->setItemText(9, QCoreApplication::translate("taskdialog", "10", nullptr));
        day_2->setItemText(10, QCoreApplication::translate("taskdialog", "11", nullptr));
        day_2->setItemText(11, QCoreApplication::translate("taskdialog", "12", nullptr));
        day_2->setItemText(12, QCoreApplication::translate("taskdialog", "13", nullptr));
        day_2->setItemText(13, QCoreApplication::translate("taskdialog", "14", nullptr));
        day_2->setItemText(14, QCoreApplication::translate("taskdialog", "15", nullptr));
        day_2->setItemText(15, QCoreApplication::translate("taskdialog", "16", nullptr));
        day_2->setItemText(16, QCoreApplication::translate("taskdialog", "17", nullptr));
        day_2->setItemText(17, QCoreApplication::translate("taskdialog", "18", nullptr));
        day_2->setItemText(18, QCoreApplication::translate("taskdialog", "19", nullptr));
        day_2->setItemText(19, QCoreApplication::translate("taskdialog", "20", nullptr));
        day_2->setItemText(20, QCoreApplication::translate("taskdialog", "21", nullptr));
        day_2->setItemText(21, QCoreApplication::translate("taskdialog", "22", nullptr));
        day_2->setItemText(22, QCoreApplication::translate("taskdialog", "23", nullptr));
        day_2->setItemText(23, QCoreApplication::translate("taskdialog", "24", nullptr));
        day_2->setItemText(24, QCoreApplication::translate("taskdialog", "25", nullptr));
        day_2->setItemText(25, QCoreApplication::translate("taskdialog", "26", nullptr));
        day_2->setItemText(26, QCoreApplication::translate("taskdialog", "27", nullptr));
        day_2->setItemText(27, QCoreApplication::translate("taskdialog", "28", nullptr));
        day_2->setItemText(28, QCoreApplication::translate("taskdialog", "29", nullptr));
        day_2->setItemText(29, QCoreApplication::translate("taskdialog", "30", nullptr));

        addtask->setText(QCoreApplication::translate("taskdialog", "Add User Task", nullptr));
        label_18->setText(QCoreApplication::translate("taskdialog", "Deadline :", nullptr));
        label_7->setText(QCoreApplication::translate("taskdialog", " Priority:", nullptr));
        combopriority->setItemText(0, QCoreApplication::translate("taskdialog", "1", nullptr));
        combopriority->setItemText(1, QCoreApplication::translate("taskdialog", "2", nullptr));
        combopriority->setItemText(2, QCoreApplication::translate("taskdialog", "3", nullptr));
        combopriority->setItemText(3, QCoreApplication::translate("taskdialog", "4", nullptr));
        combopriority->setItemText(4, QCoreApplication::translate("taskdialog", "5", nullptr));
        combopriority->setItemText(5, QCoreApplication::translate("taskdialog", "6", nullptr));
        combopriority->setItemText(6, QCoreApplication::translate("taskdialog", "7", nullptr));
        combopriority->setItemText(7, QCoreApplication::translate("taskdialog", "8", nullptr));
        combopriority->setItemText(8, QCoreApplication::translate("taskdialog", "9", nullptr));
        combopriority->setItemText(9, QCoreApplication::translate("taskdialog", "10", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("taskdialog", " Add Users Task", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("taskdialog", "Comments", nullptr));
        taskstatus->setItemText(0, QCoreApplication::translate("taskdialog", "undone", nullptr));
        taskstatus->setItemText(1, QCoreApplication::translate("taskdialog", "Done", nullptr));

        deadline->setText(QString());
        label_4->setText(QCoreApplication::translate("taskdialog", "Deadline :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class taskdialog: public Ui_taskdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKDIALOG_H
