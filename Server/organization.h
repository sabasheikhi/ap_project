#ifndef ORGANIZATION_H
#define ORGANIZATION_H
#include <QVariant>
#include <QMap>
#include <QObject>
#include <QList>
#include "project.h"
#include "common.h"
class project;

//QList<project> o_projects;
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
    // QList<Project> projects();
    // void addProject(Project);
    // QList<Team> projects();
    // void addProject(Project);
    QMap<int, Role> members();
    void setMembers(QMap<int, Role> &members);
    void edit_organization(QString&,QString&);
    bool isMemberOf(organization&);
    void o_delete();
    QList<organization> memberOrganizations();
    void changeMemberRoleById(int,Role);
    bool removeMember(int);

signals:
private:
    QString o_name;
    QString o_description;
    QList<project> o_projects;
    //QList<Team> o_teams;
    QMap<int, Role> o_members;
    int o_ID;
    static int count;
    QList<organization> member_organizations;

};

#endif // ORGANIZATION_H
