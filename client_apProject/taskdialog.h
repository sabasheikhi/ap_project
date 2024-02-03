#ifndef TASKDIALOG_H
#define TASKDIALOG_H

#include <QWidget>
#include <QTcpSocket>
#include <QListWidget>
#include <QLabel>
#include <QScrollArea>

extern QString username;
extern QTcpSocket* socket;
namespace Ui {
class taskdialog;
}

class taskdialog : public QWidget
{
    Q_OBJECT
    QString orgname;
    QString proname;
    QString teamname;
    QString taskname;

public:
    explicit taskdialog(QWidget *parent,QString tasknam,QString orgnam,QString teamnam,QString pronam);

    void request_edit(QString,QString,QString);
    ~taskdialog();

private slots:
    void on_changestatus_clicked();
    void on_deletetask_clicked();
    void handleWrite();
    void on_edittask_clicked();
    void on_addtask_clicked();
    void onMessageClicked(QListWidgetItem *item);
    void on_sendButton_clicked();

signals:
    void closeedittask();
private:
    Ui::taskdialog *ui;
    QLabel *replyMessage;
};

#endif // TASKDIALOG_H
