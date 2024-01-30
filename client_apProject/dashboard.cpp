#include "dashboard.h"
#include "ui_dashboard.h"
#include "addorganizationclass.h"
#include "organizationui.h"
Dashboard::Dashboard(QWidget *parent,QTcpSocket* st,QString username)
    : QWidget(parent)
    , ui(new Ui::Dashboard)
{
    ui->setupUi(this);
    socket=st;
    row = 0;
    column =0;
    this->username = username;
    ui->addButton->setFixedSize(230,162);
    ui->gridLayout->setAlignment(ui->gridLayout->layout(),Qt::AlignLeft|Qt::AlignTop);
    ui->gridLayout->addWidget(ui->addButton,0,0,Qt::AlignLeft|Qt::AlignTop);

}
void Dashboard::fix()
{
    int c = ui->gridLayout->count();
    for(int i =c-1;i>=0;i--)
    {
        int row,column,tmp;
        auto x = ui->gridLayout->itemAt(i);
        ui->gridLayout->getItemPosition(i,&row,&column,&tmp,&tmp);
        column++;
        if(column==3){
            column=0;
            row++;
        }
        ui->gridLayout->removeItem(x);
        ui->gridLayout->addItem(x,row,column);
    }
}

Dashboard::~Dashboard()
{
    delete ui;
}

void Dashboard::on_pushButton_clicked()
{

}
void Dashboard::new_org(QString name)
{
    fix();
    OrganizationUI* b=new OrganizationUI(this,name);
    b->setFixedSize(230,162);
    ui->gridLayout->addWidget(b,0,0,Qt::AlignLeft|Qt::AlignTop);
}
void Dashboard::request_new_organization(QString name,QString des)
{
    QString command = "NEWORG "+name +" " + des +"\n";
    socket->write(command.toUtf8());
    socket->flush();
}
void Dashboard::on_addButton_clicked()
{
    AddOrganizationClass* window = new AddOrganizationClass(this);
    connect(window,SIGNAL(addOrganization(QString,QString)),this,SLOT(request_new_organization(QString,QString)));
    window->exec();
}

