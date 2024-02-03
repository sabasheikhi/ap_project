#ifndef COMMENT_H
#define COMMENT_H

#include <QObject>
#include <QWidget>

class Comment : public QObject
{
    Q_OBJECT
public:
    explicit Comment(QObject *parent = nullptr);


signals:
};

#endif // COMMENT_H
