#ifndef COMMENTUI_H
#define COMMENTUI_H

#include <QWidget>

namespace Ui {
class commentui;
}

class commentui : public QWidget
{
    Q_OBJECT

public:
    explicit commentui(QWidget *parent , QString use,QString text);
    ~commentui();
signals:
    void deletec(QString name);
private slots:
    void on_delete_2_clicked();

private:
    Ui::commentui *ui;
};

#endif // COMMENTUI_H
