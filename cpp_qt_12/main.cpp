#include <QCoreApplication>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QString>
static int lineNum;

void qtFileWrite(QString qtFileName)
{

    QFile qtFile(qtFileName);

    //If already open
    if(!qtFile.open(QFile::Append | QFile::Text))
    {
        qDebug() << "Cannot Open File for Writing";
        return;
    }

    // File ready to be written
    QTextStream qtWrite(&qtFile);

    lineNum++;
    qtWrite <<lineNum<< ": Test ABC" << "\n";

    qtFile.flush();
    qtFile.close();
}

void qtFileRead(QString qtFileName)
{
    QFile qtFile(qtFileName);
    QString readText;
    //If already open
    if(!qtFile.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "Cannot Open File for Reading";
        return;
    }

    // File ready to be written
    QTextStream qtRead(&qtFile);
    while(!qtRead.atEnd())
    {
    readText = qtRead.readLine();
    qDebug() << readText << "\n";

    }

    qtFile.close();
}

void qtFileRsrcRead(QString qtFileName)
{
    QFile qtFile(qtFileName);
    QString readText;
    //If already open
    if(!qtFile.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "Cannot Open File for Reading";
        return;
    }

    // File ready to be written
    QTextStream qtRead(&qtFile);
    readText = qtRead.readAll();

    qDebug() << readText;
    qtFile.close();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString qtFileName = "C:/Users/Divakara.Vadada/Downloads/QTTestFile.txt";
    for(int i = 1; i<=100;i++)
        qtFileWrite(qtFileName);
    qtFileRead(qtFileName);
    qtFileName = ":/ResourceFiles/CMakeLists.txt";
    qtFileRsrcRead(qtFileName);
    return a.exec();
}
