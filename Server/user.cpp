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
/*
bool User::userExists(QString username, QString hashed_password){
    // begard toye file ya map ya hrchi k hst bbin user found mishe ya n
}
*/
int User::getID(){ return id; }
