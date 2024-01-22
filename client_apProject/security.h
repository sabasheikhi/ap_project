#ifndef SECURITY_H
#define SECURITY_H
#include <QString>
#include <QCryptographicHash>

bool passwordIsStrong(const QString &password);
QString hashPassword(const QString password);
bool passwordsAreTheSame(const QString savedPassword, const QString enteredPassword);

#endif // SECURITY_H
