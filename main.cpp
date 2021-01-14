#include <QCoreApplication>
#include "terminal.h"
#include "img_handler.h"


int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);
    terminal t;
    img_handler img_h;
    //    t.start();

    return a.exec();

}
