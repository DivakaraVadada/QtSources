#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow),
    thread1(new QThread), thread2(new QThread), thread3(new QThread),
    worker1(new Worker), worker2(new Worker), worker3(new Worker)
{
    ui->setupUi(this);

    worker1->moveToThread(thread1);
    worker2->moveToThread(thread2);
    worker3->moveToThread(thread3);

    connect(thread1, &QThread::started, worker1, &Worker::start);
    connect(thread2, &QThread::started, worker2, &Worker::start);
    connect(thread3, &QThread::started, worker3, &Worker::start);

    connect(worker1, &Worker::updateCount, this, &MainWindow::updateLabel1);
    connect(worker2, &Worker::updateCount, this, &MainWindow::updateLabel2);
    connect(worker3, &Worker::updateCount, this, &MainWindow::updateLabel3);
}

MainWindow::~MainWindow() {
    worker1->stop(); thread1->quit(); thread1->wait();
    worker2->stop(); thread2->quit(); thread2->wait();
    worker3->stop(); thread3->quit(); thread3->wait();
    delete ui;
}



void MainWindow::updateLabel1(int val) {
    ui->label->setText("Thread 1: " + QString::number(val));
}

void MainWindow::updateLabel2(int val) {
    ui->label_2->setText("Thread 2: " + QString::number(val));
}

void MainWindow::updateLabel3(int val) {
    ui->label_3->setText("Thread 3: " + QString::number(val));
}


void MainWindow::on_pushButton_clicked()
{
    thread1->start();
    thread2->start();
    thread3->start();
}


void MainWindow::on_pushButton_2_clicked()
{
    worker1->stop(); thread1->quit(); thread1->wait();
}


void MainWindow::on_pushButton_3_clicked()
{
    worker2->stop(); thread2->quit(); thread2->wait();
}


void MainWindow::on_pushButton_4_clicked()
{
    worker3->stop(); thread3->quit(); thread3->wait();
}

