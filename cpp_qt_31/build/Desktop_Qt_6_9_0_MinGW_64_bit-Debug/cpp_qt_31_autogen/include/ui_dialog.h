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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_1;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_1;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(431, 229);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_1 = new QLabel(Dialog);
        label_1->setObjectName("label_1");

        horizontalLayout->addWidget(label_1);

        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout_2->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(Dialog);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        pushButton_4 = new QPushButton(Dialog);
        pushButton_4->setObjectName("pushButton_4");

        horizontalLayout_3->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton_1 = new QPushButton(Dialog);
        pushButton_1->setObjectName("pushButton_1");

        verticalLayout->addWidget(pushButton_1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_1->setText(QCoreApplication::translate("Dialog", "Thread 1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "Stop Thread 1", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Thread 2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog", "Stop Thread 2", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Thread 3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog", "Stop Thread 3", nullptr));
        pushButton_1->setText(QCoreApplication::translate("Dialog", "Start All Threads", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
