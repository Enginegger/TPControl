#ifndef TOPPANEL_H
#define TOPPANEL_H

#include <QWidget>

namespace Ui {
class TopPanel;
}

class TopPanel : public QWidget
{
    Q_OBJECT

public:
    explicit TopPanel(QWidget *parent = nullptr);
    ~TopPanel();

    void create();

private slots:
    void on_btn_checkHistory_clicked();

private:
    Ui::TopPanel *ui;
};

#endif // TOPPANEL_H
