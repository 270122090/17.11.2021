#include "addmember.h"
#include "ui_addmember.h"

addmember::addmember(AllMembers*& newMember, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addmember)
{
    ui->setupUi(this);
}

addmember::~addmember()
{
    delete ui;
}
