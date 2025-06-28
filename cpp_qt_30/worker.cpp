#include "worker.h"

Worker::Worker(QObject *parent) : QObject(parent), count(0) {
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Worker::onTimeout);
}

void Worker::start() {
    count = 0;
    timer->start(500); // 1 second interval
}

void Worker::stop() {
    timer->stop();
}

void Worker::onTimeout() {
    count++;
    emit updateCount(count);
}
