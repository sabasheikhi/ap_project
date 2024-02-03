#include "teamdialog.h"
#include "ui_teamdialog.h"
#include "editteam.h"
#include <QMessageBox>
extern QTcpSocket* socket;
extern QString username;
extern QString reader;
teamdialog::teamdialog(QWidget *parent,QString name_,QString nemo) :
    QWidget(parent),
    ui(new Ui::teamdialog)
{
    ui->setupUi(this);

    this->setWindowFlag(Qt::Window);
    this->setAttribute(Qt::WA_DeleteOnClose);
    orgname=nemo;
    ui->nameLabel->setText(name_);
    connect(socket,SIGNAL(readyRead()),this,SLOT(handleWrite()));
    QString command = "DESCRIPTIONTEAM " +username + " { "+name_ +" }\n";
    socket->write(command.toUtf8());
    socket->flush();
}

teamdialog::~teamdialog()
{
    reader = "OrgDialog";
    delete ui;
}


void teamdialog::handleWrite()
{
    if(reader!="TeamDialog")return;
    qDebug() << "reading in team dialog";
    QString string = socket->readAll();
    QTextStream stream(&string);
    QString buffer;
    stream>>buffer;
    if(buffer=="DESCTEAM")
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
    else if(buffer=="STATUSTEAM")
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
        emit closeeditpro();

    }
    else if(buffer=="4012")
    {
        QMessageBox::critical(this,"Change information","You are not the owner. so you cant make any changes.");
    }

}

//void teamdialog::on_editpro_clicked()
//{

//}
void teamdialog::request_edit(QString name,QString des)
{
    QString tname=ui->nameLabel->text();
    QString command = "EDITEAM " +username +" { "+tname +" } { "+orgname +" } { "+name +" } { " + des +" }\n";
    socket->write(command.toUtf8());
    socket->flush();
}





void teamdialog::on_delete_user_clicked()
{
    qDebug() << "clicked";
    QString member_us=ui->idLineEdit->text();
    QString tname=ui->nameLabel->text();
    QString command = "MEMBERTEAM " +username +" "+member_us +" { "+tname +" } { "+orgname +" }\n";
    socket->write(command.toUtf8());
    socket->flush();

}

//void teamdialog::on_deleteteam_clicked()
//{

//}


//void teamdialog::on_deleteTeamButton_clicked()
//{
//    qDebug() << "i was clicked";
//}

void teamdialog::on_editTeam_clicked()
{
        editteam* window= new editteam(this);
        connect(this,SIGNAL(closeeditpro()),window,SLOT(close()));
        connect(window,SIGNAL(editeam(QString,QString)),this,SLOT(request_edit(QString,QString)));
        window->show();

}


void teamdialog::on_deleteTeam_clicked()
{
        qDebug() << "delete team";
        QString tname=ui->nameLabel->text();
        QString command = "DELETETEAM " +username +" { "+tname +" } { "+orgname +" } \n";
        reader = "OrgDialog";
        this->close();
        socket->write(command.toUtf8());
        socket->flush();
}


void teamdialog::on_addOrEditUser_clicked()
{
        QString tname=ui->nameLabel->text();
        QString username_member=ui->idLineEdit->text();
        QString role=ui->roleComboBox->placeholderText();
        QString command = "ROLETEAM " +username +" "+ username_member +" "+ role +" { "+tname +" } { "+orgname +" }\n";
        socket->write(command.toUtf8());
        socket->flush();
}

