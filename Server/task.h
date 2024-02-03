#ifndef TASK_H
#define TASK_H

#include <QObject>
#include <QString>
#include "team.h"
#include "project.h"
#include "common.h"
#include <QMap>
#include <QVariant>


class Task : public QObject
{
    Q_OBJECT
public:
    explicit Task(QObject *parent = nullptr);
    explicit Task(QString &name, QString &description);
    QString getName();
    QString getDescription();
    int getID();
    void setName(const QString &name);
    void setDescription(const QString &description);
    bool Create_priority(QString,QString);
    void setMemberstask(QString,QString);
    void setMembers(int,Role);
    QString getmemberduty(QString);
    void setstatus(QString);
    void setpro(QString,QString);
    QString getpro(QString);
    QString getstatus();
    QString getdeadline();
    void setdeadline(QString);
    void setteam(QString);
    QString getteam();
    void setproject(QString);
    QString getproject();
    bool getMembers(int id,Role role);
private:
    QString name;
    QString description;
    QString projectname;
    QString teamname;
    QString deadlinetask;
    bool userDoneTask;
    QMap<int,Role> member;
    QMap<QString,QString> memberTask;
    QMap<QString,QString> memberpro;
    QMap<QString,QString> map;
    QSet<QString> used;
    QString task_status;
    int id;
    static int counter;
    QList<QString> list_of_priorities;


protected:
};

#endif // TASK_H
