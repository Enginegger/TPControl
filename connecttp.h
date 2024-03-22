#ifndef CONNECTTP_H
#define CONNECTTP_H

#include <QObject>

/**
 * @brief The CheckParams class общается с аппаратами ТПконтроль, выдаёт параметры для отображения в Table
 */
class ConnectTP : public QObject
{
    Q_OBJECT
public:
    explicit ConnectTP(QObject *parent = nullptr);




signals:

};

#endif // CONNECTTP_H
