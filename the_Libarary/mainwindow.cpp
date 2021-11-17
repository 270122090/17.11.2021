#include <QFile>
#include <QTextStream>
#include <QListWidgetItem>
#include <QListWidget>
#include <QDate>
#include <QtCore>
#include <QMessageBox>


#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "addbook.h"
//#include "updatebook.h"


#include "addmember.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->btnAddMember, &QPushButton::clicked, this, &MainWindow::add_a_member);
}

MainWindow::~MainWindow()
{
    delete ui;


}


void MainWindow::add_a_member()
{
        AllMembers* NewMember=nullptr;
        addmember addmember(NewMember, nullptr);
        addmember.setModal(true);
        addmember.exec();

        // getting data from Vector and displaying in members screen
        if (NewMember != nullptr)
        {
            memberList.push_back(NewMember);
            ui->listMember->addItem("     " + NewMember->getMemberName()+"                                          " + NewMember->getPhoneNumber()); // space left delibrately
        }

}

