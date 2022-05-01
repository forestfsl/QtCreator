#include "widget.h"
#include "ui_widget.h"
#include <QKeyEvent>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

void Widget::keyPressEvent(QKeyEvent *event)
{
    if(event->modifiers() == Qt::ControlModifier){//是否按下Ctrl
        if(event->key() == Qt::Key_M) //是否按下M键
            setWindowState(Qt::WindowMaximized);//窗口最大化
    }else QWidget::keyPressEvent(event);
}

void Widget::keyReleaseEvent(QKeyEvent *event)
{

}

Widget::~Widget()
{
    delete ui;
}

