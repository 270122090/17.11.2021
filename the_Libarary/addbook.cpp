#include "addbook.h"
#include "ui_addbook.h"

#include <QMessageBox>
#include <QDir>
#include <QFileDialog>
#include <QTextEdit>
#include <QComboBox>

addbook::addbook(AllBooks*& newbook, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addbook)
{
    ui->setupUi(this);
}

addbook::~addbook()
{
    delete ui;
}
