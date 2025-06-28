#ifndef QTTIMER_H
#define QTTIMER_H

#include <QObject>
#include <QTimer>

class QtTimer : public QObject
{
    Q_OBJECT
public:
    QtTimer();

    QTimer *timerObj;

public slots:
    void qtTimerSlot();
};

#endif // QTTIMER_H
