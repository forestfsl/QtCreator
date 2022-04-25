#include "mydialog.h"
#include "ui_mydialog.h"

MyDialog::MyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyDialog)
{
    ui->setupUi(this);
}

MyDialog::~MyDialog()
{
    delete ui;
}

void MyDialog::on_pushButton_clicked()
{
    //对于一个使用exec()函数实现的模态对话框，执行了这个槽会隐藏这个模态对话框并返回ialog::Accepted(),这里使用这个值来判断是哪个按钮被点击了
    accept();
}

