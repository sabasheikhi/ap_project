#include "editorganizationclass.h"
#include "ui_editorganizationclass.h"
#include <QString>

editOrganizationClass::editOrganizationClass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editOrganizationClass)
{
    ui->setupUi(this);
    ui->nameLineEdit = // old_name
    ui->descriptionLineEdit = // old-description
}

editOrganizationClass::~editOrganizationClass()
{
    delete ui;
}

void editOrganizationClass::on_editButton_clicked()
{
    QString name = ui->nameLineEdit;
    QString description = ui->descriptionLineEdit;
    QString command = "EDITORG " + name + " " + description + "\n";
    socket->write(command.toUtf8());
    socket->flush();

}

