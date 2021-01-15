#ifndef BEHAVIOR_H
#define BEHAVIOR_H

#include <QObject>
#include "terminal.h"
#include "img_handler.h"


class behavior : public QObject
{
    Q_OBJECT
public:
    explicit behavior(QObject *parent = nullptr);
    virtual ~behavior();
signals:
private:
    terminal t;
//    img_handler img_h;
    QString user_answer;
    void detect_command(QString command);
};

#endif // BEHAVIOR_H
