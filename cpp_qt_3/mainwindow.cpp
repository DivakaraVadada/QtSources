#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "Qdebug"

// Global Param
int progBarVal;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setText("Click2Upd");
    ui->progressBar->setValue(progBarVal);
    //connect(ui->pushButton, &QPushButton::clicked, this, []() {
        //progBarVal += 10;
    //});
    // connect(ui->pushButton,SIGNAL(clicked(bool)),
    //         ui->progressBar,SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    progBarVal += 5;
    if(progBarVal> 99)
    {
        progBarVal = 99;
    }

    ui->progressBar->setValue(progBarVal);
}

