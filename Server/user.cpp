#include "user.h"
#include <QString>

int User::counter = 0;

User::User(QString &username, QString &hashed_password, QString &email, QString &securityQuestion){
    this->username = username;
    this->hashed_password = hashed_password;
    this->email = email;
    this->securityQuestion = securityQuestion;
}
/*
bool User::userExists(QString username, QString hashed_password){
    // begard toye file ya map ya hrchi k hst bbin user found mishe ya n
}
*/
int User::getID(){ return id; }
