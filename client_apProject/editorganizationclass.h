#ifndef EDITORGANIZATIONCLASS_H
#define EDITORGANIZATIONCLASS_H

#include <QDialog>
#include <QTcpSocket>
extern QString username;
namespace Ui {
class editOrganizationClass;
}

class editOrganizationClass : public QDialog
{
    Q_OBJECT
    QTcpSocket* socket;
    QString name;

public:
    explicit editOrganizationClass(QWidget *parent);
    ~editOrganizationClass();

private slots:
    void on_editButton_clicked();
signals:
    void editOrganization(QString name,QString des);
private:
    Ui::editOrganizationClass *ui;
};

#endif // EDITORGANIZATIONCLASS_H
