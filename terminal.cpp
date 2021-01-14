#include "terminal.h"

terminal::terminal(QObject *parent) : QObject(parent)
{

}

terminal::~terminal()
{

}

void terminal::start()
{
    QString answer;
    out("Enter your image directory");
    inp(&answer);
    out(answer);
}

void terminal::out(QString string)
{
    QTextStream out_text(stdout);
    out_text<<string<<Qt::endl;
}

QString terminal::inp(QString *string)
{
    QTextStream inp_text(stdin);
    inp_text>>*string;
    return *string;
}
