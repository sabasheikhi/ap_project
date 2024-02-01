#ifndef PRODIALOG_H
#define PRODIALOG_H

#include <QWidget>
#include <QTcpSocket>
extern QString username;
extern QTcpSocket* socket;
namespace Ui {
class prodialog;
}

class prodialog : public QWidget
{
    Q_OBJECT
    QString orgname;

QString name_;
public:
    explicit prodialog(QWidget *parent,QString name_,QString nameo);
    ~prodialog();
private slots:
    void handleWrite();
    void on_editpro_clicked();
    void request_edit(QString,QString);
    void on_deletepro_clicked();

    void on_addOrEditUser_clicked();

    void on_delete_user_clicked();

    void on_pushButton_clicked();

signals:
void closeeditpro();
private:
    Ui::prodialog *ui;
};

#endif // PRODIALOG_H
