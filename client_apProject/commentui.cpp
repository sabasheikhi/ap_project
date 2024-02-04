#include "commentui.h"
#include "ui_commentui.h"
#include "taskdialog.h"

commentui::commentui(QWidget *parent , QString use,QString text) :
    QWidget(parent),
    ui(new Ui::commentui)
{
    ui->setupUi(this);
    ui->text->setText(text);
    ui->username->setText(use);
}

commentui::~commentui()
{
    delete ui;
}



void commentui::on_delete_2_clicked()
{
   // emit deletec(ui->username->text());

}

