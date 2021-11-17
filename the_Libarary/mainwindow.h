#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>

#include "allmembers.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //void add_a_member();
    void on_btnAddMember_clicked();


private slots:


private:
    Ui::MainWindow *ui;


    //QVector <AllBooks*> booklist;
    QVector <AllMembers*> memberList;

};
#endif // MAINWINDOW_H
