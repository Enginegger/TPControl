#include "history.h"
#include "ui_history.h"

History::History(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::History)
{
    ui->setupUi(this);
}

History::~History()
{
    delete ui;
}


void History::getTPparams()
{
//    // Подготовка SQL-запроса с параметрами
//    QSqlQuery query;
//    query.prepare("SELECT * FROM myTable WHERE id = :id");

//    // Установка значения параметра
//    query.bindValue(":id", 123);

//    // Выполнение запроса
//    if (query.exec()) {
//        // Обработка результатов запроса
//        while (query.next()) {
//            // Получение данных из результата запроса
//            int id = query.value("id").toInt();
//            QString name = query.value("name").toString();
//            // Дальнейшая обработка данных
//        }
//    } else {
//        // Обработка ошибок выполнения запроса
//        qDebug() << "Error executing query: " << query.lastError().text();
//    }

}
