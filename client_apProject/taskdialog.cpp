#include "taskdialog.h"
#include "ui_taskdialog.h"
#include "edittask.h"
#include "mainwindow.h"

extern QTcpSocket* socket;
extern QString username;
extern QString reader;
taskdialog::taskdialog(QWidget *parent,QString tasknam,QString orgnam,QString teamnam,QString pronam) :
    QWidget(parent),
    ui(new Ui::taskdialog), replyMessage(new QLabel(this))
{
    ui->setupUi(this);
    this->setWindowFlag(Qt::Window);
    this->setAttribute(Qt::WA_DeleteOnClose);
    reader = "TaskDialog";
    orgname=orgnam;
    proname=pronam;
    teamname=teamnam;
    ui->nameLabel->setText(tasknam);
    connect(socket,SIGNAL(readyRead()),this,SLOT(handleWrite()));
    QString command = "FILLABELS " +username + " { "+tasknam +" }\n";
    socket->write(command.toUtf8());
    socket->flush();
    ui->scrollArea->setWidget(ui->messageList);
    ui->messageList->setWordWrap(false);
    ui->messageList->setWordWrap(QTextOption::WordWrap);
    connect(ui->messageList, &QListWidget::itemClicked, this, &taskdialog::onMessageClicked);
    replyMessage->hide();
}

taskdialog::~taskdialog()
{
    reader = "OrgDialog";
    delete ui;
}
void taskdialog::handleWrite()
{
    if(reader!="TaskDialog")return;
    qDebug() << "reading in task dialog";
    QString string = socket->readAll();
    QTextStream stream(&string);
    QString buffer;
    stream>>buffer;
    if(buffer=="TASKDIALOG")
    {
        QString userpro ,deadline,userdeadline ,userduty,desc;
        stream>>buffer;
        if(buffer=="{"){

            while(true)
            {
                stream>>buffer;
                if(buffer=="}")
                {
                    break;
                }
                userdeadline+=buffer+" ";
            }
            userdeadline.removeLast();
        }
        stream>>buffer;
        if(buffer=="{"){

            while(true)
            {
                stream>>buffer;
                if(buffer=="}")
                {
                    break;
                }
                deadline+=buffer+" ";
            }
            deadline.removeLast();
        }
        stream>>buffer;
        if(buffer=="{"){

            while(true)
            {
                stream>>buffer;
                if(buffer=="}")
                {
                    break;
                }
                userpro+=buffer+" ";
            }
            userpro.removeLast();
        }
        stream>>buffer;
        if(buffer=="{"){

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
        }
            stream>>buffer;
            if(buffer=="{"){

                while(true)
                {
                    stream>>buffer;
                    if(buffer=="}")
                    {
                        break;
                    }
                    userduty+=buffer+" ";
                }
                userduty.removeLast();
            }
            ui->descriptionLabel->setText(desc);
            ui->userproperity->setText(userpro);
            ui->des_of_usertask->setText(userduty);
            ui->deadline->setText(deadline);
            ui->deadline_user->setText(userdeadline);

    }
}
void taskdialog::on_changestatus_clicked()
{
    QString tasksta=ui->taskstatus->placeholderText();
    QString tasknam=ui->nameLabel->text();
    QString command = "CHANGETASKSTATUS " +username +" "+tasksta + " { "+orgname +" }{ "+tasknam +" }\n";
    socket->write(command.toUtf8());
    socket->flush();
}


void taskdialog::on_deletetask_clicked()
{
    QString taskname=ui->nameLabel->text();
    QString command = "DELETETASK " +username +" { "+taskname +" } { "+orgname +" } \n";
    reader = "OrgDialog";
    this->close();
    socket->write(command.toUtf8());
    socket->flush();
}

void taskdialog::on_edittask_clicked()
{
    edittask* window= new edittask(this);
    connect(this,SIGNAL(closeedittask()),window,SLOT(close()));
    connect(window,SIGNAL(editask(QString,QString,QString)),this,SLOT(request_edit(QString,QString,QString)));
    window->show();
}

void taskdialog::request_edit(QString name,QString des,QString team)
{
    QString taskname=ui->nameLabel->text();
    QString command = "EDITSAK " +username +" { "+taskname +" } { "+orgname +" } { "+name +" }{ "+team +" } { " + des +" }\n";
    socket->write(command.toUtf8());
    socket->flush();
}


void taskdialog::on_addtask_clicked()
{
    QString taskname=ui->nameLabel->text();
    QString user=ui->nameu->text();
    QString duty=ui->dutyu->toPlainText();
    QString year = ui->year_2->placeholderText();
    QString month = ui->month_2->placeholderText();
    QString day = ui->day_2->placeholderText();
    QString deadline = year + "-" + month + "-" + day;
    QString pro=ui->combopriority->placeholderText();
    QString command = "ADDUSERTASK " +username +" "+user +" { "+taskname +" } { "+orgname +" } { "+deadline +" } { "+duty +" } { "+pro +" }\n";
    socket->write(command.toUtf8());
    socket->flush();
}

void taskdialog::onMessageClicked(QListWidgetItem *item)
{
    QString itemText = item->text();
    if (itemText.startsWith("Reply to: ")){
        int starIndex = itemText.indexOf("*");
        itemText.remove(0, starIndex+2);
    }
    replyMessage->setText("Reply to: " + itemText + "*\n");
}

void taskdialog::on_sendButton_clicked()
{
    MainWindow sampleObj;
    QString userName = sampleObj.getUserName();
    ui->messageList->addItem(replyMessage->text() + userName + ": " + ui->sendLineEdit->text());
    ui->sendLineEdit->clear();
    replyMessage->clear();
}

