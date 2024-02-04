#include "orgdialog.h"
#include "ui_orgdialog.h"
#include "editorganizationclass.h"
#include "teamui.h"
#include "taskui.h"
#include "projectui.h"
#include <QMessageBox>
#include <QBoxLayout>

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

    if(reader!="OrgDialog") return;

    qDebug() << "reading in org dialog";
    QString input = socket->readAll();
    for(auto string:input.split("\n"))
    {
    qDebug() << string;
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
    if(buffer=="DES")
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
        add_pro(namep);
    }
    if(buffer=="2005")
    {
        QString namet=ui->team_name->text();
        add_team(namet);
    }
    if(buffer=="2006")
    {
        QString nametask=stream.readAll();
        add_task(nametask);
    }
    else if(buffer=="4045")
    {
        QMessageBox::critical(this,"Wrong Task","You dont have access to the created task ");
    }
    else if(buffer=="4041")
    {
        QMessageBox::critical(this,"Wrong Organization","You dont have access to the created organization ");
    }
    else if(buffer=="4042")
    {
        QMessageBox::warning(this,"Warning" , "Username not found");
    }
    else if(buffer=="2007")
    {
        QMessageBox::information(this,"Successful" , "User task added successfully");
    }
    else if(buffer=="4046"){
        QMessageBox::warning(this,"Warning" , "this Priority already exists");
    }
    else if(buffer=="1234"){
        QMessageBox::warning(this,"Warning" , "You do not have access to this part because of your role");
    }
    else if(buffer=="2009")
    {
        QMessageBox::information(this,"Successful" , "Task edit successfully");
    }
    else if(buffer=="2008")
    {
        QMessageBox::information(this,"Successful" , "Task delete successfully");
    }
    else if(buffer=="2010")
    {
        QMessageBox::information(this,"Successful" , "Task status change successfully");
    }
    else if(buffer=="4012")
    {
        QMessageBox::critical(this,"Change information","You are not the owner. so you cant make any changes.");
    }
    else if(buffer=="4045")
    {
        QMessageBox::critical(this,"Wrong Task","You dont have access to the created task ");
    }
    else if(buffer=="4041")
    {
        QMessageBox::critical(this,"Wrong Organization","You dont have access to the created organization ");
    }
    else if(buffer=="4042")
    {
        QMessageBox::warning(this,"Warning" , "Username not found");
    }
    else if(buffer=="4042")
    {
        QMessageBox::warning(this,"Warning" , "Team not found");
    }

    else if(buffer=="1234"){
        QMessageBox::warning(this,"Warning" , "You do not have access to this part because of your role");
    }
    else if(buffer=="2009")
    {
        QMessageBox::information(this,"Successful" , "Task edit successfully");
    }
    else if(buffer=="2008")
    {
        QMessageBox::information(this,"Successful" , "Team delete successfully");
    }
    else if(buffer=="2011")
    {
        QMessageBox::information(this,"Successful" , "User remove successfully");
    }
    else if(buffer=="2012")
    {
        QMessageBox::information(this,"Successful" , "User added successfully");
    }
    if(buffer=="LISTPRO")
    {
        int c = ui->prolay->count();
        QList<QLayoutItem*> items;
        for(int i = 0;i<c;i++)
       {
            auto item=ui->prolay->itemAt(i);

            qDebug() << item->widget()->objectName() ;
           items.append(item);
      }
        qDebug() <<"items" << items;
       for(auto item:items)
        {
            ui->prolay->removeItem(item);
            delete item->widget();
        }
        while(!stream.atEnd())
        {

            stream>>buffer;
            if(buffer=="{")
            {
                QString name;
                while(true)
                {
                    stream>>buffer;
                    if(buffer=="}")
                    {
                        break;
                    }
                    name+=buffer+" ";
                }
                name.removeLast();
                add_pro(name);
            }
        }
    }

    if(buffer=="LISTTEAM")
    {
        int c = ui->teamlay->count();
    QList<QLayoutItem*> items;
    for(int i = 0;i<c;i++)
    {
        auto item=ui->teamlay->itemAt(i);
        items.append(item);
    }
    qDebug() <<"items" << items;
    for(auto item:items)
    {
        ui->teamlay->removeItem(item);
        delete item->widget();
    }
    while(!stream.atEnd())
    {

        stream>>buffer;
        if(buffer=="{")
        {
            QString name;
            while(true)
            {
                stream>>buffer;
                if(buffer=="}")
                {
                    break;
                }
                name+=buffer+" ";
            }
            name.removeLast();
            add_team(name);
        }
    }
    }
    if(buffer=="UNARCIVE")
    {
   int c = ui->tasklay->count();
   QList<QLayoutItem*> items;
   for(int i = 0;i<c;i++)
   {
    auto item=ui->tasklay->itemAt(i);
    items.append(item);
   }
   qDebug() <<"items" << items;
   for(auto item:items)
   {
    ui->tasklay->removeItem(item);
    delete item->widget();
   }
   while(!stream.atEnd())
   {

    stream>>buffer;
    if(buffer=="{")
    {
    QString name;
    while(true)
    {
        stream>>buffer;
        if(buffer=="}")
        {
            break;
        }
        name+=buffer+" ";
    }
    name.removeLast();
    add_task(name);
    }
   }
    }
    if(buffer=="ARCIVE")
    {
   int c = ui->tasklay->count();
   QList<QLayoutItem*> items;
   for(int i = 0;i<c;i++)
   {
    auto item=ui->tasklay->itemAt(i);
    items.append(item);
   }
   qDebug() <<"items" << items;
   for(auto item:items)
   {
    ui->tasklay->removeItem(item);
    delete item->widget();
   }
   while(!stream.atEnd())
   {

    stream>>buffer;
    if(buffer=="{")
    {
    QString name;
    while(true)
    {
        stream>>buffer;
        if(buffer=="}")
        {
            break;
        }
        name+=buffer+" ";
    }
    name.removeLast();
    add_task(name);
    }
   }
    }
    }
}
void OrgDialog::add_team(QString name)
{
    teamui* b=new teamui(this,socket,name,ui->nameLabel->text());
    b->setFixedSize(194,139);
    ui->teamlay->addWidget(b,0,Qt::AlignLeft);

}
void OrgDialog::add_task(QString name)
{
    QString teamname=ui->teamname->text();
    QString namep=ui->projectname->text();
    taskui* b=new taskui(this,socket,teamname,ui->nameLabel->text(),name,namep);
    b->setFixedSize(181,181);
    ui->tasklay->addWidget(b,0,Qt::AlignLeft);


}
void OrgDialog::add_pro(QString name)
{

    projectui* b=new projectui(this,socket,name,ui->nameLabel->text());
    b->setFixedSize(210,147);
    ui->prolay->addWidget(b,0,Qt::AlignLeft);
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





void OrgDialog::on_addteask_clicked()
{
     if (!ui->taskname->text().isEmpty() && !ui->projectname->text().isEmpty() && !ui->teamname->text().isEmpty() && !ui->taskdes->toPlainText().isEmpty()) {
        QString nametask=ui->taskname->text();
        QString namep=ui->projectname->text();
        QString teamname=ui->teamname->text();
        QString dest = ui->taskdes->toPlainText();
        QString orgname=ui->nameLabel->text();
        QString year = ui->year->currentText();
        QString month = ui->month->currentText();
        QString day = ui->day->currentText();
        QString deadline = year + "-" + month + "-" + day;
        QString command = "NEWTASK " +username +" { "+deadline +" } { "+orgname +" } { "+nametask +" } { "+namep +" } { "+teamname +" } { " + dest +" }\n";
        socket->write(command.toUtf8());
        socket->flush();
     }
     else {

        QMessageBox::warning(this, "Warning", "Please fill all lines.");
     }

}





void OrgDialog::on_setarchive_clicked()
{
      QString orgname=ui->nameLabel->text();
    QString task=ui->namearchive->text();
     QString command = "ARCHIV " +username +" { "+ task +" } { "+orgname +" }\n";
     socket->write(command.toUtf8());
     socket->flush();

}


void OrgDialog::on_setunarchive_clicked()
{
      QString orgname=ui->nameLabel->text();
     QString task=ui->namearchive->text();
     QString command = "UNARCHIV " +username +" { "+task +" } { "+orgname +" }\n";
     socket->write(command.toUtf8());
     socket->flush();

}



void OrgDialog::on_showarchives_clicked()
{


}


void OrgDialog::on_hidearchives_clicked()
{

}


void OrgDialog::on_sortButton_clicked()
{
    QString orgName = ui->nameLabel->text();
    QString filter;
    if (ui->filterComboBox->currentText() == "Alphabetical Order")
       filter = "ALPHA";
    else
       filter = "ID";
    QString command = "FILTERTEAMANDPROJECT " + filter + " " + username + " " + orgName + "\n"; // username ro saba dare inja!
    socket->write(command.toUtf8());
    socket->flush();
}

