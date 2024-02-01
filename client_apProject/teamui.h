#ifndef TEAMUI_H
#define TEAMUI_H

#include <QWidget>
#include <QTcpSocket>
namespace Ui {
class teamui;
}

class teamui : public QWidget
{
    Q_OBJECT
    QTcpSocket* socket;
    QString orgname;
public:
    explicit teamui(QWidget *parent,QTcpSocket* sr,QString namet,QString nameo);
    ~teamui();

private slots:
    void on_openteam_clicked();

private:
    Ui::teamui *ui;
};

#endif // TEAMUI_H

