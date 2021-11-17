/********************************************************************************
** Form generated from reading UI file 'addmember.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMEMBER_H
#define UI_ADDMEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addmember
{
public:
    QFrame *frame;
    QLabel *LibraryTitle_4;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *phoneNumber_label;
    QLabel *emailtxt;
    QLabel *phone_label;
    QLineEdit *txtMemberName;
    QRadioButton *radioButtonNO_2;
    QLineEdit *txtMemberPhone;
    QLineEdit *txtMemberEmail;
    QLabel *memberName_label;
    QRadioButton *radioButtonYES_2;
    QPushButton *btnSaveMember;

    void setupUi(QDialog *addmember)
    {
        if (addmember->objectName().isEmpty())
            addmember->setObjectName(QString::fromUtf8("addmember"));
        addmember->resize(1030, 629);
        frame = new QFrame(addmember);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 1001, 611));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(223, 233, 239);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        LibraryTitle_4 = new QLabel(frame);
        LibraryTitle_4->setObjectName(QString::fromUtf8("LibraryTitle_4"));
        LibraryTitle_4->setGeometry(QRect(410, 40, 209, 30));
        LibraryTitle_4->setMaximumSize(QSize(16777215, 30));
        LibraryTitle_4->setStyleSheet(QString::fromUtf8("background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;"));
        LibraryTitle_4->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(230, 150, 561, 311));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        phoneNumber_label = new QLabel(layoutWidget);
        phoneNumber_label->setObjectName(QString::fromUtf8("phoneNumber_label"));
        phoneNumber_label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(phoneNumber_label, 2, 0, 1, 1);

        emailtxt = new QLabel(layoutWidget);
        emailtxt->setObjectName(QString::fromUtf8("emailtxt"));
        emailtxt->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(emailtxt, 3, 0, 1, 1);

        phone_label = new QLabel(layoutWidget);
        phone_label->setObjectName(QString::fromUtf8("phone_label"));
        phone_label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(phone_label, 1, 0, 1, 1);

        txtMemberName = new QLineEdit(layoutWidget);
        txtMemberName->setObjectName(QString::fromUtf8("txtMemberName"));

        gridLayout->addWidget(txtMemberName, 0, 1, 1, 3);

        radioButtonNO_2 = new QRadioButton(layoutWidget);
        radioButtonNO_2->setObjectName(QString::fromUtf8("radioButtonNO_2"));
        radioButtonNO_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(radioButtonNO_2, 2, 2, 1, 1);

        txtMemberPhone = new QLineEdit(layoutWidget);
        txtMemberPhone->setObjectName(QString::fromUtf8("txtMemberPhone"));

        gridLayout->addWidget(txtMemberPhone, 1, 1, 1, 3);

        txtMemberEmail = new QLineEdit(layoutWidget);
        txtMemberEmail->setObjectName(QString::fromUtf8("txtMemberEmail"));

        gridLayout->addWidget(txtMemberEmail, 3, 1, 1, 3);

        memberName_label = new QLabel(layoutWidget);
        memberName_label->setObjectName(QString::fromUtf8("memberName_label"));
        memberName_label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(memberName_label, 0, 0, 1, 1);

        radioButtonYES_2 = new QRadioButton(layoutWidget);
        radioButtonYES_2->setObjectName(QString::fromUtf8("radioButtonYES_2"));
        radioButtonYES_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(radioButtonYES_2, 2, 1, 1, 1);

        btnSaveMember = new QPushButton(layoutWidget);
        btnSaveMember->setObjectName(QString::fromUtf8("btnSaveMember"));
        btnSaveMember->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(btnSaveMember, 4, 3, 1, 1);


        retranslateUi(addmember);

        QMetaObject::connectSlotsByName(addmember);
    } // setupUi

    void retranslateUi(QDialog *addmember)
    {
        addmember->setWindowTitle(QCoreApplication::translate("addmember", "Dialog", nullptr));
        LibraryTitle_4->setText(QCoreApplication::translate("addmember", "ADD NEW MEMBER", nullptr));
        phoneNumber_label->setText(QCoreApplication::translate("addmember", "Phone reminders:", nullptr));
        emailtxt->setText(QCoreApplication::translate("addmember", "Email:", nullptr));
        phone_label->setText(QCoreApplication::translate("addmember", "Mobile Phone:", nullptr));
        radioButtonNO_2->setText(QCoreApplication::translate("addmember", "No", nullptr));
        memberName_label->setText(QCoreApplication::translate("addmember", "Name:", nullptr));
        radioButtonYES_2->setText(QCoreApplication::translate("addmember", "Yes", nullptr));
        btnSaveMember->setText(QCoreApplication::translate("addmember", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addmember: public Ui_addmember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMEMBER_H
