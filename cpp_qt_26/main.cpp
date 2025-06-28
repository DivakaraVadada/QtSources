#include <QCoreApplication>
#include "qttimer.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QtTimer qtobjTimer;

    return a.exec();
}
