#ifndef EDITTEAM_H
#define EDITTEAM_H

#include <QWidget>

namespace Ui {
class editteam;
}

class editteam : public QWidget
{
    Q_OBJECT

public:
    explicit editteam(QWidget *parent = nullptr);
    ~editteam();
signals:
    void editeam(QString name,QString des);

private slots:
    void on_editButton_clicked();
private:
    Ui::editteam *ui;
};

#endif // EDITTEAM_H

