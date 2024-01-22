#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QLineEdit>
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
    connect(socket,SIGNAL(readyRead()),this,SLOT());
}
void MainWindow::on_run_server_clicked()
{

    QHostAddress address(ui->address->text());
    int port=ui->Port->text().toInt();
    if(!server->listen(address,port))
    {exit(1);}
    connect(server,SIGNAL(newConnection()),this,SLOT(handleNewConnection()));
}

