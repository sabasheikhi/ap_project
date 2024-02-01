#ifndef PROJECT_H
#define PROJECT_H

#include <QDateTime>
#include <QMap>
#include <QObject>
#include "common.h"

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
    QMap<int, Role>members();
    void setMembers(int,Role);
    bool getMembers(int,Role);
    void removeMember(int);
    void setstatus(QString);
signals:


private:
    QString p_name;
    QString p_description;
    QDateTime p_startDate;
    QDateTime p_endDate;
    QMap<int, Role> p_members;
    int p_ID;
    static int counter;
    QString projectStatus;

    // QList<Task> tasks;
};
#endif // PROJECT_H
