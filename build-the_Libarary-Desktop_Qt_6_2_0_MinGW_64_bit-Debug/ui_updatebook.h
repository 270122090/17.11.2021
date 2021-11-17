/********************************************************************************
** Form generated from reading UI file 'updatebook.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEBOOK_H
#define UI_UPDATEBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_updatebook
{
public:
    QFrame *UpdateBookFormFrame;
    QLineEdit *txtaddbook;
    QLabel *bookCopyLabel;
    QComboBox *addstatus_2;
    QLabel *bookCopyLabel_2;
    QComboBox *updateBook;
    QPushButton *btnupdatebook;

    void setupUi(QDialog *updatebook)
    {
        if (updatebook->objectName().isEmpty())
            updatebook->setObjectName(QString::fromUtf8("updatebook"));
        updatebook->resize(622, 727);
        UpdateBookFormFrame = new QFrame(updatebook);
        UpdateBookFormFrame->setObjectName(QString::fromUtf8("UpdateBookFormFrame"));
        UpdateBookFormFrame->setGeometry(QRect(50, 10, 451, 291));
        UpdateBookFormFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 61);\n"
"border-radius: 16px;"));
        UpdateBookFormFrame->setFrameShape(QFrame::StyledPanel);
        UpdateBookFormFrame->setFrameShadow(QFrame::Raised);
        txtaddbook = new QLineEdit(UpdateBookFormFrame);
        txtaddbook->setObjectName(QString::fromUtf8("txtaddbook"));
        txtaddbook->setGeometry(QRect(30, 40, 371, 31));
        txtaddbook->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border: 2px solid rgb(96, 101, 124);\n"
"border-radius: 15px;\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Century Gothic\";\n"
"padding-left:20px;\n"
"padding-rght: 20px;\n"
"background-color: rgb(95, 95, 112);\n"
"}\n"
"\n"
"\n"
"QLineEdit::hover{\n"
"border: 2px solid rgb(43, 153, 213);\n"
"}\n"
"\n"
"QLineEdit::focus{\n"
"border: 2px solid rgb(170, 255, 255);\n"
"background-color:rgb(43,45,56);\n"
"}"));
        bookCopyLabel = new QLabel(UpdateBookFormFrame);
        bookCopyLabel->setObjectName(QString::fromUtf8("bookCopyLabel"));
        bookCopyLabel->setGeometry(QRect(40, 90, 111, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Century Gothic")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        bookCopyLabel->setFont(font);
        bookCopyLabel->setStyleSheet(QString::fromUtf8("color: rgb(175, 175, 184);\n"
"font: 12pt \"Century Gothic\";"));
        addstatus_2 = new QComboBox(UpdateBookFormFrame);
        addstatus_2->setObjectName(QString::fromUtf8("addstatus_2"));
        addstatus_2->setGeometry(QRect(160, 90, 241, 22));
        addstatus_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(95, 95, 112);\n"
""));
        bookCopyLabel_2 = new QLabel(UpdateBookFormFrame);
        bookCopyLabel_2->setObjectName(QString::fromUtf8("bookCopyLabel_2"));
        bookCopyLabel_2->setGeometry(QRect(160, 140, 111, 21));
        bookCopyLabel_2->setFont(font);
        bookCopyLabel_2->setStyleSheet(QString::fromUtf8("color: rgb(175, 175, 184);\n"
"font: 12pt \"Century Gothic\";"));
        updateBook = new QComboBox(UpdateBookFormFrame);
        updateBook->setObjectName(QString::fromUtf8("updateBook"));
        updateBook->setGeometry(QRect(90, 200, 241, 22));
        updateBook->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(95, 95, 112);\n"
""));
        btnupdatebook = new QPushButton(UpdateBookFormFrame);
        btnupdatebook->setObjectName(QString::fromUtf8("btnupdatebook"));
        btnupdatebook->setGeometry(QRect(170, 240, 101, 31));
        btnupdatebook->setCursor(QCursor(Qt::OpenHandCursor));
        btnupdatebook->setMouseTracking(true);
        btnupdatebook->setStyleSheet(QString::fromUtf8("/*background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(54, 110, 140, 255), stop:0.747191 rgba(145, 192, 216, 255));\n"
"\n"
"border-color: rgb(81, 130, 157);\n"
"font: 8pt \"Nirmala UI\";\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 10px;*/\n"
"\n"
"/*-----QPushButton-----*/\n"
"QPushButton\n"
"{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(37, 147, 194, 255), stop:1 rgba(45, 196, 226, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Century Gothic\";\n"
"min-width: 80px;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;\n"
"border-color: rgb(38, 156, 200);\n"
"padding: 5px;}\n"
"\n"
"QPushButton::flat\n"
"{\n"
"background-color: transparent;\n"
"border: none;\n"
"color: #fff;}\n"
"\n"
"QPushButton::disabled\n"
"{\n"
"background-color: rgb(131, 165, 174);\n"
"color: black;\n"
"border-color: black;}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb"
                        "a(47, 160, 194, 255), stop:1 rgba(57, 209, 209, 255));\n"
"border: 1px solid rgb(41, 170, 182);}\n"
""));

        retranslateUi(updatebook);

        QMetaObject::connectSlotsByName(updatebook);
    } // setupUi

    void retranslateUi(QDialog *updatebook)
    {
        updatebook->setWindowTitle(QCoreApplication::translate("updatebook", "Dialog", nullptr));
        txtaddbook->setPlaceholderText(QCoreApplication::translate("updatebook", "Title", nullptr));
        bookCopyLabel->setText(QCoreApplication::translate("updatebook", "Current Status", nullptr));
        bookCopyLabel_2->setText(QCoreApplication::translate("updatebook", "New Status", nullptr));
        btnupdatebook->setText(QCoreApplication::translate("updatebook", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class updatebook: public Ui_updatebook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEBOOK_H
