#include "data.h"

Data *Data::getInstance()
{
    static Data* instance = nullptr;
    if(!instance)
        instance = new Data();
    return instance;
}

QPixmap Data::getPixmap(QString name, int height)
{
    QDirIterator it(appFolder->absolutePath(),QDir::Files,QDirIterator::Subdirectories);
    QPixmap pixi;
    QString pixiPath;
    bool gefunden = false;

    while(it.hasNext())
    {
        QString path = it.next();
        if(path.contains(name.toLower() + ".png") || path.contains(name + ".png"))
        {
            if(gefunden)
            {
                qDebug() << "Die Bilddatei " + name + ".png wurde mehrfach gefunden.";
                qDebug() << "Fundort 1: " + pixiPath;
                qDebug() << "Fundort 2: " + path;
            }
            else
                pixiPath = path;
            if(pixi.load(path))
            {
                pixi = pixi.scaledToHeight(height);
            }

            gefunden = true;
        }
    }
    return pixi;
}

QFile* Data::getFile(QString name)
{
    QString s = appFolder->absolutePath();
    QDirIterator it(appFolder->absolutePath(),QDir::Files,QDirIterator::Subdirectories);

    QFile* file = NULL;
    QString filePath;
    bool gefunden = false;

    while(it.hasNext())
    {
        QString path = it.next();
        if(path.contains(name))
        {
            if(gefunden)
            {
                qDebug() << "Die Datei " + name + " wurde mehrfach gefunden.";
                qDebug() << "Fundort 1: " + filePath;
                qDebug() << "Fundort 2: " + path;
            }
            else
                filePath = path;
            file = new QFile(path);
            gefunden = true;
        }
    }
    return file;
}

bool Data::exists(QString name)
{
    QDirIterator it(appFolder->absolutePath(),QDir::Files,QDirIterator::Subdirectories);
    while (it.hasNext()) {
        if(it.next().contains(name))
            return true;
    }
    return false;
}

Data::Data()
{
    appFolder = new QDir(QCoreApplication::applicationDirPath());
}
