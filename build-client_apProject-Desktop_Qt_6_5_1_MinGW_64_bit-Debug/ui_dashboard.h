/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QListWidget *notificationsListWidget;
    QLabel *welcomeLabel;
    QListWidget *onlineChatSystemListWidget;
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *addButton;

    void setupUi(QWidget *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName("Dashboard");
        Dashboard->resize(1046, 623);
        notificationsListWidget = new QListWidget(Dashboard);
        notificationsListWidget->setObjectName("notificationsListWidget");
        notificationsListWidget->setGeometry(QRect(40, 100, 201, 231));
        welcomeLabel = new QLabel(Dashboard);
        welcomeLabel->setObjectName("welcomeLabel");
        welcomeLabel->setGeometry(QRect(50, 50, 91, 21));
        onlineChatSystemListWidget = new QListWidget(Dashboard);
        onlineChatSystemListWidget->setObjectName("onlineChatSystemListWidget");
        onlineChatSystemListWidget->setGeometry(QRect(40, 360, 201, 221));
        label = new QLabel(Dashboard);
        label->setObjectName("label");
        label->setGeometry(QRect(-10, 0, 1071, 631));
        label->setStyleSheet(QString::fromUtf8("image: url(:/dashboard/dashboard.png);"));
        gridLayoutWidget = new QWidget(Dashboard);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(300, 90, 761, 501));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        addButton = new QPushButton(gridLayoutWidget);
        addButton->setObjectName("addButton");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(addButton, 0, 0, 1, 1);

        label->raise();
        notificationsListWidget->raise();
        welcomeLabel->raise();
        onlineChatSystemListWidget->raise();
        gridLayoutWidget->raise();

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QWidget *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "Dashboard", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("Dashboard", "welcome!", nullptr));
        label->setText(QString());
        addButton->setText(QCoreApplication::translate("Dashboard", "add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
