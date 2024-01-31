#include "organizationui.h"
#include "ui_organizationui.h"
#include "orgdialog.h"

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

void OrganizationUI::on_pushButton_clicked()
{
    OrgDialog *page;
    page = new OrgDialog();
    page->show();
}

