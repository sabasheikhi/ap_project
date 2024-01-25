#ifndef TASK_H
#define TASK_H

#include <QObject>
#include <QString>
#include <QDateTime>
#include "team.h"
#include "project.h"
#include <QMap>

class Task : public QObject
{
    Q_OBJECT
public:
    explicit Task(QObject *parent = nullptr);
    explicit Task(QString &name, QString &description);
    void edit_task(QString name, QString description, int userId); // deadline ro hm bezaram toye constructor?
    void archive_task(); // ?
    void unarchive_task(); // ?
    void remove_task();
    void set_deadline(QDateTime &deadline);
    void set_priority(); // ?
    QString getName();
    QString getDescription();
    int getID();
    int taskIsAssignedToWho();
    void setName(const QString &name);
    void setDescription(const QString &description);
    void assignTaskTo(int &user_id);
    void assignTaskTo(Team &team);
    void assignTaskTo(project &project);
    Team& taskIsAssignedToWhichTeam();
    project& taskIsAssignedToWhichProject();
    QDateTime timeLeftToDeadline(QDateTime today, QDateTime final_day); // ? => age deadline tmum shod, task_status = true;

private:
    QString name;
    QString description;
    QDateTime start_day;
    QDateTime deadline; // final_day
    bool userDoneTask; // age deadline tamum beshe vli user hnuz task ro anjam ndade bashe QMessage bede(toye ui dashboard)
    bool task_status;
    int id;
    static int counter;
    int taskIsAssignedTo;
protected: // friend ye class be azaye protected class dastresi dasht ya n?
           // QMap<int, int, int, int> tasks; // task_id, project_d, user_id, team_id
           // che knm ? arraye dobodi, linkedlist, ...
};

#endif // TASK_H
