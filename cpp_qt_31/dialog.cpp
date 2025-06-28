#include "dialog.h"
#include "./ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    mqtCustThread_1 = new qtCustThread(this);
    mqtCustThread_2 = new qtCustThread(this);
    mqtCustThread_3 = new qtCustThread(this);

    connect(mqtCustThread_1,SIGNAL(numChanged(int)),
            this, SLOT(onNumChange_1(int)));

    connect(mqtCustThread_2,SIGNAL(numChanged(int)),
            this, SLOT(onNumChange_2(int)));

    connect(mqtCustThread_3,SIGNAL(numChanged(int)),
            this, SLOT(onNumChange_3(int)));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::onNumChange_1(int inp)
{
    ui->label_1->setText(mqtCustThread_1->thrdName+ ": " + QString::number(inp));
}


void Dialog::onNumChange_2(int inp)
{
    ui->label_1->setText(mqtCustThread_2->thrdName+ ": " + QString::number(inp));
}

void Dialog::onNumChange_3(int inp)
{
    ui->label_1->setText(mqtCustThread_3->thrdName+ ": " + QString::number(inp));
}

void Dialog::on_pushButton_1_clicked()
{
    // Start
    mqtCustThread_1->start();

    mqtCustThread_2->start();

    mqtCustThread_3->start();
}


void Dialog::on_pushButton_2_clicked()
{
    // Stop 1
    mqtCustThread_1->threadStop = true;
}


void Dialog::on_pushButton_3_clicked()
{
    // Stop 2
    mqtCustThread_2->threadStop = true;
}


void Dialog::on_pushButton_4_clicked()
{
    // Stop 3
    mqtCustThread_3->threadStop = true;
}

