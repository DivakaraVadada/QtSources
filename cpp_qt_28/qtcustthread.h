#ifndef QTCUSTTHREAD_H
#define QTCUSTTHREAD_H

#include <QThread>
#include <QString>

class qtCustThread : public QThread
{
public:
    qtCustThread();
    void run();
    QString thrdName;
private:
    void qtFileWrite(int numCnt);
};

#endif // QTCUSTTHREAD_H
