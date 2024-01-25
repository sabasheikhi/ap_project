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
    taskIsAssignedTo = -1; // currently assigned to nobody!
    task_status = false;
    id = counter;
    counter++;
}

Task::Task(QString &name, QString &description): name(name), description(description){
    id = counter;
    counter++;
    task_status = false;
}

void Task::edit_task(QString name, QString description, int userId=-1){
    setName(name);
    setDescription(description);
    taskIsAssignedTo = userId;
    userDoneTask = false; // vaqti toye ui user tik zad k task ro anjam dade in ro true kn
}

void Task::archive_task(){}

void Task::unarchive_task(){}

void Task::remove_task(){
    // toye list task haye toye proje , ... delete beshe
}

void Task::set_deadline(QDateTime &deadline){ this->deadline = deadline; }

void Task::set_priority(){}

QString Task::getName(){ return name;}

QString Task::getDescription(){ return description;}

int Task::getID(){return id;}

int Task::taskIsAssignedToWho(){ return taskIsAssignedTo; }

void Task::setName(const QString &name){ this->name = name; }

void Task::setDescription(const QString &description){ this->description = description; }

void Task::assignTaskTo(int &user_id){
    taskIsAssignedTo = user_id;
    userDoneTask = false;
}
/*
void Task::assignTaskTo(Team &team){
    // bayad ye map bashe ke toosh task, team bashn
}

void Task::assignTaskTo(project &project){
 // bayad ye map bashe ke toosh task, project bashn
}

Team& Task::taskIsAssignedToWhichTeam(){
    // bayad bere az toye map id team ro peyda kne
}

project& Task::taskIsAssignedToWhichProject(){
// bayad bere az toye map begarde
}
*/
/*
QDateTime Task::timeLeftToDeadline(QDateTime today, QDateTime final_day){
    return (final_day - today); // wrong!
}
*/
