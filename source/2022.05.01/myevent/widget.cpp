#include "widget.h"
#include "ui_widget.h"
#include <QKeyEvent>
#include <QDebug>
#include "mylineedit.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    lineEdit = new MyLineEdit(this);
    lineEdit->move(100,100);

    lineEdit->installEventFilter(this);//在widget 上为lineedit安装事件过滤器
}

void Widget::keyPressEvent(QKeyEvent *event)
{
    qDebug() <<tr("Widget 键盘按下事件");
}

bool Widget::eventFilter(QObject *obj,QEvent *event)//事件过滤器
{
    if(obj == lineEdit){
        if(event->type() == QEvent::KeyPress)
            qDebug() << tr("Widget的事件过滤器");
    }
    return QWidget::eventFilter(obj,event);
}

Widget::~Widget()
{
    delete ui;
}

