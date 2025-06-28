#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include "worker.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();
private slots:
    void updateLabel1(int val);
    void updateLabel2(int val);
    void updateLabel3(int val);



private:
    Ui::MainWindow *ui;

    QThread *thread1, *thread2, *thread3;
    Worker *worker1, *worker2, *worker3;
};

#endif // MAINWINDOW_H
