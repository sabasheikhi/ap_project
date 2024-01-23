#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QTcpServer>
#include <QTcpSocket>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QTcpServer* server;

public:
    MainWindow(QWidget *parent = nullptr);
    void handleNewConnection();
    ~MainWindow();

private slots:

    void on_run_server_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
