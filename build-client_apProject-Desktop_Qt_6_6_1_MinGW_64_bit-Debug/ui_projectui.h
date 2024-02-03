/********************************************************************************
** Form generated from reading UI file 'projectui.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTUI_H
#define UI_PROJECTUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_projectui
{
public:
    QPushButton *openproject;
    QLabel *projectname;

    void setupUi(QWidget *projectui)
    {
        if (projectui->objectName().isEmpty())
            projectui->setObjectName("projectui");
        projectui->resize(210, 147);
        openproject = new QPushButton(projectui);
        openproject->setObjectName("openproject");
        openproject->setGeometry(QRect(0, 0, 211, 151));
        openproject->setStyleSheet(QString::fromUtf8("image: url(:/ptback/project.png);"));
        projectname = new QLabel(projectui);
        projectname->setObjectName("projectname");
        projectname->setGeometry(QRect(20, 120, 121, 20));
        projectname->setStyleSheet(QString::fromUtf8("color: rgb(16, 16, 16);\n"
"background-color: rgb(223, 164, 227);"));

        retranslateUi(projectui);

        QMetaObject::connectSlotsByName(projectui);
    } // setupUi

    void retranslateUi(QWidget *projectui)
    {
        projectui->setWindowTitle(QCoreApplication::translate("projectui", "Form", nullptr));
        openproject->setText(QString());
        projectname->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class projectui: public Ui_projectui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTUI_H
