#include "mywidget.h"
#include "ui_mywidget.h"
#include <QHBoxLayout>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(ui->textEdit);
    layout->addWidget(ui->fontComboBox);
    layout->setSpacing(10);
    layout->setContentsMargins(0,0,5,200);//左上右下
    setLayout(layout);
}

MyWidget::~MyWidget()
{
    delete ui;
}

