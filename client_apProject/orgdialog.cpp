#include "orgdialog.h"
#include "ui_orgdialog.h"
#include "editorganizationclass.h"
#include "teamui.h"
#include "projectui.h"
#include <QMessageBox>
extern QTcpSocket* socket;
extern QString username;
extern QString reader;
OrgDialog::OrgDialog(QWidget *parent,QString name_) :
    QWidget(parent),
    ui(new Ui::OrgDialog)
{
    this->setWindowFlag(Qt::Window);
    this->setAttribute(Qt::WA_DeleteOnClose);
    ui->setupUi(this);
    ui->nameLabel->setText(name_);
    connect(socket,SIGNAL(readyRead()),this,SLOT(handleWrite()));
    QString command = "DESCRIPTION " +username + " { "+name_ +" }\n";
    socket->write(command.toUtf8());
    socket->flush();
}

OrgDialog::~OrgDialog()
{
    delete ui;
    qDebug() << "orgdialog closing";
    reader = "Dashboard";
}

void OrgDialog::handleWrite(){
    QString string = socket->readAll();
    QTextStream stream(&string);
    QString buffer;
    stream>>buffer;
    if(buffer=="STATUS")
    {
        QString name,desc;
        stream>>buffer;
        buffer=="{";
        stream>>buffer;
        while(buffer!="}")
        {
            name+=buffer+" ";
            stream>>buffer;
        }
        name.removeLast();
        stream>>buffer;
        buffer=="{";
        stream>>buffer;
        while(buffer!="}")
        {
            desc+=buffer+" ";
            stream>>buffer;
        }
        desc.removeLast();
        ui->nameLabel->setText(name);
        ui->descriptionLabel->setText(desc);
        emit closeeditOrg();

    }
    else if(buffer=="4012")
    {
        QMessageBox::critical(this,"Change information","You are not the owner. so you cant make any changes.");
    }
    else if(buffer=="DES")
    {
        qDebug() << "des";
        stream>>buffer;
        if(buffer=="{"){
            QString desc;
            while(true)
            {
                stream>>buffer;
                if(buffer=="}")
                {
                    break;
                }
                desc+=buffer+" ";
            }
            desc.removeLast();
            qDebug() << desc;
            ui->descriptionLabel->setText(desc);
        }
    }
    if(buffer=="2004")
    {
        QString namep=ui->project_name_2->text();
        projectui* b=new projectui(this,socket,namep,ui->nameLabel->text());
        b->setFixedSize(210,147);
        ui->prolay->addWidget(b,0,Qt::AlignLeft);
    }
    if(buffer=="2005")
    {
        QString namet=ui->team_name->text();
        teamui* b=new teamui(this,socket,namet,ui->nameLabel->text());
        b->setFixedSize(194,139);
        ui->teamlay->addWidget(b,0,Qt::AlignLeft);
    }
}
void OrgDialog::on_editorg_clicked()
{   editOrganizationClass* window= new editOrganizationClass(this);
    connect(this,SIGNAL(closeeditOrg()),window,SLOT(close()));
    connect(window,SIGNAL(editOrganization(QString,QString)),this,SLOT(request_edit_organization(QString,QString)));
    window->exec();

}
void OrgDialog::request_edit_organization(QString name,QString des)
{
    QString lastname=ui->nameLabel->text();
    QString command = "EDITORG " +username +" { "+lastname +" } { "+name +" } { " + des +" }\n";
    socket->write(command.toUtf8());
    socket->flush();
}

void OrgDialog::on_deleteorg_clicked()
{
    QString lastname=ui->nameLabel->text();
    QString command = "DELETEORG " +username +" { "+lastname +" }\n";
    socket->write(command.toUtf8());
    socket->flush();
    reader = "Dashboard";
    this->close();
}


void OrgDialog::on_delete_user_clicked()
{
    QString member_us=ui->idLineEdit->text();
    QString lastname=ui->nameLabel->text();
    QString command = "MEMBERRORG " +username +" "+member_us +" { "+lastname +" }\n";
    socket->write(command.toUtf8());
    socket->flush();

}


void OrgDialog::on_addOrEditUser_clicked()
{
    QString lastname=ui->nameLabel->text();
    QString username_member=ui->idLineEdit->text();
    QString role=ui->roleComboBox->placeholderText();
    QString command = "ROLEORG " +username +" "+ username_member +" "+ role +" { "+lastname +" }\n";
    socket->write(command.toUtf8());
    socket->flush();

}


void OrgDialog::on_addproject_clicked()
{
    QString namep=ui->project_name_2->text();
    QString desp = ui->projectdes_2->toPlainText();
     QString orgname=ui->nameLabel->text();
    QString command = "NEWPRO " +username +" { "+orgname +" } { "+namep +" } { " + desp +" }\n";
     socket->write(command.toUtf8());
     socket->flush();
}


void OrgDialog::on_addteam_clicked()
{
     QString namet=ui->team_name->text();
     QString dest = ui->teamdes->toPlainText();
     QString orgname=ui->nameLabel->text();
     QString command = "NEWTEAM " +username +" { "+orgname +" } { "+namet +" } { " + dest +" }\n";
     socket->write(command.toUtf8());
     socket->flush();

}

