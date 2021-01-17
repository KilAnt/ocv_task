#ifndef IMG_HANDLER_H
#define IMG_HANDLER_H

#include <QObject>
#include <QDebug>

#include <highgui.hpp>
#include <types_c.h>
#include <mat.hpp>
#include <imgproc.hpp>

using namespace cv;


///
/// \brief The img_handler class - Implements methods of working with the image
///
class img_handler : public QObject
{
    Q_OBJECT
public:
    explicit img_handler(QObject *parent = nullptr);
    virtual ~img_handler();
    ///
    /// \brief load - Load image
    /// \param name - The name of the image used in the process of the program
    /// \param path - File location in the system
    ///
    void load(QString name, QString path);
    ///
    /// \brief save - Save image in file
    /// \param name - The name of the image used in the process of the program
    /// \param path - File location in the system
    ///
    void save(QString name, QString path);
    ///
    /// \brief res - Resize image
    /// \param from_name - name source image
    /// \param to_name - name image after resize
    /// \param width
    /// \param heigth
    ///
    void res(QString from_name, QString to_name, quint16 width, quint16 heigth);
    ///
    /// \brief blr - Blur image
    /// \param from_name - name source image
    /// \param to_name - name image after blur
    /// \param size - blur size
    ///
    void blr(QString from_name, QString to_name, quint16 size);
signals:
private:
    ///
    /// \brief map - A container for storing uploaded images.
    /// The key is the name, the value is the path.
    ///
    QMap<QString, Mat> map;
    ///
    /// \brief display - Display picture in window. Use for debug.
    /// \param name - Name image.
    ///
    void display(QString name);
};

#endif // IMG_HANDLER_H
