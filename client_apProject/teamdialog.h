#ifndef TEAMDIALOG_H
#define TEAMDIALOG_H


#include <QWidget>
#include <QTcpSocket>
extern QString username;
extern QTcpSocket* socket;
namespace Ui {
class teamdialog;
}

class teamdialog : public QWidget
{
    Q_OBJECT
    QString orgname;
   QString name_;
public:
    explicit teamdialog(QWidget *parent,QString name_,QString nameo);
    ~teamdialog();
private slots:
    void handleWrite();
    void on_editpro_clicked();
    void request_edit(QString,QString);
    void on_deletepro_clicked();

    void on_addOrEditUser_clicked();

    void on_delete_user_clicked();

signals:
    void closeeditpro();
private:
    Ui::teamdialog *ui;
};

#endif // TEAMDIALOG_H
