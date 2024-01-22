#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "security.h"
#include <QMessageBox>
#include <QIcon>
#include "signupdialog.h"
#include "forgotpassworddialog.h"
#define HIDED_EYE ":/eye/hided.png"
#define UNHIDED_EYE ":/eye/unhided.png"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->usernameLineEdit->setFocus();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_SignInButton_clicked()
{
    // az toye file check kn in username , password valid hst ya na... if not => warning
    // hash password byd ba hash password toye file compare beshe...
    // else => enter dashboard
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

