#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QLineEdit>
#include <QTextStream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    server = new QTcpServer(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleNewConnection()
{
    QTcpSocket* socket = server->nextPendingConnection();
    connect(socket,SIGNAL(readyRead()),this,SLOT(read_data()));
}
void MainWindow::on_run_server_clicked()
{

    QHostAddress address(ui->address->text());
    int port=ui->Port->text().toInt();
    if(!server->listen(address,port))
    {exit(1);}
    connect(server,SIGNAL(newConnection()),this,SLOT(handleNewConnection()));
}
void MainWindow::read_data()
{
    // 4011 User Already Exists
    // 2000 User created
    // 2001 User login
    // 4010 wrong password
    // 4040 username not found
    // 2002 New organization creat
    // 4041 organization not found
    // 2003 organization edited successfully
    // 4042 user not found
    QTcpSocket* socket = (QTcpSocket*)sender();
    QString input = socket->readAll();
    qDebug() << input;
    QTextStream stream(&input);
    QString buffer;
    stream>>buffer;
    if(buffer=="SIGNUP")
    {
        QString username,password,email,name,security;
        stream>>buffer;
        username = buffer;
        stream>>buffer;
        password = buffer;
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
        email = buffer;
        buffer=="{";
        stream>>buffer;
        while(buffer!="}")
        {
            security+=buffer+" ";
            stream>>buffer;
        }
        security.removeLast();
        for(auto user:users)
        {
            if(username==user->Username())
            {
                socket->write("4011");
                return;
            }
        }
        User* user = new User(username,password,name,email,security);
        users.append(user);
        socket->write("2000");
        return;


    }
    else if(buffer=="SIGNIN"){
        QString username,password;
        stream>>buffer;
        username = buffer;
        stream>>buffer;
        password = buffer;
        for(auto user:users){
            if(username==user->Username())
            {
                if(password==user->Password()){
                    socket->write("2001");
                    return;
                }
                socket->write("4010");
                return;
            }
        }
        socket->write("4040");
        return;
    }

    else if(buffer=="NEWORG")
    {
        QString username,name,des;
        stream>>buffer;
        username = buffer;
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
            des+=buffer+" ";
            stream>>buffer;
        }
        des.removeLast();
        qDebug() << name;
        qDebug() << des;
        for(auto user:users){
            if(username==user->Username())
            {
                organization* org=new organization(name,des);
                user->Organizations().append(org);
                org->setMembers(user->getID(),Role::Owner);
                socket->write("2002 " +name.toUtf8());
                return;
            }

    }
    }

    else if (buffer == "EDITORG "){
        QString new_name, new_description;
        QString old_name, old_description; // label ha ro dorost knm
        QString name, description;
        stream>>buffer;
        name = buffer;
        stream>>buffer;
        description = buffer;
        for (auto user : users) {
            QList<organization*> userOrganizations = user->Organizations();

            for (auto org : userOrganizations) {
                if (org->name == name && org->description == description) {
                    // chejuri check knm in user owner hst ya n? vase role getter bznm

                    org->edit_organization(new_name, new_description);
                    socket->write("2003");
                    return;
                }
            }
        }
        socket->write("4041"); // not found
        return;
    }

    else if (buffer == "DELETEORG "){
        QString name, description;
        stream>>buffer;
        name = buffer;
        stream>>buffer;
        description = buffer;
        for (auto user : users) {
            QList<organization*> &userOrganizations = user->Organizations();

            userOrganizations.removeAll([name, description](organization* org) {
               return org->name == name && org->description == description;
            }); // inja hm socket byd chizi write kne??
        }
        socket->write("4041");
        return;
    }

    else if (buffer == "DELETEUSER"){
        QString id, role;
        stream>>buffer;
        id = buffer;
        stream>>buffer;
        role = buffer;
        // begardm hmchin useri hst ya n . age hst deletesh knm az toye member haye organization
        // toye class organization ye QMap<int, Role> members(); hst toye in mitunm begardm
        /*
        auto iterator = members().find(id);
        if (iterator != members().end()){
            members().erase(iterator);
        }
        else
            socket->write("4042");
        */
        // esm in organization byd az toye QList in user khas hm pak beshe
        for (auto user: users){
            if (user->getID() == id.toInt()){
                // check kon bebin role esh toye in organization == role hst ya n.
                // age bood => organization ro az toye list in user pak kn.
            }
        }

    }

    else if (buffer == "ADDOREDITUSER"){
        QString id, role;
        stream>>buffer;
        id = buffer;
        stream>>buffer;
        role = buffer;
        // byd avl bbinm in dre add mikne ya edit(in user vojud dre ya n)
    }
}
