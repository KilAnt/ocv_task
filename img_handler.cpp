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
        Size ksize;
        blur(img, img_out, Size(40,40));
        resize(img_out, img_out, Size(300, 300));
        namedWindow("My first OpenCV window");
        imshow("My first OpenCV window", img_out);
        waitKey(0);

}

img_handler::~img_handler()
{

}
