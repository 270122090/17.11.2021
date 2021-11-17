#include "updatebook.h"
#include "ui_updatebook.h"

updatebook::updatebook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::updatebook)
{
    ui->setupUi(this);
}

updatebook::~updatebook()
{
    delete ui;
}
