/********************************************************************************
** Form generated from reading UI file 'commentui.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMENTUI_H
#define UI_COMMENTUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_commentui
{
public:
    QPushButton *reply;
    QLabel *text;
    QLabel *username;
    QLabel *label;

    void setupUi(QWidget *commentui)
    {
        if (commentui->objectName().isEmpty())
            commentui->setObjectName("commentui");
        commentui->resize(327, 91);
        commentui->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 251, 201);"));
        reply = new QPushButton(commentui);
        reply->setObjectName("reply");
        reply->setGeometry(QRect(240, 30, 71, 31));
        reply->setStyleSheet(QString::fromUtf8("font: 8pt \"Segoe UI\";\n"
"border-radius:6px;\n"
"background-color: rgb(184, 125, 97);"));
        text = new QLabel(commentui);
        text->setObjectName("text");
        text->setGeometry(QRect(30, 40, 201, 31));
        username = new QLabel(commentui);
        username->setObjectName("username");
        username->setGeometry(QRect(40, 10, 63, 20));
        label = new QLabel(commentui);
        label->setObjectName("label");
        label->setGeometry(QRect(2, 0, 321, 91));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(231, 231, 231);\n"
"background-color: rgb(255, 251, 201);"));
        label->raise();
        reply->raise();
        text->raise();
        username->raise();

        retranslateUi(commentui);

        QMetaObject::connectSlotsByName(commentui);
    } // setupUi

    void retranslateUi(QWidget *commentui)
    {
        commentui->setWindowTitle(QCoreApplication::translate("commentui", "Form", nullptr));
        reply->setText(QCoreApplication::translate("commentui", "reply", nullptr));
        text->setText(QString());
        username->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class commentui: public Ui_commentui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMENTUI_H
