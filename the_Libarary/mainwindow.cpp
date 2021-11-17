#include <QFile>
#include <QTextStream>
#include <QListWidgetItem>
#include <QListWidget>
#include <QDate>
#include <QtCore>
#include <QMessageBox>


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "allmembers.h"

#include "addmember.h"
#include "updatemember.h"

#include "addbook.h"
//#include "updatebook.h"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // ***************************************** M E M B E R S ********************************************* \\

    display_memberlist();
    ui->listMember->setCurrentRow(0);
    display_membersdetails();


    connect(ui->btnAddMember, &QPushButton::clicked, this, &MainWindow::add_a_member);
    connect(ui->btnEditMember, &QPushButton::clicked, this, &MainWindow::update_a_member);
    connect(ui->btnSearchBook, &QPushButton::clicked, this, &MainWindow::search_a_member);
    connect(ui->LoadMembersList,&QAction::triggered,this, &MainWindow::display_memberlist);
    connect(ui->listMember, &QListWidget::itemClicked, this, &MainWindow::display_membersdetails);

    // ***************************************** B O O K S ********************************************* \\


    display_booklist();
    ui->listMember->setCurrentRow(0);
    display_bookdetails();


    connect(ui->btnAddBook, &QPushButton::clicked,this, &MainWindow::add_a_Book);
    connect(ui->btnSearchBook, &QPushButton::clicked, this, &MainWindow:: search_a_Book);
    connect(ui->btnRemoveBook, &QPushButton::clicked, this, &MainWindow:: remove_a_Book);
    connect(ui->btnUpdateBook, &QPushButton::clicked, this, &MainWindow:: update_a_Book);
    connect(ui->LoadBookList, &QAction::triggered,this, &MainWindow::display_booklist);
    connect(ui->listBooks, &QListWidget::itemClicked, this, &MainWindow::display_bookdetails);


    // ***************************************** I S U E  B O O K S ********************************************* \\


}


MainWindow::~MainWindow()
{
    delete ui;
}


// ***************************************** M E M B E R S ********************************************* \\


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
            ui->listMember->addItem("     " + NewMember->getMemberName()+"     |     " + NewMember->getPhoneNumber()); // space left delibrately
        }



        // writing data to file
        QFile memberFile("members.txt");
        memberFile.open(QIODevice::WriteOnly|QIODevice::Append | QIODevice::Text);
        QTextStream out(&memberFile);
        for(int i=0;i<memberList.size();i++)
        {
            out << memberList.at(i)->getMemberName()<<",";
            out << memberList.at(i)->getPhoneNumber()<<",";
            out << memberList.at(i)->getEmail()<<",";
            out << memberList.at(i)->getBook1()<<",";
            out << memberList.at(i)->getBook2()<<",";
            out << memberList.at(i)->getBook3()<< Qt::endl;

        }
            out.flush();
            memberFile.close();

}


void MainWindow::update_a_member()
{
    int index =ui->listMember->currentRow();
        if (index >=0)
        {
            AllMembers* themember=memberList.at(index);
            if (themember !=nullptr)
                {
                updatemember updateamember(themember, nullptr);
                updateamember.exec();

                    //update ui

                    ui->lblMemberName->setText(themember->getMemberName());
                    ui->lblMemberNumber->setText(themember->getPhoneNumber());
                    ui->lblMemberEmail->setText(themember->getEmail());
                    ui->lblMemberBook1->setText(themember->getBook1());
                    ui->lblMemberBook2->setText(themember->getBook1());
                    ui->lblMemberBook3->setText(themember->getBook1());

                }
            QFile memberFile("members.txt");
            memberFile.open(QIODevice::WriteOnly|QIODevice::Text);
            QTextStream out(&memberFile);
            for(int i=0;i<memberList.size();i++)
            {
                out << memberList.at(i)->getMemberName()<<",";
                out << memberList.at(i)->getPhoneNumber()<<",";
                out << memberList.at(i)->getEmail()<<",";
                out << memberList.at(i)->getBook1()<<",";
                out << memberList.at(i)->getBook2()<<",";
                out << memberList.at(i)->getBook3()<< Qt::endl;

            }
                out.flush();
                memberFile.close();



        }
}

void MainWindow::display_memberlist()
{

    // open txt file and showing member details when program start up again
    QFile inputFile("members.txt");
    inputFile.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream in(&inputFile);

    while(!in.atEnd())
    {

        QString line = in.readLine();
        QStringList memberinfo = line.split(",");

        //handle list of products ui
        ui->listMember->addItem("     " +memberinfo.at(0)+"     |     "+memberinfo.at(1));


       AllMembers* membersinfo = new AllMembers (memberinfo.at(0), memberinfo.at(1),memberinfo.at(2), memberinfo.at(3), memberinfo.at(4), memberinfo.at(5));
        memberList.push_back(membersinfo);
    }
    in.flush();
    inputFile.close();
}

// linking UI labels to vector to display data.
void MainWindow::display_membersdetails()
{
    int index = ui->listMember->currentRow();
    if (index != -1)

    {
        AllMembers* currentmember = memberList.at(index);

            ui->lblMemberName->setText(currentmember->getMemberName());
            ui->lblMemberNumber->setText(currentmember->getPhoneNumber());
            ui->lblMemberEmail->setText(currentmember->getEmail());
            ui->lblMemberBook1->setText(currentmember->getBook1());
            ui->lblMemberBook2->setText(currentmember->getBook2());
            ui->lblMemberBook3->setText(currentmember->getBook3());

        }
}

void MainWindow::search_a_member()
{
    QString search=ui->txtSearchMember->text();

        if (search != "")
        {
            for (int i = 0; i < ui->listMember->count(); i++)
            {
                QListWidgetItem* user = ui->listMember->item(i);
                user->setBackground(Qt::transparent);
             }

                QList<QListWidgetItem *> list = ui->listMember->findItems(search, Qt::MatchContains);

             for(int i = 0; i < list.count(); ++i)
                {
                    QListWidgetItem * user = list.at(i);
                    user->setBackground(Qt::cyan);
                }
        }
}

// ***************************************** M E M B E R S ********************************************* \\

void MainWindow::add_a_Book()
{
    AllBooks* newBook = nullptr;
    addbook addabook(newBook, this);
    addabook.setModal(true);
    addabook.exec();

    if (newBook != nullptr)
    {
        booklist.push_back(newBook);
        ui->listBooks->addItem("     "+newBook->getid()+"     " +newBook->gettitle()+"   " + newBook->getauthor());
    }

    QFile bookfile("books.txt");
    bookfile.open(QIODevice::WriteOnly| QIODevice::Text);
    QTextStream out(&bookfile);
    for(int i=0;i<booklist.size();i++)
    {
        out << booklist.at(i)->gettitle()<<",";
        out << booklist.at(i)->getauthor()<<",";
        out << booklist.at(i)->getdewey()<<",";
        out << booklist.at(i)->getstatus()<<",";
        out << booklist.at(i)->getid()<<",";
        out << booklist.at(i)->getimage()<<",",
        out << booklist.at(i)->getdd()<< Qt::endl;

    }
        out.flush();
        bookfile.close();

}

void MainWindow::search_a_Book()
{

    QString search=ui->txtSearchBook->text();
    if (search != "")
    {
        for(int i = 0; i < ui->listBooks->count(); i++)
        {
            ui->listBooks->item(i)->setHidden(false);// found

        }
    }

    else
    {
        for(int i = 0; i < ui->listBooks->count(); i++)
        {
            QList<QListWidgetItem *> list = ui->listBooks->findItems(search, Qt::MatchContains);
            for(int i = 0; i < list.count(); ++i)
            {
            ui->listBooks->item(i)->setHidden(true); // not found
            }

        }
    }
}

void MainWindow::update_a_Book()
{
    int index =ui->listBooks->currentRow();
        if (index >=0)
        {
            AllBooks* thebook=booklist.at(index);
            if (thebook !=nullptr)
                {
//                thebook up(thebook, nullptr);
//                up.setModal(true);
//                up.exec();

                    //update ui

                    ui->lblBookTitle->setText(thebook->gettitle());
                    ui->lblAuthor->setText(thebook->getauthor());
                    ui->lblDewey->setText(thebook->getdewey());
                    ui->lblStatus->setText(thebook->getstatus());
                    ui->lbl_ID->setText(thebook->getid());
                    ui->lbldd->setText(thebook->getdd());
                    QPixmap pixmap(thebook->getimage());
                    ui->lblImage->setPixmap(pixmap);
                    ui->lblImage->setScaledContents(true);
                }
            QFile bookFile("books.txt");
            bookFile.open(QIODevice::WriteOnly|QIODevice::Append | QIODevice::Text);
            QTextStream out(&bookFile);
            for(int i=0;i<booklist.size();i++)
            {
                out << booklist.at(i)->gettitle()<<",";
                out << booklist.at(i)->getauthor()<<",";
                out << booklist.at(i)->getdewey()<<",";
                out << booklist.at(i)->getid()<<",";
                out << booklist.at(i)->getdd()<<",";
                out << booklist.at(i)->getimage();


            }
                out.flush();
                bookFile.close();
        }
}

//Remove selected book from widget
void MainWindow::remove_a_Book()
{
    int index = ui->listBooks->currentRow();

    if (index >= 0)
    {
        //remove from vector
        AllBooks* thebook = booklist.at(index);
        delete thebook;
        booklist.removeAt(index);

        //remove from list widget in the UI
        delete ui->listBooks->currentItem();
    }

    ui->lblBookTitle->setText("");
    ui->lblAuthor->setText("");
    ui->lblDewey->setText("");
    ui->lblStatus->setText("");
    ui->lbl_ID->setText("");
    ui->lbldd->setText("");

    QPixmap pixmap("none.png");
    ui->lblImage->setPixmap(pixmap);
    ui->lblImage->setScaledContents(true);
}

// Once books are added books are dipslayed in listWidget and relevant data is displayed in relevant txt boxes
void MainWindow::display_bookdetails()
{
    int index = ui->listBooks->currentRow();
    if (index != -1)

    {
        AllBooks* currentBook = booklist.at(index);


            ui->lblBookTitle->setText(currentBook->gettitle());
            ui->lblAuthor->setText(currentBook->getauthor());
            ui->lblDewey->setText(currentBook->getdewey());
            ui->lblStatus->setText(currentBook->getstatus());
            ui->lbl_ID->setText(currentBook->getid());
            ui->lbldd->setText(currentBook->getdd());


            QPixmap pixmap(currentBook->getimage());
            ui->lblImage->setPixmap(pixmap);
            ui->lblImage->setScaledContents(true);

}
}


 // Display the books
 // Open books from librarybooks.txt
void MainWindow::display_booklist()
{
    QFile inputFile("librarybooks.txt");
    inputFile.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream in(&inputFile);

    while(!in.atEnd())
    {
        QString line = in.readLine();
        QStringList bookinfo = line.split(",");

        //handle list of products ui
        ui->listBooks->addItem("     "+bookinfo.at(0)+"     " +bookinfo.at(0)+"   " + bookinfo.at(1));


        AllBooks* bookproduct = new AllBooks(bookinfo.at(0), bookinfo.at(1),bookinfo.at(2), bookinfo.at(3), bookinfo.at(4), bookinfo.at(5), bookinfo.at(6));
        booklist.push_back(bookproduct);
    }
    in.flush();
    inputFile.close();
}

