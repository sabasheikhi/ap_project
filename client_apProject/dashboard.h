#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QWidget>
#include <QTcpSocket>
namespace Ui {
class Dashboard;
}

class Dashboard : public QWidget
{
    Q_OBJECT
    QTcpSocket* socket;

public:
    explicit Dashboard(QWidget *parent,QTcpSocket* st);
    ~Dashboard();

private:
    Ui::Dashboard *ui;
};

#endif // DASHBOARD_H
