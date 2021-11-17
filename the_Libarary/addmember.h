#ifndef ADDMEMBER_H
#define ADDMEMBER_H

#include <QDialog>

#include "allmembers.h"

namespace Ui {
class addmember;
}

class addmember : public QDialog
{
    Q_OBJECT

public:
    explicit addmember(AllMembers*& newMember, QWidget *parent = nullptr);
    ~addmember();

private:
    Ui::addmember *ui;

    AllMembers** newmembers;
};

#endif // ADDMEMBER_H
