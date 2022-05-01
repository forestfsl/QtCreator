#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QTimer>
#include <QTime>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
//    id1 = startTimer(1000);
//    id2 = startTimer(1500);
//    id3 = startTimer(2200);

    QTimer *timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,&Widget::timerUpdate);
    timer->start(1000);

    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
}

void Widget::timerUpdate()
{
    QTime time = QTime::currentTime();//获取当前时间
    QString text = time.toString("hh:mm");//转换为字符串
    if((time.second() % 2) == 0) text[2] = ' ';//每隔一秒就将":"显示为空格
    ui->lcdNumber->display(text);

    int rand =qrand() % 300;
    ui->lcdNumber->move(rand,rand);
}

void Widget::timerEvent(QTimerEvent *event)
{
    if(event->timerId() == id1){
        qDebug() <<"timer1";
    }
    else if(event->timerId() == id2){
        qDebug() << "timer2";
    }else{
        qDebug() << "timer3";
    }
}

Widget::~Widget()
{
    delete ui;
}

