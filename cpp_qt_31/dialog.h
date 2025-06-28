#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "qtcustthread.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
    qtCustThread *mqtCustThread_1,*mqtCustThread_2,*mqtCustThread_3;

private:
    Ui::Dialog *ui;

public slots:
    void onNumChange_1(int);
    void onNumChange_2(int);
    void onNumChange_3(int);
private slots:
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
};
#endif // DIALOG_H
