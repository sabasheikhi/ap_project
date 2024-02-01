#ifndef ORGANIZATION_H
#define ORGANIZATION_H
#include <QVariant>
#include <QMap>
#include <QObject>
#include <QList>
#include "project.h"
#include "team.h"
#include "common.h"
class organization : public QObject
{
    Q_OBJECT

public:
    explicit organization(QObject *parent = nullptr);
    explicit organization(QString&,QString&);
    QString name();
    void setName( QString&);
    int ID();
    QString description();
    void setDescription(QString&);
    QMap<int, Role> &members();
    void setMembers(int,Role);
    bool isMemberOf(organization&);
    void o_delete();
    void removeMember(int memberId);
    bool getMembers(int id,Role role);
    QList<Team*>& Teams();
    QList<project*>& Projects();

signals:
private:
    QString o_name;
    QString o_description;
    QMap<int, Role> o_members;
    QList<Team*> teams;
    QList<project*> projects;
    int o_ID;
    static int count;

};

#endif // ORGANIZATION_H
