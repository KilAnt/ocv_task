#include <QCoreApplication>
#include <highgui.hpp>
#include <types_c.h>
#include <mat.hpp>
//#include <imgcodecs/legacy/constants_c.h>
//#include <imgcodecs/imgcodecs_c.h>

#include <stdlib.h>
#include <stdio.h>
#include <iostream>


using namespace cv;
using namespace std;

IplImage* image = 0;
IplImage* src = 0;

int main(int argc, char *argv[])
{
//    QString filename = "image.jpg";
//    QString file_path;
//    QTextStream cout(stdout);
//    QTextStream cin(stdin);
    // получаем картинку
//    cout<<"Enter your image directory"<< &Qt::endl(cout);
//    cin << file_path;
//    qDebug()<<"ooo";
//    image = cvLoadImage(filename,1);

//    return 0;
    QCoreApplication a(argc, argv);
    QTextStream out(stdout);

    QTextStream inp(stdin);
    QString str = "";
    inp >> str;
    out <<  str << Qt::endl;

    return a.exec();

}
