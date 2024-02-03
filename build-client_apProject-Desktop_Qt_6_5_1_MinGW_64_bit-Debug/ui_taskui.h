/********************************************************************************
** Form generated from reading UI file 'taskui.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKUI_H
#define UI_TASKUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_taskui
{
public:
    QLabel *taskname;
    QLabel *projectname;
    QLabel *teamname;
    QPushButton *pushButton;

    void setupUi(QWidget *taskui)
    {
        if (taskui->objectName().isEmpty())
            taskui->setObjectName("taskui");
        taskui->resize(179, 181);
        taskname = new QLabel(taskui);
        taskname->setObjectName("taskname");
        taskname->setGeometry(QRect(20, 100, 101, 20));
        taskname->setStyleSheet(QString::fromUtf8("color: rgb(11, 11, 11);\n"
"background-color: rgb(195, 195, 195);"));
        projectname = new QLabel(taskui);
        projectname->setObjectName("projectname");
        projectname->setGeometry(QRect(20, 130, 101, 20));
        projectname->setStyleSheet(QString::fromUtf8("color: rgb(26, 26, 26);\n"
"background-color: rgb(195, 195, 195);"));
        teamname = new QLabel(taskui);
        teamname->setObjectName("teamname");
        teamname->setGeometry(QRect(10, 160, 101, 16));
        teamname->setStyleSheet(QString::fromUtf8("color: rgb(26, 26, 26);\n"
"background-color: rgb(195, 195, 195);"));
        pushButton = new QPushButton(taskui);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 181, 181));
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/task/task.png);"));
        pushButton->raise();
        taskname->raise();
        projectname->raise();
        teamname->raise();

        retranslateUi(taskui);

        QMetaObject::connectSlotsByName(taskui);
    } // setupUi

    void retranslateUi(QWidget *taskui)
    {
        taskui->setWindowTitle(QCoreApplication::translate("taskui", "Form", nullptr));
        taskname->setText(QString());
        projectname->setText(QString());
        teamname->setText(QString());
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class taskui: public Ui_taskui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKUI_H
