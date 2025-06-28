#ifndef QTCUSTTHREAD_H
#define QTCUSTTHREAD_H

#include <QObject>
#include <QThread>

class qtCustThread : public QThread
{
    Q_OBJECT

public:
    explicit qtCustThread(QObject *parent = nullptr);
    void run();
    bool threadStop;
    QString thrdName;
signals:
    void numChanged(int);
};

#endif // QTCUSTTHREAD_H
