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
        name = buffer;
        stream>>buffer;
        email = buffer;
        stream>>buffer;
        security = buffer;
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
            socket->write("4040");
            return;
        }
    }




}
