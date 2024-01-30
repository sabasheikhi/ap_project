#ifndef ADDORGANIZATIONCLASS_H
#define ADDORGANIZATIONCLASS_H

#include <QDialog>

namespace Ui {
class AddOrganizationClass;
}

class AddOrganizationClass : public QDialog
{
    Q_OBJECT

public:
    explicit AddOrganizationClass(QWidget *parent = nullptr);
    ~AddOrganizationClass();

private slots:
    void on_addButton_clicked();
signals:
    void addOrganization(QString name,QString des);
private:
    QString username;
    Ui::AddOrganizationClass *ui;
};

#endif // ADDORGANIZATIONCLASS_H
