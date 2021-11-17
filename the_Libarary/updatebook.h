#ifndef UPDATEBOOK_H
#define UPDATEBOOK_H

#include <QDialog>

namespace Ui {
class updatebook;
}

class updatebook : public QDialog
{
    Q_OBJECT

public:
    explicit updatebook(QWidget *parent = nullptr);
    ~updatebook();

private:
    Ui::updatebook *ui;
};

#endif // UPDATEBOOK_H
