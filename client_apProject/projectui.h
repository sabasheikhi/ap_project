#ifndef PROJECTUI_H
#define PROJECTUI_H

#include <QWidget>
#include <QTcpSocket>
namespace Ui {
class projectui;
}

class projectui : public QWidget
{
    Q_OBJECT
    QTcpSocket* socket;
    QString orgname;
public:
    explicit projectui(QWidget *parent,QTcpSocket* sr,QString namep,QString nameo);
    ~projectui();

private slots:
    void on_openproject_clicked();

private:
    Ui::projectui *ui;
};

#endif // PROJECTUI_H
