#include "widget.h"
#include "ui_widget.h"
#include <QKeyEvent>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setFocus();
    keyLeft = false;
    keyUp = false;
    move = false;
}

void Widget::keyPressEvent(QKeyEvent *event)
{
//    if(event->modifiers() == Qt::ControlModifier){//是否按下Ctrl
//        if(event->key() == Qt::Key_M) //是否按下M键
//            setWindowState(Qt::WindowMaximized);//窗口最大化
//    }else QWidget::keyPressEvent(event);
    if(event->key() == Qt::Key_Up){
        if(event->isAutoRepeat()) return;
        keyUp = true;
    }
    else if(event->key() == Qt::Key_Left){
        if (event->isAutoRepeat()) return;
        keyLeft = true;
    }
}

void Widget::keyReleaseEvent(QKeyEvent *event)//按钮施放事件
{
    if(event->key() == Qt::Key_Up){
        if(event->isAutoRepeat()) return;
        keyUp = false;//释放按键后将标志设置为false
        if(move) {//如果已经完成了移动
            move = false;//设置标志为fasle
            return;//直接返回
        }
        if(keyLeft){//如果左方向已经按下且没有释放
            ui->pushButton->move(30,80);//斜着移动
            move = true;//标记为已经移动
        }else{
            ui->pushButton->move(120,80);//否则直接向上移动
        }
    }else if(event->key() == Qt::Key_Left){
        if(event->isAutoRepeat()) return;
        keyLeft = false;
        if(move){
            move = false;
            return;
        }
        if(keyUp){
            ui->pushButton->move(30,80);
            move = true;
        }else{
            ui->pushButton->move(30,120);
        }
    }
    else if(event->key() == Qt::Key_Down){
        ui->pushButton->move(120,120);//使用下方向键来还原按钮的位置
    }
}

Widget::~Widget()
{
    delete ui;
}

