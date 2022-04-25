#include "mywidget.h"
#include "ui_mywidget.h"
#include <QColorDialog>
#include <QDebug>
#include <QFileDialog>
#include <QString>
#include <QFontDialog>
#include <QInputDialog>
#include <QMessageBox>
#include <QProgressDialog>
#include <QErrorMessage>
#include <QWizard>

MyWidget::MyWidget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);
}

MyWidget::~MyWidget()
{
    delete ui;
}


void MyWidget::on_pushButton_clicked()
{
//    QColorDialog::getColor(Qt::red,this,tr("颜色对话框"),QColorDialog::ShowAlphaChannel);
    QColorDialog dialog(Qt::red,this);//创建对象
    dialog.setOption(QColorDialog::ShowAlphaChannel);//显示alpha选项
    dialog.exec();//以模态的方式运行对话框
    QColor color = dialog.currentColor();
    qDebug() <<"color:" << color;
}


void MyWidget::on_pushButton_2_clicked()
{
   QString fileName = QFileDialog::getOpenFileName(this,tr("oepn file"),"D:",tr("all files（* png * jpeg)"));
//    qDebug() << "fileName:" << fileName;
//    QString fileName = QFileDialog::getOpenFileName(this,tr("open file")," ",tr("All files(*.*);;mp3 file(*.mp3);;TIFF Image(*.tif)"));

}


void MyWidget::on_pushButton_3_clicked()
{
    //ok 用于标记是否单击了OK按钮
    bool ok;
    QFont font = QFontDialog::getFont(&ok,this);
    //如果单击Cancel按钮，那么输出信息
    if (ok) ui->pushButton_3->setFont(font);
    else qDebug() << tr("没有选择字体");
}


void MyWidget::on_pushButton_4_clicked()
{
    bool ok;
    QString string = QInputDialog::getText(this,tr("输入字符串对话框"),tr("请输入用户名:"),QLineEdit::Normal,tr("admin"),&ok);
    if(ok) qDebug() <<"string:" << string;

    int value1 = QInputDialog::getInt(this,tr("innput"),tr("-1000-1000"),100,-1000,1000,10,&ok);
    if(ok) qDebug() << "value1:" << value1;

    double value2 = QInputDialog::getDouble(this,tr("input"),tr("-1000-1000"),0.00,-1000,1000,2,&ok);
    if(ok) qDebug() << "value2:" << value2;

    QStringList items;
    items <<tr("条目1") << tr("条目2");

    //获取条目
   QString item = QInputDialog::getItem(this,tr("input"),tr("input"),items,0,true,&ok);
   if(ok) qDebug() << "item:" << item;

}


void MyWidget::on_pushButton_5_clicked()
{
    //问题对话框
    int ret1 = QMessageBox::question(this,tr("question dialog"),tr("qt"),QMessageBox::Yes,QMessageBox::No);
    if(ret1 == QMessageBox::Yes) qDebug() << tr("question!");

    int ret2 = QMessageBox::information(this,tr("alert"),tr("book"),QMessageBox::Ok);
    if(ret2 == QMessageBox::Ok) qDebug() << tr("alert");

}


void MyWidget::on_pushButton_6_clicked()
{
    QProgressDialog dialog(tr("文件复制进度"),tr("取消"),0,5000,this);
    dialog.setWindowTitle(tr("progress alert"));
    dialog.setWindowModality(Qt::WindowModal);
    dialog.show();

    for(int i = 0;i < 50000;i++){
        dialog.setValue(i);
        QCoreApplication::processEvents();
        if(dialog.wasCanceled()) break;
    }
    dialog.setValue(5000);
    qDebug() << tr("复制结束");
}


void MyWidget::on_pushButton_7_clicked()
{
    QErrorMessage *errordlg = new QErrorMessage();
    errordlg->setWindowTitle(tr("alert"));
    errordlg->showMessage(tr("error messaage"));
}


QWizardPage * MyWidget::createPage1()
{
    QWizardPage *page = new QWizardPage;
    page->setTitle(tr("介绍"));
    return page;
}

QWizardPage * MyWidget::createPage2()
{
    QWizardPage *page = new QWizardPage;
    page->setTitle(tr("用户选择信息"));
    return page;
}

QWizardPage * MyWidget::createPage3()
{
    QWizardPage *page = new QWizardPage;
    page->setTitle(tr("结束"));
    return page;
}


void MyWidget::on_pushButton_8_clicked()
{
    QWizard wizard(this);
    wizard.setWindowTitle(tr("alert"));
    wizard.addPage(createPage1());
    wizard.addPage(createPage2());
    wizard.addPage(createPage3());
    wizard.exec();
}

