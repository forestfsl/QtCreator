#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDialog>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    //方式1，两个弹窗一起展示
//   QDialog *dialog = new QDialog(this);
//   dialog->show();


    //方式2，dialog没有消失之前 widget弹窗不出现
//    QDialog dialog(this);
//    dialog.exec();

    //方式3
    QDialog *dialog = new QDialog(this);
    dialog->setModal(true);
    dialog->show();

}

MyWidget::~MyWidget()
{
    delete ui;
}

