#include "editorganizationclass.h"
#include "ui_editorganizationclass.h"

editOrganizationClass::editOrganizationClass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editOrganizationClass)
{
    ui->setupUi(this);
}

editOrganizationClass::~editOrganizationClass()
{
    delete ui;
}
