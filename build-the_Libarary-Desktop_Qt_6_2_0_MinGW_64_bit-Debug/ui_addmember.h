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

QT_BEGIN_NAMESPACE

class Ui_addmember
{
public:

    void setupUi(QDialog *addmember)
    {
        if (addmember->objectName().isEmpty())
            addmember->setObjectName(QString::fromUtf8("addmember"));
        addmember->resize(400, 300);

        retranslateUi(addmember);

        QMetaObject::connectSlotsByName(addmember);
    } // setupUi

    void retranslateUi(QDialog *addmember)
    {
        addmember->setWindowTitle(QCoreApplication::translate("addmember", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addmember: public Ui_addmember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMEMBER_H
