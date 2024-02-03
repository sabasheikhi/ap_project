/********************************************************************************
** Form generated from reading UI file 'editproject.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROJECT_H
#define UI_EDITPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editproject
{
public:
    QLabel *descriptionLabel;
    QTextEdit *descriptionLineEdit;
    QPushButton *editButton;
    QLineEdit *nameLineEdit;
    QLabel *Name;

    void setupUi(QWidget *editproject)
    {
        if (editproject->objectName().isEmpty())
            editproject->setObjectName("editproject");
        editproject->resize(481, 218);
        editproject->setStyleSheet(QString::fromUtf8("background-color: rgb(22, 20, 58);"));
        descriptionLabel = new QLabel(editproject);
        descriptionLabel->setObjectName("descriptionLabel");
        descriptionLabel->setGeometry(QRect(30, 110, 101, 20));
        descriptionLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"border-radius:7px;"));
        descriptionLineEdit = new QTextEdit(editproject);
        descriptionLineEdit->setObjectName("descriptionLineEdit");
        descriptionLineEdit->setGeometry(QRect(140, 110, 311, 61));
        descriptionLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 255, 193);\n"
"border-radius:8px;"));
        editButton = new QPushButton(editproject);
        editButton->setObjectName("editButton");
        editButton->setGeometry(QRect(360, 50, 81, 31));
        editButton->setStyleSheet(QString::fromUtf8("background-color: rgb(149, 149, 149);\n"
"border-radius:7px;"));
        nameLineEdit = new QLineEdit(editproject);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(140, 50, 131, 31));
        nameLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 255, 193);\n"
"border-radius:8px;"));
        Name = new QLabel(editproject);
        Name->setObjectName("Name");
        Name->setGeometry(QRect(30, 50, 63, 20));
        Name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"border-radius:7px;"));

        retranslateUi(editproject);

        QMetaObject::connectSlotsByName(editproject);
    } // setupUi

    void retranslateUi(QWidget *editproject)
    {
        editproject->setWindowTitle(QCoreApplication::translate("editproject", "Form", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("editproject", "   Description :", nullptr));
        editButton->setText(QCoreApplication::translate("editproject", "Edit", nullptr));
        Name->setText(QCoreApplication::translate("editproject", "   Name :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editproject: public Ui_editproject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROJECT_H
