#include "filters.h"
#include "ui_filters.h"

Filters::Filters(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Filters)
{
    ui->setupUi(this);
}

Filters::~Filters()
{
    delete ui;
}

void Filters::create()
{

}
