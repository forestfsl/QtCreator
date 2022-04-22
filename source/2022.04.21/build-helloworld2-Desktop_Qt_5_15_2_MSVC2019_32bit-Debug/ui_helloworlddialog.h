/********************************************************************************
** Form generated from reading UI file 'helloworlddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOWORLDDIALOG_H
#define UI_HELLOWORLDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_HelloWorldDialog
{
public:

    void setupUi(QDialog *HelloWorldDialog)
    {
        if (HelloWorldDialog->objectName().isEmpty())
            HelloWorldDialog->setObjectName(QString::fromUtf8("HelloWorldDialog"));
        HelloWorldDialog->resize(800, 600);

        retranslateUi(HelloWorldDialog);

        QMetaObject::connectSlotsByName(HelloWorldDialog);
    } // setupUi

    void retranslateUi(QDialog *HelloWorldDialog)
    {
        HelloWorldDialog->setWindowTitle(QCoreApplication::translate("HelloWorldDialog", "HelloWorldDialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelloWorldDialog: public Ui_HelloWorldDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOWORLDDIALOG_H
