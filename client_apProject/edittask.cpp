#include "edittask.h"
#include "ui_edittask.h"

edittask::edittask(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::edittask)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);
    this->setWindowFlag(Qt::Window);
    ui->nameLineEdit->setText("");
    ui->descriptionLineEdit->setText("");
}

edittask::~edittask()
{
    delete ui;
}

void edittask::on_editButton_clicked()
{
    if((!ui->nameLineEdit->text().isEmpty())){
        emit editask(ui->nameLineEdit->text(),ui->descriptionLineEdit->toPlainText(),ui->teamname->toPlainText());}
}

