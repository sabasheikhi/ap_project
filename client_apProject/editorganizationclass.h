#ifndef EDITORGANIZATIONCLASS_H
#define EDITORGANIZATIONCLASS_H

#include <QDialog>

namespace Ui {
class editOrganizationClass;
}

class editOrganizationClass : public QDialog
{
    Q_OBJECT

public:
    explicit editOrganizationClass(QWidget *parent = nullptr);
    ~editOrganizationClass();

private:
    Ui::editOrganizationClass *ui;
};

#endif // EDITORGANIZATIONCLASS_H
