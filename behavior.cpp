#include "behavior.h"

behavior::behavior(QObject *parent) : QObject(parent)
{
    while (1) {
        user_answer = t.start();
        detect_command(user_answer);
    }
}

behavior::~behavior()
{

}

template<typename First, typename ... T>
bool behavior::is_in(First &&first, T && ... t)
{
    return ((first == t) || ...);
}

void behavior::detect_command(QString string)
{
    QString name, name2, path, sz, w, h;
    list = string.split(" ");
    QString command = list.takeFirst();
    if(is_in(command, "store", "s")){
        QString name, path;
        name = list.takeFirst();
        path = list.takeFirst();
        img_h.save(name, path);
    }else if (is_in(command, "load", "ld")) {
        name = list.takeFirst();
        path = list.takeFirst();
        img_h.load(name, path);
    }else if (is_in(command, "blur")) {
        name = list.takeFirst();
        name2 = list.takeFirst();
        sz = list.takeFirst();
        img_h.blr(name, name2, sz.toInt());
    }else if (is_in(command, "resize")) {
        name = list.takeFirst();
        name2 = list.takeFirst();
        w = list.takeFirst();
        h = list.takeFirst();
        img_h.res(name, name2, w.toInt(), h.toInt());
    }else if (is_in(command, "help", "h")) {
        list_of_com();
    }else if (is_in(command, "exit", "quit", "q")) {
        exit(0);
    }else{
        t.out("Unknown command, call 'help' to see available commands.");
    }
}

void behavior::list_of_com()
{
    t.out("List of available commands:");
    t.out("=========================================================================");
    t.out("load, ld :<name> - image name, by : Uploading a picture in jpg format");
    t.out("         :name it is available in :");
    t.out("         :other commands          :");
    t.out("         :<filename> - name of the:");
    t.out("         :file to load            :");
    t.out("=========================================================================");
    t.out("store, s :<name> - image name     : Saving an image in jpg format");
    t.out("         :<filename> - name of the:");
    t.out("         :file to save            :");
    t.out("=========================================================================");
    t.out("blur     :<from_name> - image name: Smoothing the image");
    t.out("         :<to_name> - image name  :");
    t.out("         :<size> - size of blurred:");
    t.out("         :area                    :");
    t.out("=========================================================================");
    t.out("resize   :<from_name> - image name: Image resizing");
    t.out("         :<to_name> - image name  :");
    t.out("         :<new_width>             :");
    t.out("         :<new_height>            :");
    t.out("=========================================================================");
    t.out("help     :                        : Outputs help about avialable commands");
    t.out("=========================================================================");
    t.out("exit,    :                        : Exit");
    t.out("quit, q  :                        :");
    t.out("=========================================================================");
}
