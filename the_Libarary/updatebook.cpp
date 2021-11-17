#include <QFileDialog>
#include <QMessageBox>
#include <QDate>
#include <QString>

#include "updatebook.h"
#include "ui_updatebook.h"
#include <QLineEdit>


updatebook::updatebook(AllBooks* updateBook, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::updatebook)
{
    ui->setupUi(this);
    this->updateBook= updateBook;


    ui->boxnewStatus->addItem("Reserved");
    ui->boxnewStatus->addItem("Lost/Damaged");

    if (updateBook!= nullptr)
    {
        ui->lbluBookTitle->setText(updateBook->gettitle());
        ui->lbluStatus->setText(updateBook->getstatus());
        ui->lbludd->setText(updateBook->getdd());
      ;


        QPixmap pixmap(updateBook->getimage());

    }

    connect(ui->btnupdatebook, &QPushButton::clicked, this,&updatebook::Bookupdate);

}

updatebook::~updatebook()
{
    delete ui;
}


// this is not pusing the
void updatebook:: Bookupdate()
{
    QDate cd = ui->DateUpdate->currentd;
    QDate nd = QDate::currentDate();
    QString status = ui->boxnewStatus->currentText();

    if(nd<=cd)
    {

       QMessageBox::warning(this,"Wrong Date","New Due date cant be earlier than today's date");

    }
    else
    {
        updateBook->setstatus(status);
        updateBook->setdd(cd.toString());
        this->close();

    }
}
