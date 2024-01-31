/********************************************************************************
** Form generated from reading UI file 'organizationui.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORGANIZATIONUI_H
#define UI_ORGANIZATIONUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrganizationUI
{
public:
    QLabel *name;
    QPushButton *pushButton;

    void setupUi(QWidget *OrganizationUI)
    {
        if (OrganizationUI->objectName().isEmpty())
            OrganizationUI->setObjectName("OrganizationUI");
        OrganizationUI->resize(230, 162);
        name = new QLabel(OrganizationUI);
        name->setObjectName("name");
        name->setGeometry(QRect(20, 130, 121, 20));
        pushButton = new QPushButton(OrganizationUI);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 231, 161));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"image: url(:/organize/organize.png);"));
        pushButton->raise();
        name->raise();

        retranslateUi(OrganizationUI);

        QMetaObject::connectSlotsByName(OrganizationUI);
    } // setupUi

    void retranslateUi(QWidget *OrganizationUI)
    {
        OrganizationUI->setWindowTitle(QCoreApplication::translate("OrganizationUI", "Form", nullptr));
        name->setText(QString());
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OrganizationUI: public Ui_OrganizationUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORGANIZATIONUI_H
