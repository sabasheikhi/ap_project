#include "editteam.h"
#include "ui_editteam.h"

editteam::editteam(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::editteam)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);
    this->setWindowFlag(Qt::Window);
    ui->nameLineEdit->setText("");
    ui->descriptionLineEdit->setText("");
}

editteam::~editteam()
{
    delete ui;
}

void editteam::on_editButton_clicked()
{
    if(!ui->nameLineEdit->text().isEmpty()){
        emit editeam(ui->nameLineEdit->text(),ui->descriptionLineEdit->toPlainText());}
}

