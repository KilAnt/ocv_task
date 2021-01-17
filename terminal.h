#ifndef TERMINAL_H
#define TERMINAL_H

#include <QObject>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

#include <QTextStream>

using namespace std;


///
/// \brief The terminal class - Realizes the input/output of data with the terminal.
///
class terminal : public QObject
{
    Q_OBJECT
public:
    explicit terminal(QObject *parent = nullptr);
    virtual ~terminal();
    ///
    /// \brief start - Requesting a user action.
    /// \return - User input.
    ///
    QString start();
    ///
    /// \brief out - Text output to the terminalю
    /// \param string - Text output.
    ///
    void out(QString string);
    ///
    /// \brief inp - Text input to the terminal
    /// \param string - Text input
    /// \return - Return text input.
    ///
    QString inp(QString *string);
signals:

private:
};

#endif // TERMINAL_H
