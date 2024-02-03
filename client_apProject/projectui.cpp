#include "projectui.h"
#include "ui_projectui.h"
#include "prodialog.h"
extern QString reader;
projectui::projectui(QWidget *parent,QTcpSocket* sr,QString namep,QString nameo) :
    QWidget(parent),
    ui(new Ui::projectui)
{
    ui->setupUi(this);
    socket = sr;
    ui->projectname->setText(namep);
    orgname=nameo;
}

projectui::~projectui()
{
    delete ui;
}

void projectui::on_openproject_clicked()
{
    QString name=ui->projectname->text();
    prodialog* window = new prodialog(this,name,orgname);
    reader = "ProDialog";
    QString command = "OPENPRO ";
    socket->write(command.toUtf8());
    socket->flush();
    window->show();
}

