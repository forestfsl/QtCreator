#include "helloworlddialog.h"
#include "ui_helloworlddialog.h"

HelloWorldDialog::HelloWorldDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::HelloWorldDialog)
{
    ui->setupUi(this);
}

HelloWorldDialog::~HelloWorldDialog()
{
    delete ui;
}

