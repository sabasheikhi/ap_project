#ifndef EDITPROJECT_H
#define EDITPROJECT_H

#include <QWidget>

namespace Ui {
class editproject;
}

class editproject : public QWidget
{
    Q_OBJECT

public:
    explicit editproject(QWidget *parent = nullptr);
    ~editproject();
signals:
    void editprojec(QString name,QString des);

private slots:
    void on_editButton_clicked();

private:
    Ui::editproject *ui;
};

#endif // EDITPROJECT_H
