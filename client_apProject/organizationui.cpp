#include "organizationui.h"
#include "ui_organizationui.h"
#include "orgdialog.h"
extern QString reader;
OrganizationUI::OrganizationUI(QWidget *parent,QTcpSocket* sr,QString name) :
    QWidget(parent),
    ui(new Ui::OrganizationUI)
{
    ui->setupUi(this);
    socket=sr;
    ui->name->setText(name);
}

OrganizationUI::~OrganizationUI()
{
    delete ui;
}

void OrganizationUI::on_pushButton_clicked()
{
    QString name=ui->name->text();
    OrgDialog* window = new OrgDialog(this,name);
    reader = "OrgDialog";
    window->show();

}

