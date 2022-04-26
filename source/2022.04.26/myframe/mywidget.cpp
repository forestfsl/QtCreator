#include "mywidget.h"
#include "ui_mywidget.h"
#include <QFrame>
#include <QPixmap>
#include <QMovie>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    ui->frame->setFrameShape(QFrame::Box);
    ui->frame->setFrameShadow(QFrame::Sunken);
    //下面这个方法可以替换上面两条
//    ui->frame->setFrameStyle(QFrame::Box | QFrame::Sunken);
    ui->frame->setLineWidth(5);
    ui->frame->setMidLineWidth(10);


    QFont font;
    font.setFamily("华文行楷");
    font.setPointSize(20);
    font.setBold(true);
    font.setItalic(true);
    ui->label->setFont(font);

    //标题太长隐藏
    QString string = tr("标题太长，需要进行省略，你知道么");
    //参数1：代表需要省略的文本；参数2：代表省略...号展示的位置；参数3：代表超过这个长度就需要显示....
    QString str = ui->label->fontMetrics().elidedText(string,Qt::ElideRight,180);
    ui->label->setText(str);

    ui->label->setPixmap(QPixmap("F:/icon_podium_student.png"));

    //显示动画
    QMovie *movie = new QMovie("F:/Waiting_1.gif");
    ui->label->setMovie(movie);
    movie->start();
}

MyWidget::~MyWidget()
{
    delete ui;
}

