#ifndef CMDSTTABLE_H
#define CMDSTTABLE_H

#include <QDateTime>
#include <array>
#include <iostream>

struct cmd_FromTtable_ForConnectTP
{
    int id_town,
        id_TP;
    // et cetera
};

struct TPpars_FromConnectTP_ForTtable
{
    // # предполагается, что назв нас.пп. и ТПушек есть в ttable
    int id_town,
        id_TP;
    bool isTPdoorOpen;
    QDateTime TPparamsUpdated;

    // {min, current, max}
    std::array <float, 3>
    amperage,
    voltage,
    temperature;
};

#endif // CMDSTTABLE_H
