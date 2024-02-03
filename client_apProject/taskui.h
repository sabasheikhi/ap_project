#ifndef TASKUI_H
#define TASKUI_H

#include <QWidget>
#include <QTcpSocket>
namespace Ui {
class taskui;
}

class taskui : public QWidget
{
    Q_OBJECT
    QTcpSocket* socket;
    QString orgname;
    QString proname;
    QString teamname;

public:
    explicit taskui(QWidget *parent,QTcpSocket* sr,QString nametea,QString nameo,QString nametas,QString namep);
    ~taskui();

private slots:
    void on_pushButton_clicked();

private:
    Ui::taskui *ui;
};

#endif // TASKUI_H
