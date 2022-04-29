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
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QWidget *centralwidget;
    QSplitter *splitter;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QString::fromUtf8("MyWidget"));
        MyWidget->resize(800, 600);
        centralwidget = new QWidget(MyWidget);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(110, 50, 511, 100));
        splitter->setMinimumSize(QSize(0, 100));
        splitter->setMaximumSize(QSize(16777215, 100));
        splitter->setFrameShape(QFrame::Box);
        splitter->setFrameShadow(QFrame::Raised);
        splitter->setLineWidth(5);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        pushButton_3 = new QPushButton(splitter);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        splitter->addWidget(pushButton_3);
        pushButton = new QPushButton(splitter);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        splitter->addWidget(pushButton);
        pushButton_2 = new QPushButton(splitter);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        splitter->addWidget(pushButton_2);
        pushButton_4 = new QPushButton(splitter);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        splitter->addWidget(pushButton_4);
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
        pushButton_3->setText(QCoreApplication::translate("MyWidget", "PushButton", nullptr));
        pushButton->setText(QCoreApplication::translate("MyWidget", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MyWidget", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MyWidget", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
