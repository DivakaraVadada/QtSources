#include "maindialog.h"
#include "ui_maindialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->progressBar->setValue(0);
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
            ui->progressBar,SLOT(setValue(int)));

}

Dialog::~Dialog()
{
    delete ui;
}
