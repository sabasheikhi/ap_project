#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QLineEdit>
#include <QTextStream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    server = new QTcpServer(this);


}
QMap<QString,QTcpSocket*> sockets;
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleNewConnection()
{
    QTcpSocket* socket = server->nextPendingConnection();
    connect(socket,SIGNAL(readyRead()),this,SLOT(read_data()));
}
void MainWindow::on_run_server_clicked()
{

    QHostAddress address(ui->address->text());
    int port=ui->Port->text().toInt();
    if(!server->listen(address,port))
    {exit(1);}
    connect(server,SIGNAL(newConnection()),this,SLOT(handleNewConnection()));
}
void MainWindow::read_data()
{
    // 4011 User Already Exists
    // 2000 User created
    // 2001 User login
    // 4010 wrong password
    // 4040 username not found
    // 2002 New organization creat
    // 2003 Organization name and description changed
    // 4041 organization not found
    // 2003 organization edited successfully
    // 4042 user not found
    // 4012 Your are not the owner
    QTcpSocket* socket = (QTcpSocket*)sender();
    QString input = socket->readAll();
    qDebug() << input;
    QTextStream stream(&input);
    QString buffer;
    stream>>buffer;
    if(buffer=="SIGNUP")
    {
        QString username,password,email,name,security;
        stream>>buffer;
        username = buffer;
        stream>>buffer;
        password = buffer;
        stream>>buffer;
        buffer=="{";
        stream>>buffer;
        while(buffer!="}")
        {
            name+=buffer+" ";
            stream>>buffer;
        }
        name.removeLast();
        stream>>buffer;
        email = buffer;
        buffer=="{";
        stream>>buffer;
        while(buffer!="}")
        {
            security+=buffer+" ";
            stream>>buffer;
        }
        security.removeLast();
        for(auto user:users)
        {
            if(username==user->Username())
            {
                socket->write("4011");
                return;
            }
        }
        User* user = new User(username,password,name,email,security);
        users.append(user);
        socket->write("2000");
        return;


    }
    else if(buffer=="SIGNIN"){
        QString username,password;
        stream>>buffer;
        username = buffer;
        stream>>buffer;
        password = buffer;
        for(auto user:users){
            if(username==user->Username())
            {
                if(password==user->Password()){
                    sockets[username] = socket;
                    socket->write("2001");
                    socket->flush();
                    QString result ="LISTORG";
                    for (auto x:user->Organizations())
                    {
                        result+=" { "+x->name()+" }";
                    }
                    result+=" \n";
                    socket->write(result.toUtf8());
                    return;
                }
                socket->write("4010");
                return;
            }
        }
        socket->write("4040");
        return;
    }

    else if(buffer=="NEWORG")
    {
        QString username,name,des;
        stream>>buffer;
        username = buffer;
        stream>>buffer;
        buffer=="{";
        stream>>buffer;
        while(buffer!="}")
        {
            name+=buffer+" ";
            stream>>buffer;
        }
        name.removeLast();
        stream>>buffer;
        buffer=="{";
        stream>>buffer;
        while(buffer!="}")
        {
            des+=buffer+" ";
            stream>>buffer;
        }
        des.removeLast();
        qDebug() << name;
        qDebug() << des;
        for(auto user:users){
            if(username==user->Username())
            {
                organization* org=new organization(name,des);
                user->Organizations().append(org);
                org->setMembers(user->getID(),Role::Owner);
                socket->write("2002 " +name.toUtf8());
                return;
            }

        }
    }
    else if (buffer == "EDITORG") {
    QString username,lastname, name, des;
    stream >> buffer;
    username = buffer;
    stream >> buffer;
    buffer = "{";
    stream >> buffer;
    while (buffer != "}") {
            lastname += buffer + " ";
            stream >> buffer;
    }
    lastname.removeLast();
    stream >> buffer;
    buffer = "{";
    stream >> buffer;
    while (buffer != "}") {
            name += buffer + " ";
            stream >> buffer;
    }
    name.removeLast();
    stream >> buffer;
    buffer = "{";
    stream >> buffer;
    while (buffer != "}") {
            des += buffer + " ";
            stream >> buffer;
    }
    des.removeLast();
    qDebug() << lastname << name << des;
    for(auto user:users){
            if(username==user->Username())
            {
                qDebug() << "user found";
                for (auto x:user->Organizations())
                {

                    if(x->name()==lastname)
                    qDebug() << "org found";
                    {
                        qDebug() << x->members();
                    qDebug() << x->getMembers(user->getID(),Role::Owner);
                        if(x->getMembers(user->getID(),Role::Owner))
                        {
                            x->setName(name);
                            x->setDescription(des);
                            QString response= "STATUS ";
                            response += " { "+name +" } { " + des +" }\n";
                            socket->write(response.toUtf8());
                            socket->flush();
                            return;
                        }
                        socket->write("4012");
                        return;
                    }
                }

            }
        }
    }
    else if (buffer=="DESCRIPTION")
    {
            QString username, name;
            stream >> buffer;
            username = buffer;
            stream >> buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                name += buffer + " ";
                stream >> buffer;
            }
            name.removeLast();
            for(auto user:users){
                if(username==user->Username())
                {
                    for (auto x:user->Organizations())
                    {
                        if(x->name()==name)
                        {
                            QString des=x->description();
                            QString response= "DES";
                            response += " { "+des+" }";
                            response+=" \n";
                            socket->write(response.toUtf8());
                            socket->flush();
                        }
                    }

                }
            }

    }//  QString command = "DELETEORG " +username +" { "+lastname +" }\n";
    else if(buffer=="DELETEORG")
    {
            QString username , name;
            stream >> buffer;
            username = buffer;
            stream >> buffer;
            buffer == "{";
            stream >> buffer;
            while (buffer != "}") {
                name += buffer + " ";
                stream >> buffer;
            }
            name.removeLast();
            qDebug() << "deleting org "<<name<<username;
            for(auto user:users){
                if(username==user->Username())
                {
                    qDebug() <<"user found";
                    for (auto x:user->Organizations())
                        if(x->name()==name)
                        {
                            qDebug() <<"org found";
                            qDebug() <<x->getMembers(user->getID(),Role::Owner);
                            if(x->getMembers(user->getID(),Role::Owner)==true)
                            {
                                delete x;
                                user->Organizations().removeAll(x);
                                QString result ="LISTORG";
                                for (auto x:user->Organizations())
                                {
                                    result+=" { "+x->name()+" }";
                                }
                                result+=" \n";
                                socket->write(result.toUtf8());
                                return;
                            }
                            socket->write("4012");
                            return;
                        }
                }
            }
    } //QString command = "ROLEORG " +username +" "+ username_member +" "+ role +" { "+lastname +" }\n";
    else if(buffer=="ROLEORG")
    {

            QString username,role,name, member_username;
            stream>>buffer;
            username = buffer;
            stream>>buffer;
            member_username = buffer;
            stream>>buffer;
            role = buffer;
            stream >> buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                name += buffer + " ";
                stream >> buffer;
            }
            name.removeLast();
            for(auto user:users){
                if(username==user->Username())
                {
                    for (auto x:user->Organizations())
                        if(x->name()==name)
                        {
                            int id;
                            for(auto u:users){
                                if(u->Username()==member_username){
                                    id=u->getID();
                                }
                            }
                            if(x->getMembers(user->getID(),Role::Owner)==true)
                            {

                                if(role=="Member")
                                {
                                    x->setMembers(id,Role::Member);

                                }
                                if(role=="Admin")
                                {
                                    x->setMembers(id,Role::Admin);
                                }
                                return;
                            }
                            else if(x->getMembers(user->getID(),Role::Admin)==true){
                                if(role=="Member")
                                {
                                    x->setMembers(id,Role::Member);
                                }
                                return;
                            }
                            socket->write("4012");
                            return;
                        }
                }
            }

    }//String command = "MEMBERRORG " +username +" "+member_us +" { "+lastname +" }\n";
    else if(buffer=="MEMBERRORG")
    {
            QString username,name,m;
            stream>>buffer;
            username = buffer;
            stream>>buffer;
            m = buffer;
            stream >> buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                name += buffer + " ";
                stream >> buffer;
            }
            name.removeLast();
            for(auto user:users){
                if(username==user->Username())
                {
                    for (auto x:user->Organizations())
                        if(x->name()==name)
                        {
                            int id;
                            for(auto u:users){
                                if(u->Username()==m){
                                    id=u->getID();
                                }
                            }

                            if(x->getMembers(user->getID(),Role::Owner)==true)
                            {

                               x->removeMember(id);
                                return;
                            }
                            else if(x->getMembers(user->getID(),Role::Admin)==true){
                                if(x->getMembers(id,Role::Member)==true)
                                {
                                    x->removeMember(id);
                                }
                                return;
                            }
                            socket->write("4012");
                            return;
                        }
                }
            }
    }//QString command = "NEWPRO " +username +" { "+orgname +" } { "+namep +" } { " + desp +" }\n";
    else if(buffer=="NEWPRO")
    {
            QString username,nameorg,namep,desp;
            stream>>buffer;
            username = buffer;
            stream>>buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                nameorg += buffer + " ";
                stream >> buffer;
            }
            nameorg.removeLast();
            stream>>buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                namep += buffer + " ";
                stream >> buffer;
            }
            namep.removeLast();
            stream>>buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                desp += buffer + " ";
                stream >> buffer;
            }
            desp.removeLast();
            for(auto user:users){
                if(username==user->Username() )
                {
                    int id=user->getID();
                    for (auto x:user->Organizations())
                        if(x->name()==nameorg)
                        {
                            if(x->getMembers(id,Role::Owner)==true)
                            {
                                project* pro=new project(namep,desp);
                                user->Projects().append(pro);
                                x->Projects().append(pro);
                                pro->setMembers(user->getID(),Role::Owner);
                                socket->write("2004 " +namep.toUtf8());
                                return;
                            }
                            else if(x->getMembers(id,Role::Admin)==true){
                                project* pro=new project(namep,desp);
                                user->Projects().append(pro);
                                x->Projects().append(pro);
                                pro->setMembers(user->getID(),Role::Admin);
                                socket->write("2004 " +namep.toUtf8());
                                return;

                            }
                            socket->write("4012");
                            return;
                        }
                }
            }

    }
    else if(buffer=="NEWTEAM")
    {
            QString username,nameorg,namet,dest;
            stream>>buffer;
            username = buffer;
            stream>>buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                nameorg += buffer + " ";
                stream >> buffer;
            }
            nameorg.removeLast();
            stream>>buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                namet += buffer + " ";
                stream >> buffer;
            }
            namet.removeLast();
            stream>>buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                dest += buffer + " ";
                stream >> buffer;
            }
            dest.removeLast();
            for(auto user:users){
                if(username==user->Username() )
                {
                    int id=user->getID();
                    for (auto x:user->Organizations())
                        if(x->name()==nameorg)
                        {
                            if(x->getMembers(id,Role::Owner)==true)
                            {
                                Team* team=new Team(namet,dest);
                                user->Teams().append(team);
                                x->Teams().append(team);
                                team->setMembers(user->getID(),Role::Owner);
                                socket->write("2005 " +namet.toUtf8());
                                return;
                            }
                            else if(x->getMembers(id,Role::Admin)==true){
                                Team* team=new Team(namet,dest);
                                user->Teams().append(team);
                                x->Teams().append(team);
                                team->setMembers(user->getID(),Role::Admin);
                                socket->write("2005 " +namet.toUtf8());
                                return;
                            }
                            socket->write("4012");
                            return;
                        }
                }
            }

    }//QString command = "DESCRIPTIONPRO " +username + " { "+name_ +" }\n";
    else if(buffer=="DESCRIPTIONPRO")
    {
            QString username, name;
            stream >> buffer;
            username = buffer;
            stream >> buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                name += buffer + " ";
                stream >> buffer;
            }
            name.removeLast();
            for(auto user:users){
                if(username==user->Username())
                {
                    for (auto x:user->Projects())
                    {
                        if(x->name()==name)
                        {
                            QString des=x->description();
                            QString response= "DESC";
                            response += " { "+des+" }";
                            response+=" \n";
                            socket->write(response.toUtf8());
                            socket->flush();
                        }
                    }

                }
            }

    }//QString command = "EDITPRO " +username +" { "+proname +" } { "+orgname +" } { "+name +" } { " + des +" }\n";
    else if(buffer=="EDITPRO")
    {
            QString username,orgname,lastname, name, des;
            stream >> buffer;
            username = buffer;
            stream >> buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                lastname += buffer + " ";
                stream >> buffer;
            }
            lastname.removeLast();
            stream >> buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                orgname += buffer + " ";
                stream >> buffer;
            }
            orgname.removeLast();
            stream >> buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                name += buffer + " ";
                stream >> buffer;
            }
            name.removeLast();
            stream >> buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                des += buffer + " ";
                stream >> buffer;
            }
            des.removeLast();
            qDebug() << lastname << name << des;
            for(auto user:users){
                if(username==user->Username())
                {
                    qDebug() << "user found";
                    for (auto x:user->Organizations())
                    {

                        if(x->name()==orgname)
                            qDebug() << "org found";
                        {
                            qDebug() << x->members();
                            qDebug() << x->getMembers(user->getID(),Role::Owner);
                            for(auto pro:user->Projects())
                            {
                                if(pro->getMembers(user->getID(),Role::Owner) || pro->getMembers(user->getID(),Role::Admin))
                                {
                                    pro->setName(name);
                                    pro->setDescription(des);
                                    QString response= "STATUS ";
                                    response += " { "+name +" } { " + des +" }\n";
                                    socket->write(response.toUtf8());
                                    socket->flush();
                                    return;
                                }

                            socket->write("4012");
                            return;
                        }

                        }
                    }

                }
            }

    }//QString command = "DELETEPRO " +username +" { "+proname +" } { "+orgname +" }\n";
    else if(buffer=="DELETEPRO")
    {
            QString username , proname , orgname;
            stream >> buffer;
            username = buffer;
            stream >> buffer;
            buffer == "{";
            stream >> buffer;
            while (buffer != "}") {
                proname += buffer + " ";
                stream >> buffer;
            }
            proname.removeLast();
            stream >> buffer;
            buffer == "{";
            stream >> buffer;
            while (buffer != "}") {
                orgname += buffer + " ";
                stream >> buffer;
            }
            orgname.removeLast();
            for(auto user:users){
                if(username==user->Username())
                {
                    qDebug() <<"user found";
                    for (auto x:user->Organizations())
                        if(x->name()==orgname)
                        {
                        qDebug() <<"org found";
                        qDebug() <<x->getMembers(user->getID(),Role::Owner);
                        if(x->getMembers(user->getID(),Role::Owner)==true ||x->getMembers(user->getID(),Role::Admin)==true )
                        {
                            for(auto pro:user->Projects())
                            {
                                    delete pro;
                                    user->Projects().removeAll(pro);
                                    x->Projects().removeAll(pro);
                            }
                            QString result ="LISTPRO";
                            for (auto pro:user->Projects())
                            {
                                    result+=" { "+pro->name()+" }";
                            }
                            result+=" \n";
                            socket->write(result.toUtf8());
                            return;
                        }
                        socket->write("4012");
                        return;
                        }
                }
            }
    }//QString command = "ROLEPRO " +username +" "+ username_member +" "+ role +" { "+proname +" } { "+orgname +" }\n";
    else if(buffer=="ROLEPRO")
    {
            QString username,role,proname,orgname, member_username;
            stream>>buffer;
            username = buffer;
            stream>>buffer;
            member_username = buffer;
            stream>>buffer;
            role = buffer;
            stream >> buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                proname += buffer + " ";
                stream >> buffer;
            }
            proname.removeLast();
            stream >> buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                orgname += buffer + " ";
                stream >> buffer;
            }
            orgname.removeLast();
            for(auto user:users){
                if(username==user->Username())
                {
                    for (auto x:user->Organizations())
                        if(x->name()==orgname)
                        {
                        for(auto pro:x->Projects())
                        {
                            if(pro->name()==proname)
                            {
                                    int id;
                                    for(auto u:users){
                                        if(u->Username()==member_username){
                                            id=u->getID();
                                        }
                                    }
                                    if(pro->getMembers(user->getID(),Role::Owner)==true)
                                    {

                                        if(role=="Member")
                                        {
                                           pro->setMembers(id,Role::Member);

                                        }
                                        if(role=="Admin")
                                        {
                                            pro->setMembers(id,Role::Admin);
                                        }
                                        return;
                                    }
                                    else if(pro->getMembers(user->getID(),Role::Admin)==true){
                                        if(role=="Member")
                                        {
                                            pro->setMembers(id,Role::Member);
                                        }
                                        return;
                                    }

                                    socket->write("4012");
                                    return;
                            }

                        }

                        }
                }
            }

    }//QString command = "MEMBERPRO " +username +" "+member_us +" { "+proname +" } { "+orgname +" }\n";
    else if(buffer=="MEMBERPRO")
    {
            QString username,proname,orgname,m;
            stream>>buffer;
            username = buffer;
            stream>>buffer;
            m = buffer;
            stream >> buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                proname += buffer + " ";
                stream >> buffer;
            }
            proname.removeLast();
            stream >> buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                orgname += buffer + " ";
                stream >> buffer;
            }
            orgname.removeLast();
            for(auto user:users){
                if(username==user->Username())
                {
                    for (auto x:user->Organizations())
                        if(x->name()==orgname)
                        {
                        for(auto pro:x->Projects())
                        {
                            if(pro->name()==proname)
                            {

                                    int id;
                                    for(auto u:users){
                                        if(u->Username()==m){
                                            id=u->getID();
                                        }
                                    }
                                    if(pro->getMembers(user->getID(),Role::Owner)==true)
                                    {

                                        if(pro->getMembers(id,Role::Admin)==true)
                                        {
                                            pro->removeMember(id);

                                            return;

                                        }
                                        else if(pro->getMembers(id,Role::Member)==true)
                                        {
                                            pro->removeMember(id);
                                            return;
                                        }

                                    }
                                    else if(pro->getMembers(user->getID(),Role::Admin)==true){
                                        if(pro->getMembers(id,Role::Member)==true)
                                        {
                                            pro->removeMember(id);

                                            return;
                                        }

                                    }
                                    socket->write("4012");
                                    return;
                            }

                        }

                        }
                }
            }
    }
    //QString command = "PROSTATUS " +username+" "+ value +" { "+proname +" } { "+orgname +" }\n";
    else if(buffer=="PROSTATUS")
    {
            QString username,proname,orgname,value;
            stream>>buffer;
            username = buffer;
            stream>>buffer;
            value = buffer;
            stream >> buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                proname += buffer + " ";
                stream >> buffer;
            }
            proname.removeLast();
            stream >> buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                orgname += buffer + " ";
                stream >> buffer;
            }
            orgname.removeLast();
            for(auto user:users){
                if(username==user->Username())
                {
                    for (auto x:user->Organizations())
                        if(x->name()==orgname)
                        {
                        for(auto pro:x->Projects())
                        {
                            if(pro->name()==proname)
                            {


                                    if(pro->getMembers(user->getID(),Role::Owner)==true)
                                    {

                                        pro->setstatus(value);
                                        QString response= "PROSTATUS ";
                                        response +=value;
                                        socket->write(response.toUtf8());
                                        socket->flush();
                                        return;

                                    }
                                    socket->write("4012");
                                    return;
                            }

                        }

                        }
                }
            }
    }
    else if(buffer=="DESCRIPTIONTEAM")
    {
            QString username, name;
            stream >> buffer;
            username = buffer;
            stream >> buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                name += buffer + " ";
                stream >> buffer;
            }
            name.removeLast();
            for(auto user:users){
                if(username==user->Username())
                {
                    for (auto x:user->Teams())
                    {
                        if(x->getName()==name)
                        {
                        QString des=x->getDescription();
                        QString response= "DESCTEAM";
                        response += " { "+des+" }";
                        response+=" \n";
                        socket->write(response.toUtf8());
                        socket->flush();
                        }
                    }

                }
            }

    }
    else if(buffer=="EDITEAM")
    {
            QString username,orgname,lastname, name, des;
            stream >> buffer;
            username = buffer;
            stream >> buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                lastname += buffer + " ";
                stream >> buffer;
            }
            lastname.removeLast();
            stream >> buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                orgname += buffer + " ";
                stream >> buffer;
            }
            orgname.removeLast();
            stream >> buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                name += buffer + " ";
                stream >> buffer;
            }
            name.removeLast();
            stream >> buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                des += buffer + " ";
                stream >> buffer;
            }
            des.removeLast();
            qDebug() << lastname << name << des;
            for(auto user:users){
                if(username==user->Username())
                {
                    qDebug() << "user found";
                    for (auto x:user->Organizations())
                    {

                        if(x->name()==orgname)
                        qDebug() << "org found";
                        {
                        qDebug() << x->members();
                        qDebug() << x->getMembers(user->getID(),Role::Owner);
                        for(auto pro:user->Teams())
                        {
                            if(pro->getMembers(user->getID(),Role::Owner) || pro->getMembers(user->getID(),Role::Admin))
                            {
                                    pro->setName(name);
                                    pro->setDescription(des);
                                    QString response= "STATUSTEAM ";
                                    response += " { "+name +" } { " + des +" }\n";
                                    socket->write(response.toUtf8());
                                    socket->flush();
                                    return;
                            }

                            socket->write("4012");
                            return;
                        }

                        }
                    }

                }
            }

    }
    else if(buffer=="DELETETEAM")
    {
            QString username , proname , orgname;
            stream >> buffer;
            username = buffer;
            stream >> buffer;
            buffer == "{";
            stream >> buffer;
            while (buffer != "}") {
                proname += buffer + " ";
                stream >> buffer;
            }
            proname.removeLast();
            stream >> buffer;
            buffer == "{";
            stream >> buffer;
            while (buffer != "}") {
                orgname += buffer + " ";
                stream >> buffer;
            }
            orgname.removeLast();
            for(auto user:users){
                if(username==user->Username())
                {
                    qDebug() <<"user found";
                    for (auto x:user->Organizations())
                        if(x->name()==orgname)
                        {
                        qDebug() <<"org found";
                        qDebug() <<x->getMembers(user->getID(),Role::Owner);
                        if(x->getMembers(user->getID(),Role::Owner)==true ||x->getMembers(user->getID(),Role::Admin)==true )
                        {
                            for(auto pro:user->Teams())
                            {
                                    delete pro;
                                    user->Teams().removeAll(pro);
                                    x->Teams().removeAll(pro);
                            }
                            QString result ="LISTTEAM";
                            for (auto pro:user->Teams())
                            {
                                    result+=" { "+pro->getName()+" }";
                            }
                            result+=" \n";
                            socket->write(result.toUtf8());
                            return;
                        }
                        socket->write("4012");
                        return;
                        }
                }
            }
    }
    else if(buffer=="ROLETEAM")
    {
            QString username,role,proname,orgname, member_username;
            stream>>buffer;
            username = buffer;
            stream>>buffer;
            member_username = buffer;
            stream>>buffer;
            role = buffer;
            stream >> buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                proname += buffer + " ";
                stream >> buffer;
            }
            proname.removeLast();
            stream >> buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                orgname += buffer + " ";
                stream >> buffer;
            }
            orgname.removeLast();
            for(auto user:users){
                if(username==user->Username())
                {
                    for (auto x:user->Organizations())
                        if(x->name()==orgname)
                        {
                        for(auto pro:x->Teams())
                        {
                            if(pro->getName()==proname)
                            {
                                    int id;
                                    for(auto u:users){
                                        if(u->Username()==member_username){
                                            id=u->getID();
                                        }
                                    }
                                    if(pro->getMembers(user->getID(),Role::Owner)==true)
                                    {

                                        if(role=="Member")
                                        {
                                            pro->setMembers(id,Role::Member);

                                        }
                                        if(role=="Admin")
                                        {
                                            pro->setMembers(id,Role::Admin);
                                        }
                                        return;
                                    }
                                    else if(pro->getMembers(user->getID(),Role::Admin)==true){
                                        if(role=="Member")
                                        {
                                            pro->setMembers(id,Role::Member);
                                        }
                                        return;
                                    }

                                    socket->write("4012");
                                    return;
                            }

                        }

                        }
                }
            }

    }
    else if(buffer=="MEMBERTEAM")
    {
            QString username,proname,orgname,m;
            stream>>buffer;
            username = buffer;
            stream>>buffer;
            m = buffer;
            stream >> buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                proname += buffer + " ";
                stream >> buffer;
            }
            proname.removeLast();
            stream >> buffer;
            buffer = "{";
            stream >> buffer;
            while (buffer != "}") {
                orgname += buffer + " ";
                stream >> buffer;
            }
            orgname.removeLast();
            for(auto user:users){
                if(username==user->Username())
                {
                    for (auto x:user->Organizations())
                        if(x->name()==orgname)
                        {
                        for(auto pro:x->Teams())
                        {
                            if(pro->getName()==proname)
                            {

                                    int id;
                                    for(auto u:users){
                                        if(u->Username()==m){
                                            id=u->getID();
                                        }
                                    }
                                    if(pro->getMembers(user->getID(),Role::Owner)==true)
                                    {

                                        if(pro->getMembers(id,Role::Admin)==true)
                                        {
                                            pro->removeMember(id);

                                            return;

                                        }
                                        else if(pro->getMembers(id,Role::Member)==true)
                                        {
                                            pro->removeMember(id);
                                            return;
                                        }

                                    }
                                    else if(pro->getMembers(user->getID(),Role::Admin)==true){
                                        if(pro->getMembers(id,Role::Member)==true)
                                        {
                                            pro->removeMember(id);

                                            return;
                                        }

                                    }
                                    socket->write("4012");
                                    return;
                            }

                        }

                        }
                }
            }
    }
}
