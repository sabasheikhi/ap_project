/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *address;
    QPushButton *run_server;
    QLineEdit *Port;
    QLabel *label_Address;
    QLabel *label_Port;
    QLabel *back;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(389, 332);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        address = new QLineEdit(centralwidget);
        address->setObjectName("address");
        address->setGeometry(QRect(170, 100, 113, 25));
        address->setAutoFillBackground(false);
        address->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 246, 238);\n"
"border-radius:7px;"));
        run_server = new QPushButton(centralwidget);
        run_server->setObjectName("run_server");
        run_server->setGeometry(QRect(190, 190, 93, 29));
        run_server->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:8px;\n"
"	background-color: rgb(255, 219, 123);\n"
"	background-color: rgb(255, 240, 155);\n"
"    }\n"
"QPushButton::hover {\n"
"    \n"
"	background-color: rgb(132, 106, 98);\n"
"    }"));
        Port = new QLineEdit(centralwidget);
        Port->setObjectName("Port");
        Port->setGeometry(QRect(170, 140, 113, 25));
        Port->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 246, 238);\n"
"border-radius:7px;"));
        label_Address = new QLabel(centralwidget);
        label_Address->setObjectName("label_Address");
        label_Address->setGeometry(QRect(80, 100, 63, 20));
        label_Port = new QLabel(centralwidget);
        label_Port->setObjectName("label_Port");
        label_Port->setGeometry(QRect(80, 140, 63, 20));
        back = new QLabel(centralwidget);
        back->setObjectName("back");
        back->setGeometry(QRect(0, 0, 391, 331));
        back->setStyleSheet(QString::fromUtf8("image: url(:/back/server.png);"));
        MainWindow->setCentralWidget(centralwidget);
        back->raise();
        address->raise();
        run_server->raise();
        Port->raise();
        label_Address->raise();
        label_Port->raise();
        QWidget::setTabOrder(Port, run_server);
        QWidget::setTabOrder(run_server, address);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        run_server->setText(QCoreApplication::translate("MainWindow", "Run", nullptr));
        label_Address->setText(QCoreApplication::translate("MainWindow", "Address :", nullptr));
        label_Port->setText(QCoreApplication::translate("MainWindow", "Port :", nullptr));
        back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
