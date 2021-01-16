#ifndef BEHAVIOR_H
#define BEHAVIOR_H

#include <QObject>
#include "terminal.h"
#include "img_handler.h"
#include <cstdlib>


class behavior : public QObject
{
    Q_OBJECT
public:
    explicit behavior(QObject *parent = nullptr);
    virtual ~behavior();
signals:
private:
    terminal t;
    img_handler img_h;
    QString user_answer;
    void detect_command(QString string);
    QStringList list;
    template<typename First, typename ... T>
    bool is_in(First &&first, T && ... t);
    void list_of_com();
};

#endif // BEHAVIOR_H
