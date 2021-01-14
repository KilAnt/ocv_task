#ifndef IMG_HANDLER_H
#define IMG_HANDLER_H

#include <QObject>
#include <QDebug>

#include <highgui.hpp>
#include <types_c.h>
#include <mat.hpp>
#include <imgproc.hpp>

using namespace cv;



class img_handler : public QObject
{
    Q_OBJECT
public:
    explicit img_handler(QObject *parent = nullptr);
    virtual ~img_handler();
signals:
private:
    IplImage* image = 0;
    IplImage* src = 0;
    Mat img;
    Mat img_out;
};

#endif // IMG_HANDLER_H
