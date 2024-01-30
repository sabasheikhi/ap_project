#include "addorganizationclass.h"
#include "ui_addorganizationclass.h"

AddOrganizationClass::AddOrganizationClass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddOrganizationClass)
{
    ui->setupUi(this);
}

AddOrganizationClass::~AddOrganizationClass()
{
    delete ui;
}

void AddOrganizationClass::on_addButton_clicked()
{
    emit addOrganization(ui->nameLineEdit->text(),ui->descriptionLineEdit->toPlainText());
}

