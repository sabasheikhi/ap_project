#include "security.h"
#include <QString>
#include <QCryptographicHash>

bool passwordIsStrong(const QString &password)
{
    bool containsUppercase = false, containsLowercase = false, containsNumber = false, containsSpecialChar = false;
    for (auto iterator = 0; iterator < password.length(); iterator++) {
        if (password[iterator].isLetter()) {
            if (password[iterator].isUpper())
                containsUppercase = true;
            else
                containsLowercase = true;
        }
        else if (password[iterator].isNumber())
            containsNumber = true;
        else if (password[iterator] == '@' || password[iterator] == '#' || password[iterator] == '$')
            containsSpecialChar = true; // be joz ina dige che character khasi hst?
        if (containsLowercase && containsUppercase && containsNumber && containsSpecialChar)
            break;
    }
    if ((password.length() >= 8) && containsUppercase && containsLowercase && containsNumber && containsSpecialChar)
        return true;
    return false;
}


QString hashPassword(const QString password)
{
    // add salt to password => should be different for each user...
    QByteArray hashedString = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);
    QString hexHashedString = QString(hashedString.toHex());
    return hexHashedString;
}


bool passwordsAreTheSame(const QString savedPassword, const QString enteredPassword)
{
    return (savedPassword == enteredPassword);
}
