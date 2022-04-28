#include "mywidget.h"
#include "ui_mywidget.h"
#include <QHBoxLayout>

MyWidget::MyWidget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(ui->fontComboBox);
    layout->addWidget(ui->textEdit);
    layout->setSpacing(50);
    layout->setContentsMargins(0,0,50,100);//左上右下
    setLayout(layout);
}

MyWidget::~MyWidget()
{
    delete ui;
}

