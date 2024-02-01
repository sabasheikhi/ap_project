#include "editorganizationclass.h"
#include "ui_editorganizationclass.h"
#include <QString>

editOrganizationClass::editOrganizationClass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editOrganizationClass)
{
    ui->setupUi(this);
    ui->nameLineEdit->setText("");
    ui->descriptionLineEdit->setText("");

}

editOrganizationClass::~editOrganizationClass()
{
    delete ui;
}

void editOrganizationClass::on_editButton_clicked()
{
    if(!ui->nameLineEdit->text().isEmpty()){
        emit editOrganization(ui->nameLineEdit->text(),ui->descriptionLineEdit->toPlainText());}
}

