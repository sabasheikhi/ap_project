#include "dashboard.h"
#include "ui_dashboard.h"

Dashboard::Dashboard(QWidget *parent,QTcpSocket* st)
    : QWidget(parent)
    , ui(new Ui::Dashboard)
{
    ui->setupUi(this);
    socket=st;

}

Dashboard::~Dashboard()
{
    delete ui;
}
