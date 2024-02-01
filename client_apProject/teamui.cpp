#include "teamui.h"
#include "ui_teamui.h"
#include "teamdialog.h"
teamui::teamui(QWidget *parent,QTcpSocket* sr,QString namet,QString nameo) :
    QWidget(parent),
    ui(new Ui::teamui)
{
    ui->setupUi(this);
    socket = sr;
    ui->teamname->setText(namet);
    orgname=nameo;
}

teamui::~teamui()
{
    delete ui;
}





void teamui::on_openteam_clicked()
{
    QString name=ui->teamname->text();
    teamdialog* window = new teamdialog(this,name,orgname);

    window->show();
}

