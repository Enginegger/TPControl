#ifndef FILTERS_H
#define FILTERS_H

#include <QWidget>

namespace Ui {
class Filters;
}

class Filters : public QWidget
{
    Q_OBJECT

public:
    explicit Filters(QWidget *parent = nullptr);
    ~Filters();

    void create();
private:
    Ui::Filters *ui;

};

#endif // FILTERS_H
