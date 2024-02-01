#include "project.h"
int project::counter = 0;
project::project(QObject *parent)
    : QObject{parent}
{
    p_name="";
    p_description="";
    p_ID=counter++;
}
project::project( QString& name, QString& description)
    : p_name(name), p_description(description) {p_ID=counter++;}
QString project::name(){ return p_name; }
void project::setName(QString& name) { p_name = name;  }

QString project::description()
{ return p_description; }

void project::setDescription(QString& description)
{ p_description = description; }

//organization project::owner(){ return m_owner; }
//void project::setOwner(organization& owner) { p_owner = owner; emit ownerChanged(owner); }

QDateTime project::startDate() { return p_startDate; }
void project::setStartDate( QDateTime& startDate) { p_startDate = startDate; }

QDateTime project::endDate()  { return p_endDate; }
void project::setEndDate( QDateTime& endDate) { p_endDate = endDate;  }

QMap<int, Role> project::members() { return p_members; }
void project::setMembers(int id,Role role) { p_members[id] = role; }
bool project::getMembers(int id,Role role)
{
    if(p_members[id] == role){
        return true;
    }
    return false;
}
void project::removeMember(int memberId)
{

    p_members.remove(memberId);



}
void project::setstatus(QString pro){
    projectStatus=pro;
}
