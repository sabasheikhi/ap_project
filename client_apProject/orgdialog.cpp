#include "orgdialog.h"
#include "ui_orgdialog.h"
#include "editorganizationclass.h"

OrgDialog::OrgDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OrgDialog)
{
    ui->setupUi(this);
}

OrgDialog::~OrgDialog()
{
    delete ui;
}





void OrgDialog::on_editorg_clicked()
{
    editOrganizationClass *editPage;
    editPage = new editOrganizationClass(this);
    editPage->show();
}

