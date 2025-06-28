#ifndef WORKER_H
#define WORKER_H

#include <QObject>
#include <QTimer>

class Worker : public QObject {
    Q_OBJECT

public:
    explicit Worker(QObject *parent = nullptr);
    void start();
    void stop();

signals:
    void updateCount(int);

private slots:
    void onTimeout();

private:
    QTimer *timer;
    int count;
};

#endif // WORKER_H
