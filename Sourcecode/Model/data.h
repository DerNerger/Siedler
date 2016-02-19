#ifndef DATA_H
#define DATA_H

#include "QCoreApplication"
#include "QDirIterator"
#include "QDebug"
#include "QIcon"
#include "QPixmap"

class Data
{
public:
    static Data* getInstance();
    QPixmap getPixmap(QString name, int height = 22);
    QFile *getFile(QString name);
    bool exists(QString name);
private:
    Data();
    const QDir *appFolder;
};

#endif // DATA_H
