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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrganizationUI
{
public:
    QLabel *img;
    QLabel *name;

    void setupUi(QWidget *OrganizationUI)
    {
        if (OrganizationUI->objectName().isEmpty())
            OrganizationUI->setObjectName("OrganizationUI");
        OrganizationUI->resize(230, 162);
        img = new QLabel(OrganizationUI);
        img->setObjectName("img");
        img->setGeometry(QRect(-10, 0, 251, 161));
        img->setStyleSheet(QString::fromUtf8("image: url(:/organize/organize.png);"));
        name = new QLabel(OrganizationUI);
        name->setObjectName("name");
        name->setGeometry(QRect(10, 130, 121, 20));

        retranslateUi(OrganizationUI);

        QMetaObject::connectSlotsByName(OrganizationUI);
    } // setupUi

    void retranslateUi(QWidget *OrganizationUI)
    {
        OrganizationUI->setWindowTitle(QCoreApplication::translate("OrganizationUI", "Form", nullptr));
        img->setText(QString());
        name->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OrganizationUI: public Ui_OrganizationUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORGANIZATIONUI_H
