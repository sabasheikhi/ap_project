#include "orgdialog.h"
#include "ui_orgdialog.h"
#include "editorganizationclass.h"

OrgDialog::OrgDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OrgDialog)
{
    ui->setupUi(this);
    //ui->nameLabel = name; // name , description organization ro inja az koja drm?
    //ui->descriptionLabel = description;
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
    // nameLabel , descriptionLabel bayad avaz beshand esmaye jdid tooshun neveshte beshe
    // (az avl byd name , description tushun mibood v alan avaz mishod...)
}


void OrgDialog::on_deleteorg_clicked()
{
    QString name = ui->nameLabel;
    QString description = ui->descriptionLabel;
    QString command = "DELETEORG " + name + " " + description + "\n";
    socket->write(command.toUtf8());
    socket->flush();
    // chejuri organizationUi ba in name toye dahsboard baste beshe?
    this->close();
}


void OrgDialog::on_delete_user_clicked()
{
    QString id = ui->idLineEdit;
    QString role = ui->roleComboBox->currentText();
    QString command = "DELETEUSER " + id + " " + role + "\n";
    socket->write(command.toUtf8());
    socket->flush();
}


void OrgDialog::on_addOrEditUser_clicked()
{
    QString id = ui->idLineEdit;
    QString role = ui->roleComboBox->currentText();
    QString command = "ADDOREDITUSER" + id + " " + role + "\n";
    socket->write(command.toUtf8());
    socket->flush();
}

