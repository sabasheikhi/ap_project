/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QTabWidget *tabWidget;
    QWidget *organizationTab;
    QPushButton *plusButton;
    QWidget *projectsTab;
    QPushButton *plusButton_2;
    QGroupBox *groupBox;
    QListWidget *notificationsListWidget;
    QListWidget *onlineChatSystemListWidget;
    QToolButton *SettingToolButton;
    QLabel *welcomeLabel;

    void setupUi(QWidget *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName("Dashboard");
        Dashboard->resize(694, 645);
        tabWidget = new QTabWidget(Dashboard);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(260, 20, 421, 601));
        organizationTab = new QWidget();
        organizationTab->setObjectName("organizationTab");
        plusButton = new QPushButton(organizationTab);
        plusButton->setObjectName("plusButton");
        plusButton->setGeometry(QRect(20, 20, 81, 71));
        plusButton->setStyleSheet(QString::fromUtf8("image: url(:/plus/plusIcon.png);\n"
"border-radius:20px"));
        tabWidget->addTab(organizationTab, QString());
        projectsTab = new QWidget();
        projectsTab->setObjectName("projectsTab");
        plusButton_2 = new QPushButton(projectsTab);
        plusButton_2->setObjectName("plusButton_2");
        plusButton_2->setGeometry(QRect(20, 20, 81, 71));
        plusButton_2->setStyleSheet(QString::fromUtf8("image: url(:/plus/plusIcon.png);\n"
"border-radius:20px"));
        tabWidget->addTab(projectsTab, QString());
        groupBox = new QGroupBox(Dashboard);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 20, 231, 601));
        groupBox->setStyleSheet(QString::fromUtf8("border-color: rgb(16, 3, 1);\n"
"color: rgb(255, 78, 19);\n"
"gridline-color: rgb(76, 16, 255);"));
        notificationsListWidget = new QListWidget(groupBox);
        notificationsListWidget->setObjectName("notificationsListWidget");
        notificationsListWidget->setGeometry(QRect(10, 110, 201, 231));
        onlineChatSystemListWidget = new QListWidget(groupBox);
        onlineChatSystemListWidget->setObjectName("onlineChatSystemListWidget");
        onlineChatSystemListWidget->setGeometry(QRect(10, 360, 201, 221));
        SettingToolButton = new QToolButton(groupBox);
        SettingToolButton->setObjectName("SettingToolButton");
        SettingToolButton->setGeometry(QRect(10, 70, 201, 23));
        SettingToolButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        welcomeLabel = new QLabel(groupBox);
        welcomeLabel->setObjectName("welcomeLabel");
        welcomeLabel->setGeometry(QRect(20, 35, 91, 21));

        retranslateUi(Dashboard);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QWidget *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "Dashboard", nullptr));
        plusButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(organizationTab), QCoreApplication::translate("Dashboard", "Organizations", nullptr));
        plusButton_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(projectsTab), QCoreApplication::translate("Dashboard", "Projects", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dashboard", "Menu", nullptr));
        SettingToolButton->setText(QCoreApplication::translate("Dashboard", "Setting", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("Dashboard", "welcome!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
