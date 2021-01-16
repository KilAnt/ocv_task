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

    void load(QString name, QString path);
    void save(QString name, QString path);
    void res(QString from_name, QString to_name, quint16 width, quint16 heigth);
    void blr(QString from_name, QString to_name, quint16 size);
signals:
private:
    QMap<QString, Mat> map;
    void display(QString name);
};

#endif // IMG_HANDLER_H
