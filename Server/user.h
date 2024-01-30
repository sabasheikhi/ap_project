#ifndef USER_H
#define USER_H
#include "project.h"
#include "organization.h"
#include "task.h"
#include "team.h"
#include <QObject>
#include <QString>

class User : public QObject
{
    Q_OBJECT
public:
    explicit User(QString &username, QString &hashed_password,QString& name, QString &email, QString &securityQuestion);
    QString Username();
    QString Password();
    QString Name();
    QList<project*>& Projects();
    QList<organization*>& Organizations();
    QList<Team*>& Teams();
    QList<Task*>& Tasks();
    int getID();
    // in user che task hayi dare v deadline hrkodum ta keye?
private:
    int id;
    static int counter;
    QString username;
    QString name;
    QString hashed_password;
    QString email;
    QString securityQuestion;
    QList<organization*> organizations;
    QList<Team*> teams;
    QList<project*> projects;
    QList<Task*> tasks;

    // save user data in QMap or linkedList?
};

#endif // USER_H
