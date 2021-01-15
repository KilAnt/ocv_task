#include "behavior.h"

behavior::behavior(QObject *parent) : QObject(parent)
{
    user_answer = t.start();
}

behavior::~behavior()
{

}

void behavior::detect_command(QString command)
{
    if(command == "store" || "s"){

    }else if (command == "load" || "ld") {

    }else if (command == "blur") {

    }else if (command == "resize") {

    }else if (command == "help" || "h") {

    }else if (command == "exit" || "quit" || "q") {

    }
}
