#ifndef USER_H
#define USER_H

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
    // save user data in QMap or linkedList?
};

#endif // USER_H
