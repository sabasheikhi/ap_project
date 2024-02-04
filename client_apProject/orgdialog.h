#ifndef ORGDIALOG_H
#define ORGDIALOG_H

#include <QWidget>
#include <QTcpSocket>
#include <QString>

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
    void add_pro(QString);
    void add_team(QString);
    void add_task(QString);
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

    void on_addteam_2_clicked();

    void on_addteask_clicked();


    void on_setarchive_clicked();

    void on_setunarchive_clicked();

    void on_showarchives_clicked();

    void on_hidearchives_clicked();

    void on_sortButton_clicked();

signals:
   // void removeOrganizationUi(QString name);
    void closeeditOrg();

private:
    Ui::OrgDialog *ui;
};

#endif // ORGDIALOG_H
