#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "security.h"
#include <QMessageBox>
#include <QIcon>
#include "signupdialog.h"
#include "forgotpassworddialog.h"
#define HIDED_EYE ":/eye/hided.png"
#define UNHIDED_EYE ":/eye/unhided.png"
#include "dashboard.h"
#include <QCloseEvent>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    socket = new QTcpSocket();
    QHostAddress address("127.0.0.1");
    int port = 1111;
    socket->connectToHost(address,port);
    if(!socket->waitForConnected(1000))
    {
        qDebug() << "failed to connect to the host";
        exit(1);
    }

    connection = connect(socket,SIGNAL(readyRead()),this,SLOT(handleWrite()));
    ui->usernameLineEdit->setFocus();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleWrite()
{
    QString response = socket->readAll();
    qDebug() << response;
    if(response=="200" )
    {
        Dashboard* window = new Dashboard(nullptr,socket);
        window->show();
        disconnect(connection);
        this->close();
    }
    else if(response=="401")
    {
        QMessageBox::critical(this,"Wrong password","your password is incorrect");
    }
}

void MainWindow::on_SignInButton_clicked()

{
     QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();
    QString command = "signIn "+username +" "+ password;
    socket->write(command.toUtf8());

}


void MainWindow::on_SignUpButton_clicked()
{
    SignUpDialog *signUpPage = new SignUpDialog(this);
    signUpPage->show();
}


void MainWindow::on_forgotPasswordButton_clicked()
{
    forgotPasswordDialog *forgotPasswordPage = new forgotPasswordDialog(this);
    forgotPasswordPage->show();
}


void MainWindow::on_usernameLineEdit_textChanged(const QString &arg1)
{
    if ((!ui->usernameLineEdit->text().isEmpty()) && (!ui->passwordLineEdit->text().isEmpty()))
        ui->SignInButton->setEnabled(true);
}


void MainWindow::on_passwordLineEdit_textChanged(const QString &arg1)
{
    if ((!ui->usernameLineEdit->text().isEmpty()) && (!ui->passwordLineEdit->text().isEmpty()))
        ui->SignInButton->setEnabled(true);
}

void MainWindow::on_eyeButton_clicked()
{
    if (ui->eyeButton->isChecked()) {
        ui->passwordLineEdit->setEchoMode(QLineEdit::Normal);
        ui->eyeButton->setIcon(QIcon(HIDED_EYE));
    }
    else {
        ui->passwordLineEdit->setEchoMode(QLineEdit::Password);
        ui->eyeButton->setIcon(QIcon(UNHIDED_EYE));
    }
}

