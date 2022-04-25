#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QMainWindow>
#include <QWizard>

QT_BEGIN_NAMESPACE
namespace Ui { class MyWidget; }
QT_END_NAMESPACE

class MyWidget : public QMainWindow
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::MyWidget *ui;
    QWizardPage *createPage1();
    QWizardPage *createPage2();
    QWizardPage *createPage3();
};
#endif // MYWIDGET_H
