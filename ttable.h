#ifndef TTABLE_H
#define TTABLE_H

#include <QWidget>


namespace Ui {
class TTable;
}

/**
 * @brief The TTable class отображает состояние ТП. Может у себя менять состояние, если оператор за ПК созвонился с бригадой по ТП.
 * общается с checkParams, topPanel
 * В checkParams передаёт команды (че у каких ТП спросить)
 */
class TTable : public QWidget
{
    Q_OBJECT

public:
    explicit TTable(QWidget *parent = nullptr);
    ~TTable();
    void create();

private:
    Ui::TTable *ui;

    // # attributes
    QStringList headers;

private slots:
//    void onCellClicked(int row, int col);
    /**
     * @brief hub_clicksProcess обрабатывает все клики по таблице и делает ВыВоДы
     * @param row
     * @param col
     */
    void hub_clicksProcess(int row, int col);
};

#endif // TTABLE_H
