#ifndef TEAM_H
#define TEAM_H

#include <QObject>
#include <QString>
#include <QMap>
#include <QList>
#include "project.h"
#include "common.h"

class Team : public QObject
{
    Q_OBJECT
public:
    explicit Team(QObject *parent = nullptr);
    explicit Team(QString& name, QString& description);
    void deleteTeam();
    QString getName();
    QString getDescription();
    int getID();
    void setName(QString& name);
    void setDescription(QString& description);
    void edit_team(QString& name, QString& description);
    bool isMemberOf(int member_id);
    void changeMemberRoleById(int id,Role role);
    int whoseTaskIsIt(int);
    void addTeamToList(int organization_id, int team_id);
    QMap<int, int> showTeamsListSortedByOrganizationID(); // should this be here in the class..??
    //void add_task();
    void assignTaskToMember(int task_id, int member_id);
    void setMembers(int id,Role role);
    bool getMembers(int id,Role role);
    QList<project*>& Projects();
    void removeMember(int);
    static bool compareByName( Team *team1, Team *team2);
    static bool compareById( Team *team1,  Team *team2);



private:
    QString name;
    QString description;
    int id;
    static int counter;
    QMap<int, Role> members;
    QMap <int, int> teamsList;
    QList<project*> projects;

    QMap<int, int> tasks;
};

#endif // TEAM_H
