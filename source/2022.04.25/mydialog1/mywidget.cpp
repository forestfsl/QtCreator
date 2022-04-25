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

    //方式3 和方式1效果一样
//    QDialog *dialog = new QDialog(this);
//    dialog->setModal(true);
//    dialog->show();


    //方式4：信号与槽 使用conenct函数将按钮的单击信号clicked()与新的槽进行关联
    /*
     * 参数1：发射信号的对象
     * 参数2：发射的信号
     * 参数3：接收信号的对象
     * 参数4：要执行的槽
     *
     */
    connect(ui->showChildButton,&QPushButton::clicked,this,&MyWidget::showChildDialog);

    //如果采用自动关联即槽名可以重命名为on_showChildButton_clicked() 由字符on、发射信号的不见对象名和信号名组成，这样就可以去掉connet关联函数

}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::showChildDialog()
{
    QDialog *dialog = new QDialog(this);
    dialog->show();
}

