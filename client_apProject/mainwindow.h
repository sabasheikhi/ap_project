#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_SignInButton_clicked();
    void on_SignUpButton_clicked();
    void on_forgotPasswordButton_clicked();
    void on_usernameLineEdit_textChanged(const QString &arg1);
    void on_passwordLineEdit_textChanged(const QString &arg1);
    void on_eyeButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
