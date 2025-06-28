#include <QApplication>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QWidget>

int main(int argc, char* argv[])
{
    QApplication qtApp(argc, argv);

    // Window
    QWidget *qtWindow = new QWidget;
    qtWindow->setWindowTitle("CPP QT 8");

    // Create buttons
    QPushButton *b1 = new QPushButton("B1");
    QPushButton *b2 = new QPushButton("B2");
    QPushButton *b3 = new QPushButton("B3");

    // Create Layouts
    QHBoxLayout *hl1 = new QHBoxLayout;
    hl1->addWidget(b1);
    hl1->addWidget(b2);
    hl1->addWidget(b3);
    // QVBoxLayout *vl1 = new QVBoxLayout;

    // vl1->addWidget(b1);
    // vl1->addWidget(b2);
    // vl1->addWidget(b3);

    qtWindow->setLayout(hl1);
    // qtWindow->setLayout(vl1);

    qtWindow->show();

    return qtApp.exec();
}
