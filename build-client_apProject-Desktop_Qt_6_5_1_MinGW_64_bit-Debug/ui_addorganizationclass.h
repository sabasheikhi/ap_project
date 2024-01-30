/********************************************************************************
** Form generated from reading UI file 'addorganizationclass.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDORGANIZATIONCLASS_H
#define UI_ADDORGANIZATIONCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
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

    void setupUi(QDialog *AddOrganizationClass)
    {
        if (AddOrganizationClass->objectName().isEmpty())
            AddOrganizationClass->setObjectName("AddOrganizationClass");
        AddOrganizationClass->resize(479, 129);
        addButton = new QPushButton(AddOrganizationClass);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(370, 10, 80, 24));
        nameLineEdit = new QLineEdit(AddOrganizationClass);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(50, 20, 113, 24));
        descriptionLineEdit = new QTextEdit(AddOrganizationClass);
        descriptionLineEdit->setObjectName("descriptionLineEdit");
        descriptionLineEdit->setGeometry(QRect(50, 50, 401, 61));

        retranslateUi(AddOrganizationClass);

        QMetaObject::connectSlotsByName(AddOrganizationClass);
    } // setupUi

    void retranslateUi(QDialog *AddOrganizationClass)
    {
        AddOrganizationClass->setWindowTitle(QCoreApplication::translate("AddOrganizationClass", "Dialog", nullptr));
        addButton->setText(QCoreApplication::translate("AddOrganizationClass", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddOrganizationClass: public Ui_AddOrganizationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDORGANIZATIONCLASS_H
