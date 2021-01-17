#ifndef BEHAVIOR_H
#define BEHAVIOR_H

#include <QObject>
#include "terminal.h"
#include "img_handler.h"
#include <cstdlib>

///
/// \brief The behavior class - Implements the basic logic of the program
///
class behavior : public QObject
{
    Q_OBJECT
public:
    explicit behavior(QObject *parent = nullptr);
    virtual ~behavior();
signals:
private:
    ///
    /// \brief t - An instance of the terminal class
    ///
    terminal t;
    ///
    /// \brief img_h - An instance of the img_handler class
    ///
    img_handler img_h;
    ///
    /// \brief user_answer - Variable in which user input is stored
    ///
    QString user_answer;
    ///
    /// \brief detect_command - Recognizes the value of user commands
    /// \param string - user input
    ///
    void detect_command(QString string);
    ///
    /// \brief list - Stores user input divided into individual commands
    ///
    QStringList list;
    template<typename First, typename ... T>
    ///
    /// \brief is_in - It realizes the comparison of one element with N other elements.
    /// \param first - The basic element
    /// \param t - Parameter to compare
    /// \return - true or false
    ///
    bool is_in(First &&first, T && ... t);
    ///
    /// \brief list_of_com - Outputs to the terminal a list of all commands
    ///
    void list_of_com();
};

#endif // BEHAVIOR_H
