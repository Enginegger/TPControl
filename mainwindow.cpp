#include "mainwindow.h"
#include "ui_mainwindow.h"



#include <QTableWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    connect(&ttable, SIGNAL(cellClicked(int, int)), &connectTP,
//            SLOT(onTtable_CellClicked(int, int)));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::create()
{
    filters.create();
    topPanel.create();
    ttable.create();

    //                        *widget, row, col, rowspan, colspan
    ui->gridLayout->addWidget(&filters, 0, 0, 2, 1);
    ui->gridLayout->addWidget(&topPanel, 0, 1, 1, 1);
    ui->gridLayout->addWidget(&ttable, 1, 1, 1, 1);














//    ui->gridLayout->addWidget();

    // Установка подписей для колонок
   /* QStringList headers;
    headers << "Общее состояние" << "Дверь в ТП" << "Связь нас.п." <<
               "Связь ТП" << "Нас. пункт, ПП" <<
               "Макс. ток" << "Текущ. ток" << "Мин. ток" <<
               "Макс. напряжение" << "Текущ. напряжение" << "Мин. напряжение" <<
               "Макс. температура" << "Текущ. температура" << "Мин. температура";

    // Создание таблицы
    QTableWidget *tableWidget = new QTableWidget(5, headers.size());

    tableWidget->setHorizontalHeaderLabels(headers);

    // Настройка ячеек    
    QTableWidgetItem *item = new QTableWidgetItem("Ячейка 2");
    item->setBackgroundColor(Qt::red); // Устанавливаем цвет фона для ячейки
    item->setTextColor(Qt::white); // Устанавливаем цвет текста
    tableWidget->setItem(0, 1, item);

    // Объединение ячеек
    tableWidget->setSpan(0, 2, 3, 1); // Объединяем ячейки (0, 2), (0, 3) в одну большую ячейку

    // Обработка клика по ячейке
    connect(tableWidget, &QTableWidget::cellClicked, [=](int row, int column) {
        QTableWidgetItem *clickedItem = tableWidget->item(row, column);
        if (clickedItem) {
            // Логика обработки клика по ячейке
            // Можно менять цвет ячейки, текст, запускать анимации и т.д.
        }
    });

    // Добавление таблицы на форму
    ui->gridLayout->addWidget(tableWidget)*/;
}

//void MainWindow::onTtable_CellClicked(int row, int col)
//{

//}

