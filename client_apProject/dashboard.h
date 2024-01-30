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
    int row,column;
    QTcpSocket* socket;

public:
    explicit Dashboard(QWidget *parent,QTcpSocket* st);
    void fix();

    ~Dashboard();

private slots:
    void on_pushButton_clicked();

    void on_addButton_clicked();

private:
    Ui::Dashboard *ui;
};

#endif // DASHBOARD_H
