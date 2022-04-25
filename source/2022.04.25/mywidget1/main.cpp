#include <QtWidgets>

int main(int argc,char *argv[])
{
    QApplication a(argc,argv);
    QWidget *widget = new QWidget();
    widget->setWindowTitle(QObject::tr("我是宋林"));

    QLabel *label = new QLabel();
    label->setWindowTitle(QObject::tr("我是label"));
    label->setText(QObject::tr("label:我是窗口"));
    label->resize(180,20);

    QLabel *label2 = new QLabel(widget);
    label2->setText(QObject::tr("label2:我不是独立窗口，我是widget的子控件"));
    label2->resize(250,20);
    label->show();

    widget->show();

    int ret = a.exec();

    delete label;
    delete widget;

    return ret;
}
