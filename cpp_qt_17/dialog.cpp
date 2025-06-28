#include "dialog.h"
#include "./ui_dialog.h"
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    for(int i = 0;i<16;i++)
        ui->comboBox->addItem(QString::number( i ));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QMessageBox::information(this,"Password Reveal",ui->lineEdit->text());
}


void Dialog::on_pushButton_2_clicked()
{
    int bin2Dec;
    bin2Dec =   (ui->msb->isChecked() << 3) +
                (ui->msb_1->isChecked() << 2) +
                (ui->lsb_1->isChecked() << 1) +
                (ui->lsb->isChecked() << 0);

    ui->lineEdit_2->setText(QString::number( bin2Dec ));

    QString radText;
    switch (bin2Dec) {
    case 8:
        ui->radioButton_3->click();
        radText = QString::number( bin2Dec );
        break;
    case 4:
        ui->radioButton_2->click();
        radText = QString::number( bin2Dec );
        break;
    case 2:
        ui->radioButton_1->click();
        radText = QString::number( bin2Dec );
        break;
    case 1:
        ui->radioButton_0->click();
        radText = QString::number( bin2Dec );
        break;
    default:
       radText = QString::number((ui->radioButton_3->isChecked() << 3) +
                                 (ui->radioButton_2->isChecked() << 2) +
                                 (ui->radioButton_1->isChecked() << 1) +
                                 (ui->radioButton_0->isChecked() << 0) );
        break;
    }

    ui->lineEdit_3->setText(radText);
}


void Dialog::on_comboBox_currentTextChanged(const QString &arg1)
{
    //QMessageBox::information(this,"Number Selected",ui->comboBox->currentText());
    QString textCombo = ui->comboBox->currentText();
    int numDec = textCombo.toInt();

    if(numDec & (1 << 3))
        ui->msb->setCheckState(Qt::Checked);
    else
        ui->msb->setCheckState(Qt::Unchecked);

    if(numDec & (1 << 2))
        ui->msb_1->setCheckState(Qt::Checked);
    else
        ui->msb_1->setCheckState(Qt::Unchecked);

    if(numDec & (1 << 1))
        ui->lsb_1->setCheckState(Qt::Checked);
    else
        ui->lsb_1->setCheckState(Qt::Unchecked);

    if(numDec & (1 << 0))
        ui->lsb->setCheckState(Qt::Checked);
    else
        ui->lsb->setCheckState(Qt::Unchecked);

    // bin2Dec =   (ui->msb->isChecked() << 3) +
    //           (ui->msb_1->isChecked() << 2) +
    //           (ui->lsb_1->isChecked() << 1) +
    //           (ui->lsb->isChecked() << 0);
}

