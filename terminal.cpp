#include "terminal.h"

terminal::terminal(QObject *parent) : QObject(parent)
{

}

terminal::~terminal()
{

}

QString terminal::start()
{
    QString answer;
    out("Enter command or call 'help'");
    inp(&answer);
    return answer;
}

void terminal::out(QString string)
{
    QTextStream out_text(stdout);
    out_text<<string<<Qt::endl;
}

QString terminal::inp(QString *string)
{
    QTextStream inp_text(stdin);
    *string = inp_text.readLine();
    return *string;
}
