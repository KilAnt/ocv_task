#ifndef TERMINAL_H
#define TERMINAL_H

#include <QObject>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

#include <QTextStream>

using namespace std;



class terminal : public QObject
{
    Q_OBJECT
public:
    explicit terminal(QObject *parent = nullptr);
    virtual ~terminal();
    void help();
    QString start();
    void out(QString string);
    QString inp(QString *string);
signals:

private:
};

#endif // TERMINAL_H
