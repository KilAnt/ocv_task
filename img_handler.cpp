#include "img_handler.h"

img_handler::img_handler(QObject *parent) : QObject(parent)
{

}

img_handler::~img_handler()
{

}

void img_handler::load(QString name, QString path)
{
    Mat img;
    img = imread(path.toStdString(), IMREAD_COLOR);
    if(img.empty()) {
            qDebug() << "Error: the image has been incorrectly loaded." << Qt::endl;
    }else {
        map.insert(name, img);
    }
}

void img_handler::save(QString name, QString path)
{
    if(!map.keys().contains(name)){
        qDebug() << "Error: Image not found." << Qt::endl;
    }else {
        imwrite(path.toStdString(), map.find(name).value());
    }
}

void img_handler::res(QString from_name, QString to_name, quint16 width, quint16 heigth)
{
    if(!map.keys().contains(from_name)){
        qDebug() << "Error: Image not found." << Qt::endl;
    }else {
        Mat img_res;
        resize(map.find(from_name).value(), img_res, Size(width, heigth));
        map.insert(to_name, img_res);
//        display(to_name);
    }
}

void img_handler::blr(QString from_name, QString to_name, quint16 size)
{

    if(!map.keys().contains(from_name)){
        qDebug() << "Error: Image not found." << Qt::endl;
    }else {
        Mat img_blur;
        blur(map.find(from_name).value(), img_blur, Size(size, size));
        map.insert(to_name, img_blur);
//        display(to_name);
    }
}

void img_handler::display(QString name)
{
    namedWindow("OpenCV window");
    imshow("OpenCV window", map.find(name).value());
    waitKey(0);
}
