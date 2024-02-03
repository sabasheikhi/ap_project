#ifndef EDITTASK_H
#define EDITTASK_H

#include <QWidget>

namespace Ui {
class edittask;
}

class edittask : public QWidget
{
    Q_OBJECT

public:
    explicit edittask(QWidget *parent = nullptr);
    ~edittask();
signals:
    void editask(QString name,QString des,QString team);

private slots:
    void on_editButton_clicked();

private:
    Ui::edittask *ui;
};

#endif // EDITTASK_H
