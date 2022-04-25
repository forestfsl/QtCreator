/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QString::fromUtf8("MyWidget"));
        MyWidget->resize(800, 600);
        centralwidget = new QWidget(MyWidget);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 60, 75, 24));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 60, 75, 24));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(100, 120, 75, 24));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(270, 120, 75, 24));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(100, 200, 75, 24));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(270, 200, 75, 24));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(74, 290, 101, 21));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(270, 290, 75, 24));
        MyWidget->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MyWidget);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MyWidget->setMenuBar(menubar);
        statusbar = new QStatusBar(MyWidget);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MyWidget->setStatusBar(statusbar);

        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QMainWindow *MyWidget)
    {
        MyWidget->setWindowTitle(QCoreApplication::translate("MyWidget", "MyWidget", nullptr));
        pushButton->setText(QCoreApplication::translate("MyWidget", "\351\242\234\350\211\262\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MyWidget", "\346\226\207\344\273\266\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MyWidget", "\345\255\227\344\275\223\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MyWidget", "\350\276\223\345\205\245\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MyWidget", "\346\266\210\346\201\257\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MyWidget", "\350\277\233\345\272\246\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MyWidget", "\351\224\231\350\257\257\344\277\241\346\201\257\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MyWidget", "\345\220\221\345\257\274\345\257\271\350\257\235\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
