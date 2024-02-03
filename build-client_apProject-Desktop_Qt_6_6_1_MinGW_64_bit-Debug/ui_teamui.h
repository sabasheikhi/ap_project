/********************************************************************************
** Form generated from reading UI file 'teamui.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEAMUI_H
#define UI_TEAMUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teamui
{
public:
    QPushButton *openteam;
    QLabel *teamname;

    void setupUi(QWidget *teamui)
    {
        if (teamui->objectName().isEmpty())
            teamui->setObjectName("teamui");
        teamui->resize(194, 139);
        openteam = new QPushButton(teamui);
        openteam->setObjectName("openteam");
        openteam->setGeometry(QRect(-10, 0, 211, 141));
        openteam->setStyleSheet(QString::fromUtf8("image: url(:/ptback/team.png);"));
        teamname = new QLabel(teamui);
        teamname->setObjectName("teamname");
        teamname->setGeometry(QRect(10, 110, 111, 20));
        teamname->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 173, 235);\n"
"color: rgb(15, 15, 15);"));

        retranslateUi(teamui);

        QMetaObject::connectSlotsByName(teamui);
    } // setupUi

    void retranslateUi(QWidget *teamui)
    {
        teamui->setWindowTitle(QCoreApplication::translate("teamui", "Form", nullptr));
        openteam->setText(QString());
        teamname->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class teamui: public Ui_teamui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAMUI_H
