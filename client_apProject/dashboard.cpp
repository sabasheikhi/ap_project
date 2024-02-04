#include "dashboard.h"
#include "ui_dashboard.h"
#include "addorganizationclass.h"
#include "organizationui.h"
QString username;
QString reader="Dashboard";
QTcpSocket* socket;
Dashboard::Dashboard(QWidget *parent,QTcpSocket* st,QString us)
    : QWidget(parent)
    , ui(new Ui::Dashboard)
{
    ui->setupUi(this);
    socket=st;
    connect(socket,SIGNAL(readyRead()),this,SLOT(handleWrite()));
    row = 0;
    column =0;
    username = us;
    ui->addButton->setFixedSize(230,162);
    ui->gridLayout->setAlignment(ui->gridLayout->layout(),Qt::AlignLeft|Qt::AlignTop);
    ui->gridLayout->addWidget(ui->addButton,0,0,Qt::AlignLeft|Qt::AlignTop);

}
void Dashboard::fix()
{
    int c = ui->gridLayout->count();
    qDebug() << "c"<<c;
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
    OrganizationUI* b=new OrganizationUI(this,socket,name);
    b->setFixedSize(230,162);
    ui->gridLayout->addWidget(b,0,0,Qt::AlignLeft|Qt::AlignTop);
}
void Dashboard::request_new_organization(QString name,QString des)
{
    QString command = "NEWORG " +username +" { "+name +" } { " + des +" }\n";
    socket->write(command.toUtf8());
    socket->flush();
}
void Dashboard::on_addButton_clicked()
{
    AddOrganizationClass* window = new AddOrganizationClass(this);
    connect(this,SIGNAL(closeAddOrg()),window,SLOT(close()));
    connect(window,SIGNAL(addOrganization(QString,QString)),this,SLOT(request_new_organization(QString,QString)));
    window->exec();
}
void Dashboard::handleWrite()
{
    if(reader != "Dashboard") {return;}
    qDebug() << "reading in dashboard";
    QString input = socket->readAll();
    qDebug() << input;
    QTextStream stream(&input);
    QString buffer;
    stream>>buffer;
    if(buffer=="2002")
    {
        new_org(stream.readAll());
        emit closeAddOrg();
    }
    else if(buffer=="LISTORG")
    {
        int c = ui->gridLayout->count();
        QList<QLayoutItem*> items;
        QLayoutItem* button;
        for(int i = 0;i<c;i++)
        {
            auto item = ui->gridLayout->itemAt(i);
            qDebug() << item->widget()->objectName();
            if(item->widget()->objectName()=="addButton")
            {
                button =item;
                continue;
            }
            items.append(item);
        }
        qDebug() <<"items" << items;
        for(auto item:items)
        {
            ui->gridLayout->removeItem(item);
            delete item->widget();
        }
        ui->gridLayout->removeItem(button);
        ui->addButton->show();
        ui->gridLayout->addWidget(ui->addButton,0,0,Qt::AlignLeft|Qt::AlignTop);
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
                new_org(name);
            }
        }
    }


}

void Dashboard::on_sortButton_clicked()
{
    QString filter;
    if (ui->filterComboBox->currentText() == "Alphabetical Order")
        filter = "ALPHA";
    else
        filter = "ID";
    QString command = "FILTERORG " + filter + " " + username + "\n"; // username ro to dari inja! okeyesh kn...
    socket->write(command.toUtf8());
    socket->flush();
}

