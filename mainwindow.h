#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "filters.h"
#include "ttable.h"
#include "toppanel.h"
#include "connecttp.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void create();

public slots:
//    void onTtable_CellClicked(int row, int col);

private:
    Ui::MainWindow *ui;

    TopPanel topPanel;
    TTable ttable;
    Filters filters;

    ConnectTP connectTP;
};
#endif // MAINWINDOW_H
