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
    QMap<int, Role> getMembers();
    int getID();
    void setName(QString& name);
    void setDescription(QString& description);
    void setMembers(QMap<int, Role> &member);
    void edit_team(QString& name, QString& description);
    bool isMemberOf(int member_id);
    void changeMemberRoleById(int id,Role role);
    void removeMember(int);
    int whoseTaskIsIt(int);
    void addTeamToList(int organization_id, int team_id);
    QMap<int, int> showTeamsListSortedByOrganizationID(); // should this be here in the class..??
    //void add_task();
    void assignTaskToMember(int task_id, int member_id);

private:
    QString name;
    QString description;
    int id;
    static int counter;
    QMap<int, Role> members; // inja toye team memberha mitunn hme joor role dashte bashn?
    QMap <int, int> teamsList; //  organization id, team id => in nabayad inja bashe bayad toye tabei chizi ya global bashe...
    QList<project> projects; // ye team toye hr sazman hadaksar chand ta project ro mitune ba hm anjam bede?
    // age bishtr az 1 bashe in okeye vli age toye hr sazmani hr team fqt qarare ye proje anjam bede unvqt byd
    // injori bashe => project* project;
    // chejori ye project ro be chnd ta task taqsim knm?
    QMap<int, int> tasks; // task shomare 1 male member ba id 1 e masalan.
};

#endif // TEAM_H
