#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QString>
#include <QFileInfo>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString qtDirName = "C:/Users/Divakara.Vadada/Downloads";

    QDir qtQDir(qtDirName);

    if(qtQDir.exists())
    {

        foreach(QFileInfo qtQFileInfo, qtQDir.entryInfoList())
        {
            if(qtQFileInfo.isFile())
                qDebug() << "FILE:" << qtQFileInfo.fileName();
            if(qtQFileInfo.isDir())
                qDebug() << "DIR:" << qtQFileInfo.absoluteFilePath();
        }

    }
    else
        qDebug() << "DIR DOES NOT EXIST:";

    return a.exec();
}
