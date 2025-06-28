#include <QApplication>
#include <QtWidgets/QLabel>

int main(int argc, char* argv[])
{
    QApplication qtApp(argc, argv);
     QLabel *qtLabel = new QLabel("<h2>C++</h2> <i>Qt</i> <b>7</b>");
      qtLabel->show();
    return qtApp.exec();
}
