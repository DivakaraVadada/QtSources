/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_1;
    QRadioButton *radioButton_0;
    QLineEdit *lineEdit_3;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *msb;
    QCheckBox *msb_1;
    QCheckBox *lsb_1;
    QCheckBox *lsb;
    QComboBox *comboBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(193, 197);
        verticalLayout_2 = new QVBoxLayout(Dialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_4->addWidget(lineEdit);

        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName("pushButton");

        verticalLayout_4->addWidget(pushButton);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        radioButton_3 = new QRadioButton(Dialog);
        radioButton_3->setObjectName("radioButton_3");

        horizontalLayout_2->addWidget(radioButton_3);

        radioButton_2 = new QRadioButton(Dialog);
        radioButton_2->setObjectName("radioButton_2");

        horizontalLayout_2->addWidget(radioButton_2);

        radioButton_1 = new QRadioButton(Dialog);
        radioButton_1->setObjectName("radioButton_1");

        horizontalLayout_2->addWidget(radioButton_1);

        radioButton_0 = new QRadioButton(Dialog);
        radioButton_0->setObjectName("radioButton_0");

        horizontalLayout_2->addWidget(radioButton_0);


        verticalLayout_3->addLayout(horizontalLayout_2);

        lineEdit_3 = new QLineEdit(Dialog);
        lineEdit_3->setObjectName("lineEdit_3");

        verticalLayout_3->addWidget(lineEdit_3);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        lineEdit_2 = new QLineEdit(Dialog);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEchoMode(QLineEdit::EchoMode::Normal);

        verticalLayout->addWidget(lineEdit_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        msb = new QCheckBox(Dialog);
        msb->setObjectName("msb");

        horizontalLayout->addWidget(msb);

        msb_1 = new QCheckBox(Dialog);
        msb_1->setObjectName("msb_1");

        horizontalLayout->addWidget(msb_1);

        lsb_1 = new QCheckBox(Dialog);
        lsb_1->setObjectName("lsb_1");

        horizontalLayout->addWidget(lsb_1);

        lsb = new QCheckBox(Dialog);
        lsb->setObjectName("lsb");

        horizontalLayout->addWidget(lsb);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout);


        verticalLayout_2->addLayout(verticalLayout_4);

        comboBox = new QComboBox(Dialog);
        comboBox->setObjectName("comboBox");

        verticalLayout_2->addWidget(comboBox);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "Enter PWRD", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Dialog", "b3", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Dialog", "b2", nullptr));
        radioButton_1->setText(QCoreApplication::translate("Dialog", "b1", nullptr));
        radioButton_0->setText(QCoreApplication::translate("Dialog", "b0", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "Find Bin", nullptr));
        msb->setText(QCoreApplication::translate("Dialog", "b3", nullptr));
        msb_1->setText(QCoreApplication::translate("Dialog", "b2", nullptr));
        lsb_1->setText(QCoreApplication::translate("Dialog", "b1", nullptr));
        lsb->setText(QCoreApplication::translate("Dialog", "b0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
