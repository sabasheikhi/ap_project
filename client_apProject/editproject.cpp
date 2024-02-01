#include "editproject.h"
#include "ui_editproject.h"
#include <QString>

editproject::editproject(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::editproject)
{
    ui->setupUi(this);
    ui->nameLineEdit->setText("");
    ui->descriptionLineEdit->setText("");
}

editproject::~editproject()
{
    delete ui;
}

void editproject::on_editButton_clicked()
{
    if(!ui->nameLineEdit->text().isEmpty()){
        emit editprojec(ui->nameLineEdit->text(),ui->descriptionLineEdit->toPlainText());}
}

