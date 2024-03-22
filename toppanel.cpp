#include "toppanel.h"
#include "ui_toppanel.h"

#include "history.h"

TopPanel::TopPanel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TopPanel)
{
    ui->setupUi(this);
}

TopPanel::~TopPanel()
{
    delete ui;
}

void TopPanel::create()
{

}

void TopPanel::on_btn_checkHistory_clicked()
{
    History* historyWindow = new History;

}
