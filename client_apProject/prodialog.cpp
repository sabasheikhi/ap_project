#include "prodialog.h"
#include "ui_prodialog.h"
#include "editproject.h"
#include <QMessageBox>
extern QTcpSocket* socket;
extern QString username;
extern QString reader;
prodialog::prodialog(QWidget *parent,QString name_,QString nemo) :
    QWidget(parent),
    ui(new Ui::prodialog)
{
    this->setWindowFlag(Qt::Window);
    this->setAttribute(Qt::WA_DeleteOnClose);
    ui->setupUi(this);
    orgname=nemo;
    ui->nameLabel->setText(name_);
    connect(socket,SIGNAL(readyRead()),this,SLOT(handleWrite()));
    QString command = "DESCRIPTIONPRO " +username + " { "+name_ +" }\n";
    socket->write(command.toUtf8());
    socket->flush();

}

prodialog::~prodialog()
{
    reader = "OrgDialog";
    delete ui;
}
void prodialog::handleWrite()
{
    if(reader!="ProDialog") return;
    qDebug() << "reading in pro dialog";
    QString string = socket->readAll();
    QTextStream stream(&string);
    QString buffer;
    stream>>buffer;
    if(buffer=="DESC")
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
    else if(buffer=="STATUS")
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
    else if(buffer=="2011")
    {
        QMessageBox::information(this,"Successful" , "User remove successfully");
    }
    else if(buffer=="2012")
    {
        QMessageBox::information(this,"Successful" , "User added successfully");
    }
    else if(buffer=="PROSTATUS")
    {
        QString s;
        stream>>buffer;
        s=buffer;
        ui->currentstatus->setText(s);
    }

}

void prodialog::on_editpro_clicked()
{
    editproject* window= new editproject();
    window->show();
    connect(this,SIGNAL(closeeditpro()),window,SLOT(close()));
    connect(window,SIGNAL(editprojec(QString,QString)),this,SLOT(request_edit(QString,QString)));

}
void prodialog::request_edit(QString name,QString des)
{
    QString proname=ui->nameLabel->text();
    QString command = "EDITPRO " +username +" { "+proname +" } { "+orgname +" } { "+name +" } { " + des +" } \n";
    socket->write(command.toUtf8());
    socket->flush();

}



void prodialog::on_deletepro_clicked()
{
    QString proname=ui->nameLabel->text();
    QString command = "DELETEPRO " +username +" { "+proname +" } { "+orgname +" }\n";
    reader = "OrgDialog";
    socket->write(command.toUtf8());
    socket->flush();
    this->close();
}


void prodialog::on_addOrEditUser_clicked()
{
    QString proname=ui->nameLabel->text();
    QString username_member=ui->idLineEdit->text();
    QString role=ui->roleComboBox->placeholderText();
    QString command = "ROLEPRO " +username +" "+ username_member +" "+ role +" { "+proname +" } { "+orgname +" } \n";
    socket->write(command.toUtf8());
    socket->flush();
}


void prodialog::on_delete_user_clicked()
{
    QString member_us=ui->idLineEdit->text();
    QString proname=ui->nameLabel->text();
    QString command = "MEMBERPRO " +username +" "+member_us +" { "+proname +" } { "+orgname +" } \n";
    socket->write(command.toUtf8());
    socket->flush();

}

void prodialog::on_pushButton_clicked()
{
    QString proname=ui->nameLabel->text();
    QString value=ui->combo->placeholderText();
    QString command = "PROSTATUS " +username+" "+ value +" { "+proname +" } { "+orgname +" } \n";
    socket->write(command.toUtf8());
    socket->flush();


}

