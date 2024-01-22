#include "forgotpassworddialog.h"
#include "ui_forgotpassworddialog.h"
#include "security.h"
#include <QMessageBox>
#include <QIcon>
#define HIDED_EYE ":/eye/hided.png"
#define UNHIDED_EYE ":/eye/unhided.png"

forgotPasswordDialog::forgotPasswordDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::forgotPasswordDialog)
{
    ui->setupUi(this);
    ui->emailLineEdit->setFocus();
}

forgotPasswordDialog::~forgotPasswordDialog()
{
    delete ui;
}

void forgotPasswordDialog::on_ok_cancel_buttonBox_accepted()
{
    if ((ui->emailLineEdit->text().isEmpty()) || (ui->newPasswordLineEdit->text().isEmpty()) || (ui->securityQuestionLineEdit->text().isEmpty())) {
        QMessageBox::critical(this, "Data not complete", "Please fill out the data completely!");
        return;
    }
    // avl check knm hmchin emaili vojud dre ya na. momkene taraf asln account ndashte bashe forget password ro alaki zde...
    // age email vojud dasht, check kn soal security ro dorost jvb dde ya n.
    // age ok bood, new password ro check kon strong hst ya na... age nbood warning
    // age ok shod dige password jadid hash kon toye file save kn jaye qabli...
}

void forgotPasswordDialog::on_eyeButton_clicked()
{
    if (ui->eyeButton->isChecked()) {
        ui->newPasswordLineEdit->setEchoMode(QLineEdit::Normal);
        ui->eyeButton->setIcon(QIcon(HIDED_EYE));
    }
    else {
        ui->newPasswordLineEdit->setEchoMode(QLineEdit::Password);
        ui->eyeButton->setIcon(QIcon(UNHIDED_EYE));
    }
}

