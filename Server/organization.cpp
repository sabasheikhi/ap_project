#include "organization.h"
#include "user.h"
using namespace std;
int organization::count = 0;
organization::organization(QObject *parent)
    : QObject{parent}
{
    o_name="";
    o_description="";
    o_ID=count++;

}

int organization::ID(){return o_ID;}
organization::organization(QString &name,QString &description)
    : o_name(name), o_description(description) {o_ID=count++; }

QString organization::name()
{ return o_name; }

void organization::setName( QString &name)
{ o_name = name; }

QString organization::description()
{ return o_description; }

void organization::setDescription(QString &description)
{ o_description = description; }

//QList<Project> organization::projects(){ return o_projects; }
//void organization::addProject(Project project) { o_projects.append(project); }

QMap<int, Role>& organization::members() { return o_members; }
void organization::setMembers(int id,Role role) { o_members[id] = role; }
bool organization::getMembers(int id,Role role)
{
    if(o_members[id] == role){
        return true;
    }
    return false;
}
QList<Team*>& organization::Teams()
{
    return teams;
}
QList<project*>& organization::Projects()
{
    return projects;
}

QList<Task*>& organization::Tasks()
{
    return tasks;
}

bool organization::compareById( organization *org1,  organization *org2)
{
    return org1->ID() < org2->ID();
}

bool organization::compareByName( organization *org1,  organization *org2)
{
    return org1->name() < org2->name();
}

//........................................................................................
//functions:



void organization::removeMember(int memberId)
{

    o_members.remove(memberId);



}



