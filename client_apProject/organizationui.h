#ifndef ORGANIZATIONUI_H
#define ORGANIZATIONUI_H

#include <QWidget>

namespace Ui {
class OrganizationUI;
}

class OrganizationUI : public QWidget
{
    Q_OBJECT

public:
    explicit OrganizationUI(QWidget *parent = nullptr, QString name="");
    ~OrganizationUI();

private:
    Ui::OrganizationUI *ui;
};

#endif // ORGANIZATIONUI_H
