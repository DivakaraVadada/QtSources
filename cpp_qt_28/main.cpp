#include <QCoreApplication>
#include "qtcustthread.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qtCustThread varqtCustThread_1;
    varqtCustThread_1.thrdName = "THREAD 1";

    qtCustThread varqtCustThread_2;
    varqtCustThread_2.thrdName = "THREAD 2";

    qtCustThread varqtCustThread_3;
    varqtCustThread_3.thrdName = "THREAD 3";

    varqtCustThread_1.start(QThread::HighestPriority);
    varqtCustThread_2.start(QThread::NormalPriority);
    varqtCustThread_3.start(QThread::TimeCriticalPriority);

    return a.exec();
}
