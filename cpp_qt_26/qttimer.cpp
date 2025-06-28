#include <QTCore>
#include <QDebug>
#include "qttimer.h"
#include <QObject>

QtTimer::QtTimer()
{
    timerObj = new QTimer(this);
    connect(timerObj,
            SIGNAL(timeout()),
            this,
            SLOT(qtTimerSlot()));

    timerObj->start(100);

}

void QtTimer::qtTimerSlot()
{
    qDebug() << "TIMER STARTED";
}
