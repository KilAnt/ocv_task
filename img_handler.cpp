#include "img_handler.h"

img_handler::img_handler(QObject *parent) : QObject(parent)
{
        const QString filename = "image.jpg";
        QString file_path;
//         получаем картинку
        img = imread(filename.toStdString(), IMREAD_COLOR);
        if(img.empty()) {
                qDebug() << "Error: the image has been incorrectly loaded." << Qt::endl;
            }
        namedWindow("My first OpenCV window");
        imshow("My first OpenCV window", img);
        waitKey(0);

}

img_handler::~img_handler()
{

}
