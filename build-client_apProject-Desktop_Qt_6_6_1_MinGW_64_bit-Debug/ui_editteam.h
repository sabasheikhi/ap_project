/********************************************************************************
** Form generated from reading UI file 'editteam.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTEAM_H
#define UI_EDITTEAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editteam
{
public:
    QPushButton *editButton;
    QLineEdit *nameLineEdit;
    QTextEdit *descriptionLineEdit;
    QLabel *Name;
    QLabel *descriptionLabel;

    void setupUi(QWidget *editteam)
    {
        if (editteam->objectName().isEmpty())
            editteam->setObjectName("editteam");
        editteam->resize(551, 212);
        editteam->setStyleSheet(QString::fromUtf8("background-color: rgb(22, 18, 85);"));
        editButton = new QPushButton(editteam);
        editButton->setObjectName("editButton");
        editButton->setGeometry(QRect(400, 40, 81, 31));
        editButton->setStyleSheet(QString::fromUtf8("background-color: rgb(149, 149, 149);\n"
"border-radius:7px;"));
        nameLineEdit = new QLineEdit(editteam);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(180, 40, 131, 31));
        nameLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 255, 193);\n"
"border-radius:8px;"));
        descriptionLineEdit = new QTextEdit(editteam);
        descriptionLineEdit->setObjectName("descriptionLineEdit");
        descriptionLineEdit->setGeometry(QRect(180, 100, 311, 61));
        descriptionLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 255, 193);\n"
"border-radius:8px;"));
        Name = new QLabel(editteam);
        Name->setObjectName("Name");
        Name->setGeometry(QRect(70, 40, 63, 20));
        Name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"border-radius:7px;"));
        descriptionLabel = new QLabel(editteam);
        descriptionLabel->setObjectName("descriptionLabel");
        descriptionLabel->setGeometry(QRect(70, 100, 101, 20));
        descriptionLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"border-radius:7px;"));

        retranslateUi(editteam);

        QMetaObject::connectSlotsByName(editteam);
    } // setupUi

    void retranslateUi(QWidget *editteam)
    {
        editteam->setWindowTitle(QCoreApplication::translate("editteam", "Form", nullptr));
        editButton->setText(QCoreApplication::translate("editteam", "Edit", nullptr));
        Name->setText(QCoreApplication::translate("editteam", "   Name :", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("editteam", "   Description :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editteam: public Ui_editteam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTEAM_H
