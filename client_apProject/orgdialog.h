#ifndef ORGDIALOG_H
#define ORGDIALOG_H

#include <QWidget>
#include <QTcpSocket>

namespace Ui {
class OrgDialog;
}

class OrgDialog : public QWidget
{
    Q_OBJECT
    QTcpSocket *socket;

public:
    explicit OrgDialog(QWidget *parent = nullptr);
    ~OrgDialog();

private slots:

    void on_deleteorg_clicked();

    void on_editorg_clicked();

    void on_delete_user_clicked();

    void on_addOrEditUser_clicked();

signals:
    void removeOrganizationUi(QString name);

private:
    Ui::OrgDialog *ui;
};

#endif // ORGDIALOG_H
