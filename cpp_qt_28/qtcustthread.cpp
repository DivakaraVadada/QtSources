#include "qtcustthread.h"
#include <QDebug>
#include <QFile>
#include <QTextStream>

qtCustThread::qtCustThread()
{

}
void qtCustThread::run()
{
    for(int i = 1; i<1000; i++)
        qtCustThread::qtFileWrite(i);
}

void qtCustThread::qtFileWrite(int numCnt)
{
    QFile qtFile("C:/Users/Divakara.Vadada/Downloads/QTThreadTestFile.txt");


    //If already open
    if(!qtFile.open(QFile::Append | QFile::Text))
    {
        qDebug() << "Cannot Open File for Writing";
        return;
    }

    // File ready to be written
    QTextStream qtWrite(&qtFile);

    qtWrite <<this->thrdName<< " Running Count" << numCnt << "\n";

    qtFile.flush();
    qtFile.close();
}
