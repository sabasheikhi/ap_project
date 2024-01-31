/********************************************************************************
** Form generated from reading UI file 'addorganizationclass.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDORGANIZATIONCLASS_H
#define UI_ADDORGANIZATIONCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AddOrganizationClass
{
public:
    QPushButton *addButton;
    QLineEdit *nameLineEdit;
    QTextEdit *descriptionLineEdit;
    QLabel *Name;
    QLabel *descriptionLabel;
    QFrame *line;

    void setupUi(QDialog *AddOrganizationClass)
    {
        if (AddOrganizationClass->objectName().isEmpty())
            AddOrganizationClass->setObjectName("AddOrganizationClass");
        AddOrganizationClass->resize(484, 161);
        AddOrganizationClass->setStyleSheet(QString::fromUtf8("background-color: rgb(35, 28, 83);"));
        addButton = new QPushButton(AddOrganizationClass);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(350, 20, 81, 31));
        addButton->setStyleSheet(QString::fromUtf8("background-color: rgb(149, 149, 149);\n"
"border-radius:5px;"));
        nameLineEdit = new QLineEdit(AddOrganizationClass);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(140, 20, 131, 31));
        nameLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 255, 193);\n"
"border-radius:8px;"));
        descriptionLineEdit = new QTextEdit(AddOrganizationClass);
        descriptionLineEdit->setObjectName("descriptionLineEdit");
        descriptionLineEdit->setGeometry(QRect(140, 80, 311, 61));
        descriptionLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 255, 193);\n"
"border-radius:8px;"));
        Name = new QLabel(AddOrganizationClass);
        Name->setObjectName("Name");
        Name->setGeometry(QRect(40, 20, 63, 20));
        Name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        descriptionLabel = new QLabel(AddOrganizationClass);
        descriptionLabel->setObjectName("descriptionLabel");
        descriptionLabel->setGeometry(QRect(40, 60, 91, 20));
        descriptionLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line = new QFrame(AddOrganizationClass);
        line->setObjectName("line");
        line->setGeometry(QRect(461, -10, 20, 191));
        QFont font;
        font.setPointSize(12);
        line->setFont(font);
        line->setStyleSheet(QString::fromUtf8("color: rgb(250, 255, 193);\n"
"color: rgb(255, 255, 255);"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(AddOrganizationClass);

        QMetaObject::connectSlotsByName(AddOrganizationClass);
    } // setupUi

    void retranslateUi(QDialog *AddOrganizationClass)
    {
        AddOrganizationClass->setWindowTitle(QCoreApplication::translate("AddOrganizationClass", "Dialog", nullptr));
        addButton->setText(QCoreApplication::translate("AddOrganizationClass", "Add", nullptr));
        Name->setText(QCoreApplication::translate("AddOrganizationClass", "Name :", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("AddOrganizationClass", "Description :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddOrganizationClass: public Ui_AddOrganizationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDORGANIZATIONCLASS_H
