#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QTcpSocket* socket;
    QMetaObject::Connection connection;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void signUpRequest(QString username,QString password,QString name,QString email,QString security);
    void handleWrite();
    void on_SignInButton_clicked();
    void on_SignUpButton_clicked();
    void on_forgotPasswordButton_clicked();
    void on_usernameLineEdit_textChanged(const QString &arg1);
    void on_passwordLineEdit_textChanged(const QString &arg1);
    void on_eyeButton_clicked();

private:
    Ui::MainWindow *ui;
signals:
    void success_signup();
    void username_taken();

};
#endif // MAINWINDOW_H
