#ifndef HISTORY_H
#define HISTORY_H

#include <QMainWindow>

namespace Ui {
class History;
}

/**
 * @brief The History class отображает (в отдельном окне) графики истории параметров ТП (мб много ТП за раз)
 * общается с TopPanel и SQLite БД. От БД получает параметры ТП, а отдаёт команды на получение.
 * От TopPanel получает команды на получение.
 */
class History : public QMainWindow
{
    Q_OBJECT

public:
    explicit History(QWidget *parent = nullptr);
    ~History();

public slots:
    /**
     * @brief getTPparams - заготовка под получение SQL запросов
     */
    void getTPparams();

private:
    Ui::History *ui;
};

#endif // HISTORY_H
