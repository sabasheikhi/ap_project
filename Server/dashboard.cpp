#include "dashboard.h"
#include "ui_dashboard.h"
#define PLUS_ICON ":/pictures/plus/plusIcon.png"

Dashboard::Dashboard(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Dashboard)
{
    ui->setupUi(this);
}

Dashboard::~Dashboard()
{
    delete ui;
}
