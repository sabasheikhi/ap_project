/********************************************************************************
** Form generated from reading UI file 'editorganizationclass.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORGANIZATIONCLASS_H
#define UI_EDITORGANIZATIONCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_editOrganizationClass
{
public:
    QLabel *descriptionLabel;
    QTextEdit *descriptionLineEdit;
    QFrame *line;
    QLineEdit *nameLineEdit;
    QLabel *Name;
    QPushButton *editButton;

    void setupUi(QDialog *editOrganizationClass)
    {
        if (editOrganizationClass->objectName().isEmpty())
            editOrganizationClass->setObjectName("editOrganizationClass");
        editOrganizationClass->resize(541, 295);
        editOrganizationClass->setStyleSheet(QString::fromUtf8("background-color: rgb(18, 2, 83);"));
        descriptionLabel = new QLabel(editOrganizationClass);
        descriptionLabel->setObjectName("descriptionLabel");
        descriptionLabel->setGeometry(QRect(70, 130, 91, 20));
        descriptionLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(74, 74, 74);\n"
"border-radius:7px;"));
        descriptionLineEdit = new QTextEdit(editOrganizationClass);
        descriptionLineEdit->setObjectName("descriptionLineEdit");
        descriptionLineEdit->setGeometry(QRect(180, 130, 311, 61));
        descriptionLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 255, 193);\n"
"border-radius:8px;"));
        line = new QFrame(editOrganizationClass);
        line->setObjectName("line");
        line->setGeometry(QRect(501, 40, 20, 191));
        QFont font;
        font.setPointSize(12);
        line->setFont(font);
        line->setStyleSheet(QString::fromUtf8("color: rgb(250, 255, 193);\n"
"color: rgb(255, 255, 255);"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        nameLineEdit = new QLineEdit(editOrganizationClass);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(180, 70, 131, 31));
        nameLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 255, 193);\n"
"border-radius:8px;"));
        Name = new QLabel(editOrganizationClass);
        Name->setObjectName("Name");
        Name->setGeometry(QRect(70, 70, 63, 20));
        Name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(80, 80, 80);\n"
"border-radius:7px;"));
        editButton = new QPushButton(editOrganizationClass);
        editButton->setObjectName("editButton");
        editButton->setGeometry(QRect(400, 70, 81, 31));
        editButton->setStyleSheet(QString::fromUtf8("background-color: rgb(149, 149, 149);\n"
"border-radius:5px;"));

        retranslateUi(editOrganizationClass);

        QMetaObject::connectSlotsByName(editOrganizationClass);
    } // setupUi

    void retranslateUi(QDialog *editOrganizationClass)
    {
        editOrganizationClass->setWindowTitle(QCoreApplication::translate("editOrganizationClass", "Dialog", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("editOrganizationClass", "   Description :", nullptr));
        Name->setText(QCoreApplication::translate("editOrganizationClass", "   Name :", nullptr));
        editButton->setText(QCoreApplication::translate("editOrganizationClass", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editOrganizationClass: public Ui_editOrganizationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORGANIZATIONCLASS_H
