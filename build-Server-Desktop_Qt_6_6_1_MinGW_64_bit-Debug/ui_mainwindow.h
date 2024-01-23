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
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(373, 253);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        address = new QLineEdit(centralwidget);
        address->setObjectName("address");
        address->setGeometry(QRect(140, 50, 113, 25));
        address->setAutoFillBackground(false);
        address->setStyleSheet(QString::fromUtf8("QLineEdit { selection-color: red }\n"
"QLineEdit { selection-background-color: black }\n"
"QLineEdit { placeholder-text-color: #800000ff } /* semi-transparent blue */"));
        run_server = new QPushButton(centralwidget);
        run_server->setObjectName("run_server");
        run_server->setGeometry(QRect(150, 140, 93, 29));
        run_server->setStyleSheet(QString::fromUtf8("QPushButton::hover {\n"
"    \n"
"	background-color: rgb(132, 106, 98);\n"
"    }"));
        Port = new QLineEdit(centralwidget);
        Port->setObjectName("Port");
        Port->setGeometry(QRect(140, 90, 113, 25));
        Port->setStyleSheet(QString::fromUtf8("\n"
"/*background-color: rgb(203, 203, 203);*/\n"
"placeholder-text-color: #800000ff"));
        label_Address = new QLabel(centralwidget);
        label_Address->setObjectName("label_Address");
        label_Address->setGeometry(QRect(40, 50, 63, 20));
        label_Port = new QLabel(centralwidget);
        label_Port->setObjectName("label_Port");
        label_Port->setGeometry(QRect(40, 100, 63, 20));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 180, 111, 41));
        MainWindow->setCentralWidget(centralwidget);
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
        pushButton->setText(QCoreApplication::translate("MainWindow", "go to Dashboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
