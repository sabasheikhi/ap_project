#include "taskui.h"
#include "ui_taskui.h"
#include "taskdialog.h"
extern QString reader;
taskui::taskui(QWidget *parent,QTcpSocket* sr,QString nametea,QString nameo,QString nametas,QString namep) :
    QWidget(parent),
    ui(new Ui::taskui)
{
    ui->setupUi(this);
    ui->taskname->setText(nametas);
    ui->teamname->setText(nametea);
    ui->projectname->setText(namep);
    socket=sr;
    orgname=nameo;
    teamname=nametea;
    proname=namep;

}

taskui::~taskui()
{
    delete ui;
}

void taskui::on_pushButton_clicked()
{
    QString taskname=ui->taskname->text();
    taskdialog* window = new taskdialog(this,taskname,orgname,teamname,proname);
    window->show();
}

