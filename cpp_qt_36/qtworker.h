#ifndef QTWORKER_H
#define QTWORKER_H

#include <QObject>

class QTWorker : public QObject
{
    Q_OBJECT
public:
    explicit QTWorker(QObject *parent = nullptr);

signals:
};

#endif // QTWORKER_H
