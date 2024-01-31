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
    // 4011 User Already Exists
    // 2000 User created
    // 2001 User login
    // 4010 wrong password
    // 4040 username not found
    QString response = socket->readAll();
    qDebug() << response;
    if(response=="2001" )
    {
        Dashboard* window = new Dashboard(nullptr,socket,username);
        window->show();
        disconnect(connection);
        this->close();
    }
    else if(response=="4010")
    {
        QMessageBox::critical(this,"Wrong password","your password is incorrect");
    }
    else if(response=="2000"){
        emit success_signup();
    }
    else if(response=="4011")
    {
        emit username_taken();
    }
    else if(response=="4040")
    {
        QMessageBox::warning(this,"Warning","Username not found.");
    }

}

void MainWindow::on_SignInButton_clicked()

{
    QString usrname = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    QString command = "SIGNIN "+usrname +" "+ password+"\n";
    username = usrname;
    socket->write(command.toUtf8());
    socket->flush();
}
void MainWindow::on_SignUpButton_clicked()
{
    SignUpDialog *signUpPage = new SignUpDialog(this);
    connect(signUpPage,SIGNAL(SignUpRequest(QString,QString,QString,QString,QString)),
            this,SLOT(signUpRequest(QString,QString,QString,QString,QString)));
    connect(this,SIGNAL(success_signup()),signUpPage,SLOT(signup_success()));
    connect(this,SIGNAL(username_taken()),signUpPage,SLOT(username_taken()));
    signUpPage->show();

}
void MainWindow::signUpRequest(QString username,QString password,QString name,QString email,QString security)
{
    QString command = "SIGNUP " +username +" ";
    command+=password+" { "+name+" } " + email + " { " + security+" } \n";
    socket->write(command.toUtf8());
    socket->flush();
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

