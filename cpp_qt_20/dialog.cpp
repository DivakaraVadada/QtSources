#include "dialog.h"
#include "./ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    for(int i = 1; i<16;i++)
        ui->listWidget->addItem("List Num: " + QString::number(i));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_listWidget_itemClicked(QListWidgetItem *item)
{
    ui->lineEdit->setText("Selected "+item->text());
    item->setBackground(Qt::red);
}


void Dialog::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    ui->lineEdit->setText("Deselected "+item->text());
    item->setBackground(Qt::white);
}


