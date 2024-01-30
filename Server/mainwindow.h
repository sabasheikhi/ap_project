#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QTcpServer>
#include <QTcpSocket>
#include <QMainWindow>
#include "user.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QTcpServer* server;
    QList<User*> users;

public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

private slots:

    void on_run_server_clicked();
    void read_data();
     void handleNewConnection();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
