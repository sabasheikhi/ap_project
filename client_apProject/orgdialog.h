#ifndef ORGDIALOG_H
#define ORGDIALOG_H

#include <QWidget>
#include <QTcpSocket>
extern QString username;
extern QTcpSocket* socket;
namespace Ui {
class OrgDialog;
}

class OrgDialog : public QWidget
{
    Q_OBJECT
    QString name_;

public:
    explicit OrgDialog(QWidget *parent,QString name_);
    ~OrgDialog();

private slots:
    void handleWrite();
    void request_edit_organization(QString,QString);

    void on_deleteorg_clicked();

    void on_editorg_clicked();

    void on_delete_user_clicked();

    void on_addOrEditUser_clicked();

    void on_addproject_clicked();

    void on_addteam_clicked();

signals:
   // void removeOrganizationUi(QString name);
    void closeeditOrg();

private:
    Ui::OrgDialog *ui;
};

#endif // ORGDIALOG_H
