#include "user.h"
#include <QString>

int User::counter = 0;

User::User(QString &username, QString &hashed_password,QString& name, QString &email, QString &securityQuestion){
    this->id = counter++;
    this->username = username;
    this->name = name;
    this->hashed_password = hashed_password;
    this->email = email;
    this->securityQuestion = securityQuestion;
}
QString User::Username() { return username;}
QString User::Password() { return hashed_password;}
QString User::Name() {return name;}

int User::getID(){ return id; }
QList<project*>& User::Projects()
{return projects;}
QList<organization*>& User::Organizations()
{
    return organizations;
}
QList<Team*>& User::Teams()
{
    return teams;
}
QList<Task*>& User::Tasks()
{
    return tasks;
}
