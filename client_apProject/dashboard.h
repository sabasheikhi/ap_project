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
public:
    explicit Dashboard(QWidget *parent,QTcpSocket* st,QString username);
    void fix();

    ~Dashboard();


private slots:
    void on_pushButton_clicked();
    void new_org(QString name);
    void request_new_organization(QString name,QString des );
    void on_addButton_clicked();
    void handleWrite();

signals:
    void closeAddOrg();
private:
    Ui::Dashboard *ui;
};

#endif // DASHBOARD_H
