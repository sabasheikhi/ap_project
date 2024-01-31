#ifndef EDITORGANIZATIONCLASS_H
#define EDITORGANIZATIONCLASS_H

#include <QDialog>
#include <QTcpSocket>

namespace Ui {
class editOrganizationClass;
}

class editOrganizationClass : public QDialog
{
    Q_OBJECT
    QTcpSocket* socket;

public:
    explicit editOrganizationClass(QWidget *parent = nullptr);
    ~editOrganizationClass();

private slots:
    void on_editButton_clicked();

private:
    Ui::editOrganizationClass *ui;
};

#endif // EDITORGANIZATIONCLASS_H
