#ifndef ORGDIALOG_H
#define ORGDIALOG_H

#include <QWidget>

namespace Ui {
class OrgDialog;
}

class OrgDialog : public QWidget
{
    Q_OBJECT

public:
    explicit OrgDialog(QWidget *parent = nullptr);
    ~OrgDialog();

private slots:

    void on_editorg_clicked();

private:
    Ui::OrgDialog *ui;
};

#endif // ORGDIALOG_H
