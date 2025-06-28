#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
int main(int argc, char* argv[])
{
    QApplication qtApp(argc, argv);

    // Window
    QWidget *qtWindow = new QWidget;
    qtWindow->setWindowTitle("CPP QT 9");

    QGridLayout *qtgrdLayout = new QGridLayout;

    // Create buttons
    QPushButton *qtB1 = new QPushButton("B1");
    QPushButton *qtB2 = new QPushButton("B2");
    QPushButton *qtB3 = new QPushButton("B3");

    QLabel *qtQLabel_1 = new QLabel("Label Eins");
    QLineEdit *qtQLineEdit_1 = new QLineEdit;

    QLabel *qtQLabel_2 = new QLabel("Label Zwei");
    QLineEdit *qtQLineEdit_2 = new QLineEdit;

    QLabel *qtQLabel_3 = new QLabel("Label Drei");
    QLineEdit *qtQLineEdit_3 = new QLineEdit;

    qtgrdLayout->addWidget(qtQLabel_1,0,0);
    qtgrdLayout->addWidget(qtQLineEdit_1,0,1);
    qtgrdLayout->addWidget(qtQLabel_2,1,0);
    qtgrdLayout->addWidget(qtQLineEdit_2,1,1);
    qtgrdLayout->addWidget(qtQLabel_3,2,0);
    qtgrdLayout->addWidget(qtQLineEdit_3,2,1);

    qtgrdLayout->addWidget(qtB1,0,2);
    qtgrdLayout->addWidget(qtB2,1,2);
    qtgrdLayout->addWidget(qtB3,2,2);


    qtWindow->setLayout(qtgrdLayout);
    qtWindow->show();
    return qtApp.exec();
}
