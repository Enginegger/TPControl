#include "ttable.h"
#include "ui_ttable.h"

#include <array>
#include <iostream>
#include <QDebug>

using namespace std;

TTable::TTable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TTable)
{
    ui->setupUi(this);
    connect(ui->tableWidget, SIGNAL(cellClicked(int, int)), this,
            SLOT(hub_clicksProcess(int, int)));


    // # def headers
    headers  << "Статус" << "Дверь ТП" << "Нас.п.," << "ПП" <<
                       "Imin" << "Icur" << "Imax" <<
                       "Umin" << "Ucur" << "Umax" <<
                       "Tmin" << "Tcur" << "Tmax";
}

TTable::~TTable()
{
    delete ui;
}

void TTable::create()
{
    // # headers
//    ui->tableWidget->verticalHeaderItem(5)->setText("<html>Макс.<br>Ток</html>");


    // # get headers
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    // # настройка ширины табличек
    // ## def
    const short colsWideAmount = 2;
    short colsWide[colsWideAmount]= {2, 3};
    short colsSizes[2] = {50, 150};

    short colSpecMax = colsWide[colsWideAmount-1];
    short curSize = colsSizes[0];

    // ## alg
    for (short i = 0; i < ui->tableWidget->columnCount(); ++i)
    {
        curSize = colsSizes[0];
        if (i <= colsWide[1])
            if ((i == colsWide[0]) || (i == colsWide[1]))
                curSize = colsSizes[1];
        ui->tableWidget->setColumnWidth(i, curSize);

    }
}


void TTable::hub_clicksProcess(int row, int col)
{
    qDebug() << "Clicked on cell: " << row << ", " << col;


}
