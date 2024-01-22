#ifndef FORGOTPASSWORDDIALOG_H
#define FORGOTPASSWORDDIALOG_H

#include <QDialog>

namespace Ui {
class forgotPasswordDialog;
}

class forgotPasswordDialog : public QDialog
{
    Q_OBJECT

public:
    explicit forgotPasswordDialog(QWidget *parent = nullptr);
    ~forgotPasswordDialog();

private slots:
    void on_ok_cancel_buttonBox_accepted();
    void on_eyeButton_clicked();

private:
    Ui::forgotPasswordDialog *ui;
};

#endif // FORGOTPASSWORDDIALOG_H
