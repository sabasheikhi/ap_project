/********************************************************************************
** Form generated from reading UI file 'edittask.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTASK_H
#define UI_EDITTASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_edittask
{
public:
    QPushButton *editButton;
    QTextEdit *descriptionLineEdit;
    QLabel *descriptionLabel;
    QLabel *Name;
    QLineEdit *nameLineEdit;
    QLabel *descriptionLabel_2;
    QTextEdit *teamname;

    void setupUi(QWidget *edittask)
    {
        if (edittask->objectName().isEmpty())
            edittask->setObjectName("edittask");
        edittask->resize(310, 325);
        edittask->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 11, 90);"));
        editButton = new QPushButton(edittask);
        editButton->setObjectName("editButton");
        editButton->setGeometry(QRect(160, 250, 111, 41));
        editButton->setStyleSheet(QString::fromUtf8("background-color: rgb(149, 149, 149);\n"
"border-radius:7px;"));
        descriptionLineEdit = new QTextEdit(edittask);
        descriptionLineEdit->setObjectName("descriptionLineEdit");
        descriptionLineEdit->setGeometry(QRect(130, 100, 141, 61));
        descriptionLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 255, 193);\n"
"border-radius:8px;"));
        descriptionLabel = new QLabel(edittask);
        descriptionLabel->setObjectName("descriptionLabel");
        descriptionLabel->setGeometry(QRect(20, 90, 101, 20));
        descriptionLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"border-radius:7px;"));
        Name = new QLabel(edittask);
        Name->setObjectName("Name");
        Name->setGeometry(QRect(20, 40, 63, 20));
        Name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"border-radius:7px;"));
        nameLineEdit = new QLineEdit(edittask);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(130, 40, 141, 31));
        nameLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 255, 193);\n"
"border-radius:8px;"));
        descriptionLabel_2 = new QLabel(edittask);
        descriptionLabel_2->setObjectName("descriptionLabel_2");
        descriptionLabel_2->setGeometry(QRect(20, 190, 71, 20));
        descriptionLabel_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"border-radius:7px;"));
        teamname = new QTextEdit(edittask);
        teamname->setObjectName("teamname");
        teamname->setGeometry(QRect(130, 190, 141, 31));
        teamname->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 255, 193);\n"
"border-radius:8px;"));

        retranslateUi(edittask);

        QMetaObject::connectSlotsByName(edittask);
    } // setupUi

    void retranslateUi(QWidget *edittask)
    {
        edittask->setWindowTitle(QCoreApplication::translate("edittask", "Form", nullptr));
        editButton->setText(QCoreApplication::translate("edittask", "Edit", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("edittask", "   Description :", nullptr));
        Name->setText(QCoreApplication::translate("edittask", "   Name :", nullptr));
        descriptionLabel_2->setText(QCoreApplication::translate("edittask", "   Team :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edittask: public Ui_edittask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTASK_H
