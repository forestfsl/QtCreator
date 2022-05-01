#include "mylineedit.h"
#include <QKeyEvent>
#include <QDebug>

MyLineEdit::MyLineEdit(QWidget *parent) :QLineEdit(parent)
{

}

void MyLineEdit::keyPressEvent(QKeyEvent *event)//键盘按下事件
{
    qDebug() << tr("MyLineEdit 键盘按下事件");
    QLineEdit::keyPressEvent(event);
    event->ignore();
}


bool MyLineEdit::event(QEvent *event)//事件
{
    if(event->type() == QEvent::KeyPress)
        qDebug() << tr("MyLineEdit 的event()函数");
    return QLineEdit::event(event);//执行QLineEdit 类event()函数的默认操作
}
