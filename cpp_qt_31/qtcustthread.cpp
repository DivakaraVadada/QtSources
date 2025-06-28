#include "qtcustthread.h"
#include <QMutex>

qtCustThread::qtCustThread(QObject *parent)
    : QThread{parent}
{

}

void qtCustThread::run()
{
    for(int i = 0; i < 10000; i++)
    {
        QMutex qtMutex;
        qtMutex.lock();
        if(this->threadStop)
        {
            // this->quit();
            // this->wait();
            break;
        }
        qtMutex.unlock();

        emit numChanged(i);

        this->msleep(100);
    }
}
