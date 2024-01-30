#ifndef SIGNUPDIALOG_H
#define SIGNUPDIALOG_H

#include <QDialog>

namespace Ui {
class SignUpDialog;
}

class SignUpDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SignUpDialog(QWidget *parent = nullptr);
    ~SignUpDialog();

private slots:
    void on_ok_cancel_buttonBox_accepted();
    void on_eyeButton_clicked();
    void signup_success();
    void username_taken();
    void on_pushButton_clicked();

private:
    Ui::SignUpDialog *ui;
signals:
    void SignUpRequest(QString username,QString password, QString name,QString email,QString security);
};

#endif // SIGNUPDIALOG_H
