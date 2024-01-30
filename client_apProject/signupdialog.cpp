#include "signupdialog.h"
#include "ui_signupdialog.h"
#include "security.h"
#include <QMessageBox>
#include <QIcon>
#define HIDED_EYE ":/eye/hided.png"
#define UNHIDED_EYE ":/eye/unhided.png"

SignUpDialog::SignUpDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SignUpDialog)
{
    ui->setupUi(this);
    ui->usernameLineEdit->setFocus();
}

SignUpDialog::~SignUpDialog()
{
    delete ui;
}

void SignUpDialog::on_ok_cancel_buttonBox_accepted()
{

    // password is ok. so now i can save username and hash of password in the file.(yadet nre ye id khas hm brash dashte bashi)
    // ye tabe bznm vase save krdn data toye file
    // then, the user should now enter dashboard.
}


void SignUpDialog::on_eyeButton_clicked()
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


void SignUpDialog::on_pushButton_clicked()
{
    if ((ui->usernameLineEdit->text().isEmpty()) || (ui->emailLineEdit->text().isEmpty()) || (ui->fullnameLineEdit->text().isEmpty()) || (ui->passwordLineEdit->text().isEmpty()) || (ui->securityQuestionLineEdit->text().isEmpty())) {
        QMessageBox::critical(this, "Data not complete", "Please fill out the data completely!");
        return;
    }
    if (!passwordIsStrong(ui->passwordLineEdit->text())) {
        QMessageBox::critical(this, "Password not strong", "Password should contain at least 8 characters, including uppercase and lowercase letters, numbers, and special characters(@, #, $).");
        return;
    }
}

