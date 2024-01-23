#ifndef PROJECT_H
#define PROJECT_H

#include <QDateTime>
#include <QMap>
#include <QObject>
#include "organization.h"
class organization;
enum Role_P {
    pOwner,
    pAdmin,
    pMember,
};
class project : public QObject
{
    Q_OBJECT
public:
    explicit project(QObject *parent = nullptr);
    explicit project(QString&,QString&);
    QString name();
    void setName(QString&);
    QString description();
    void setDescription(QString&);
    QDateTime startDate();
    void setStartDate(QDateTime&);
    QDateTime endDate();
    void setEndDate (QDateTime&);
    QMap<int, Role_P>members();
    void setMembers( QMap<int, Role_P>& members);
   //bool isMemberOf( organization&);

signals:


private:
    QString p_name;
    QString p_description;
    organization* p_owner;
    QDateTime p_startDate;
    QDateTime p_endDate;
    QMap<int, Role_P> p_members;
    int p_ID;
    static int counter;
    bool projectStatus;
   // QList<Task> tasks;
};
#endif // PROJECT_H
