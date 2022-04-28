#include "mywidget.h"
#include "ui_mywidget.h"
#include <QHBoxLayout>
#include <QGridLayout>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);
//    QHBoxLayout *layout = new QHBoxLayout;
//    layout->addWidget(ui->textEdit);
//    layout->addWidget(ui->fontComboBox);
//    layout->setSpacing(10);
//    layout->setContentsMargins(0,0,5,200);//左上右下
//    setLayout(layout);

    QGridLayout *layout = new QGridLayout;
    //添加部件，从第0行0列开始，占据1行2列
    layout->addWidget(ui->fontComboBox,0,0,1,2);
    //添加部件，从第0行2列开始，占据1行1列
    layout->addWidget(ui->pushButton,0,2,1,1);
    //添加部件，从第1行0列开始，占据1行3列
    layout->addWidget(ui->textEdit,1,0,1,3);
    setLayout(layout);

}

MyWidget::~MyWidget()
{
    delete ui;
}

