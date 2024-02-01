#ifndef ORGANIZATIONUI_H
#define ORGANIZATIONUI_H

#include <QWidget>
#include <QPoint>
#include <QTcpSocket>
namespace Ui {
class OrganizationUI;
}

class OrganizationUI : public QWidget
{
    Q_OBJECT
    QTcpSocket* socket;

public:
    explicit OrganizationUI(QWidget *parent,QTcpSocket* sr,QString name);
    ~OrganizationUI();

private slots:
   // void on_OrganizationUI_customContextMenuRequested(const QPoint &pos);

    void on_pushButton_clicked();

private:
    Ui::OrganizationUI *ui;

};

#endif // ORGANIZATIONUI_H
