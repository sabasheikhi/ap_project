#include "organizationui.h"
#include "ui_organizationui.h"

OrganizationUI::OrganizationUI(QWidget *parent,QString name) :
    QWidget(parent),
    ui(new Ui::OrganizationUI)
{
    ui->setupUi(this);
    ui->name->setText(name);
}

OrganizationUI::~OrganizationUI()
{
    delete ui;
}
