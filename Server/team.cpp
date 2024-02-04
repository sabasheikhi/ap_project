#include <QString>
#include <QMap>
#include <QList>
#include "team.h"
#include "project.h"

int Team::counter = 0;

Team::Team(QObject *parent)
    : QObject{parent}
{
    name= "";
    description= "";
    id= counter;
    counter++;
}

Team::Team(QString &name, QString &description): name(name), description(description) {
    id = counter;
    counter++;
}

void Team::deleteTeam(){
    members.clear();
    tasks.clear();
    // projects.clear(); // should this be cleared here or not?
}

QString Team::getName(){ return name; }

QString Team::getDescription(){ return description; }

int Team::getID(){ return id; }


void Team::setName(QString &name){ this->name = name; }

void Team::setDescription(QString &description){ this->description = description; }


void Team::edit_team(QString &name, QString &description){
    setName(name);
    setDescription(description);
    // nabayad inja task ha ro hm beshe avaz ya delete krd?? edit_task bayad toye class task bashe
    // vli inja chi? lazem nist friend knmshoon??
}

bool Team::isMemberOf(int member_id){
    if (members.contains(member_id))
        return true;
    return false;
}

void Team::changeMemberRoleById(int id, Role role){
    if (!members.contains(id))
        return;
    members[id] = role;
}

int Team::whoseTaskIsIt(int taskNumber){
    QList<int> values = tasks.values();
    for (int iterator=0; iterator < tasks.size(); iterator++){
        if (values[iterator] == taskNumber){
            values.clear();
            return tasks.key(taskNumber);
        }
    }
    values.clear();
    return -1; // error handling (in case there is no taskNumber found)
}

void Team::addTeamToList(int organization_id, int team_id) {
    teamsList.insert(organization_id, team_id);
}

QMap<int, int> Team::showTeamsListSortedByOrganizationID(){ return teamsList; }

//void Team::add_task(); // complete it! => guess it is in ui..?

void Team::assignTaskToMember(int task_id, int member_id){
    tasks.insert(task_id, member_id);
}
void Team::setMembers(int id,Role role) { members[id] = role; }
bool Team::getMembers(int id,Role role)
{
    if(members[id] == role){
        return true;
    }
    return false;
}
void Team::removeMember(int memberId)
{

    members.remove(memberId);



}

bool Team::compareByName( Team *team1,  Team *team2)
{
    return team1->getName() < team2->getName();
}

bool Team::compareById( Team *team1,  Team *team2)
{
    return team1->getID() < team2->getID();
}
QList<project*>& Team::Projects()
{
    return projects;
}

