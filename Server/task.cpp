#include "task.h"
#include <QString>
#include <QMap>
#include "team.h"
#include "project.h"

int Task::counter = 0;

Task::Task(QObject *parent)
    : QObject{parent}
{
    name = "";
    description = "";
    task_status ="Undone";
    id = counter++;
    for (int i = 1; i <= 10; i++) {
        list_of_priorities.append(QString::number(i));
    }
}

Task::Task(QString &name, QString &description): name(name), description(description){
    id = counter;
    counter++;
    task_status ="Undone";
    for (int i = 1; i <= 10; i++) {
        list_of_priorities.append(QString::number(i));
    }
}



QString Task::getName(){ return name;}

QString Task::getDescription(){ return description;}

int Task::getID(){return id;}


void Task::setName(const QString &name){ this->name = name; }

void Task::setDescription(const QString &description){ this->description = description; }

bool Task::Create_priority(QString username,QString key)
{


    for (int i = 0; i < list_of_priorities.size(); i++) {
        if( key == list_of_priorities.at(i)){
        if (!used.contains(key)) {

            map[username] = QString::number(i + 1);
            used.insert(key);
            return true;
        }
        return false;
        }
    }

}


void Task::setMemberstask(QString username,QString des) { memberTask[username] = des; }
void Task::setMembers(int id,Role role) { member[id] = role; }
bool Task::getMembers(int id,Role role)
{
    if(member[id] == role){
        return true;
    }
    return false;
}
void Task::setpro(QString username,QString s)
{
    memberpro[username] = s;
}
QString Task::getpro(QString username)
{
    return memberpro[username];
}
void Task::setstatus(QString status){
    task_status=status;
}
QString Task::getstatus(){
    return task_status;
}
QString Task::getdeadline()
{
    return deadlinetask;
}
void Task::setdeadline(QString st)
{
    deadlinetask=st;
}
void Task::setteam(QString s)
{
    teamname=s;
}
QString Task::getteam()
{
    return teamname;
}
void Task::setproject(QString s)
{
    projectname=s;
}
QString Task::getproject(){
    return projectname;
}
QString Task::getmemberduty(QString s)
{
    return memberTask[s];
}
