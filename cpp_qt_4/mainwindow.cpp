#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setText("Click2Chose");
    //connect(ui->pushButton, &QPushButton::clicked, this, []() {
    //progBarVal += 10;
    //});

    connect(ui->verticalSlider,SIGNAL(valueChanged(int)),
            ui->progressBar,SLOT(setValue(int)));
    connect(ui->verticalSlider,SIGNAL(valueChanged(int)),
            ui->progressBar_2,SLOT(setValue(int)));

    connect(ui->pushButton,SIGNAL(pressed()),
            ui->progressBar_2,SLOT(hide()));
    connect(ui->pushButton,SIGNAL(pressed()),
            ui->progressBar,SLOT(show()));

    connect(ui->pushButton,SIGNAL(released()),
            ui->progressBar,SLOT(hide()));
    connect(ui->pushButton,SIGNAL(released()),
            ui->progressBar_2,SLOT(show()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
