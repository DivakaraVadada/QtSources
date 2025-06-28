#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "maindialog.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionEnableMe_triggered()
{
    testdialog = new Dialog(this);
    testdialog->show();
}

