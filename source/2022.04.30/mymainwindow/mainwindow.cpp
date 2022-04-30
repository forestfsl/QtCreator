#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QToolButton>
#include <QSpinBox>
#include <QWidget>
#include <QTextEdit>
#include <QMdiSubWindow>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMenu *editMenu = ui->menubar->addMenu(tr("edit(&E)"));//添加编辑菜单
    QAction *action_Open = editMenu->addAction(
                QIcon(":/image/images/open.png"),tr("Open File(&Q)"));
    action_Open->setShortcut(QKeySequence("Ctrl + O"));//设置快捷键
    ui->toolBar->addAction(action_Open);

    QActionGroup *group = new QActionGroup(this);//建立动作组
    QAction *action_L = group->addAction(tr("左对(&L)"));//向动作组中添加动作
    action_L->setCheckable(true);
    QAction *action_R = group->addAction(tr("右对(&R)"));
    action_R->setCheckable(true);
    QAction *action_C = group->addAction(tr("居中(&C)"));
    action_C->setCheckable(true);
    action_L->setCheckable(true);//最后指定action_L 为选中状态
    editMenu->addSeparator();
    editMenu->addAction(action_L);
    editMenu->addAction(action_R);
    editMenu->addAction(action_C);


    QToolButton *toolBtn = new QToolButton(this);//创建BToolButton
    toolBtn->setText(tr("颜色"));

    QMenu *colorMenu = new QMenu(this);
    colorMenu->addAction(tr("红色"));
    colorMenu->addAction(tr("绿色"));
    toolBtn->setMenu(colorMenu);//添加菜单
    toolBtn->setPopupMode(QToolButton::MenuButtonPopup);//设置弹出模式
    ui->toolBar->addWidget(toolBtn);
    QSpinBox *spinBox = new QSpinBox(this);//创建QSpinBox
    ui->toolBar->addWidget(spinBox);


    //显示临时消息，显示2000毫秒
    ui->statusbar->showMessage(tr("Welcome to Use Editor"),2000);
    //创建标签，设置标签样式并显示信息，然后将其以永久部件的形式添加到状态栏
    QLabel *permanent = new QLabel(this);
    permanent->setFrameStyle(QFrame::Box | QFrame::Sunken);
    permanent->setText("www.qter.ort");
    ui->statusbar->addPermanentWidget(permanent);


}

void MainWindow::on_actionNew_toggled(){
    //新建文本编辑器部件
    QTextEdit *edit = new QTextEdit(this);
    //使用QMdiArea 类的addSubWindow()函数创建子窗口,以文本编辑器为中心部件
    QMdiSubWindow *child = ui->mdiArea->addSubWindow(edit);
    child->setWindowTitle(tr("window"));
    child->show();
}


void MainWindow::on_actionDock_triggered(){
    ui->dockWidget_2->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

