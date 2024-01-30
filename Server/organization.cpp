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
    : o_name(name), o_description(description) {o_ID=count++; o_members[user->getID()]={Owner};}

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

QMap<int, Role> organization::members() { return o_members; }
void organization::setMembers(int id,Role role) { o_members[id] = role; }


//........................................................................................
//functions:

void organization::edit_organization(QString &name,QString &description)
{
    setName(name);
    setDescription(description);
}

void organization::changeMemberRoleById(int memberId, Role role)
{


    if (!o_members.contains(memberId)) {
        return;
    }

    o_members[memberId] = role;

}
bool organization::removeMember(int memberId)
{
    if (!o_members.contains(memberId)) {
        return false;
    }
    o_members.remove(memberId);

    return true;

}



