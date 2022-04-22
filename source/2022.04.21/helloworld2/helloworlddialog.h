#ifndef HELLOWORLDDIALOG_H
#define HELLOWORLDDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class HelloWorldDialog; }
QT_END_NAMESPACE

class HelloWorldDialog : public QDialog
{
    Q_OBJECT

public:
    HelloWorldDialog(QWidget *parent = nullptr);
    ~HelloWorldDialog();

private:
    Ui::HelloWorldDialog *ui;
};
#endif // HELLOWORLDDIALOG_H
