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
    for(pixNameCombi a : pixmaps)
    {
        if(a.first.toLower().contains(name.toLower()))
            return a.second.scaledToHeight(height);
    }
    return QPixmap();
}

QFile* Data::getFile(QString name)
{
    QString s = appFolder;
    QDirIterator it(appFolder,QDir::Files,QDirIterator::Subdirectories);

    QFile* file = NULL;
    QString filePath;
    bool gefunden = false;

    while(it.hasNext())
    {
        QString path = it.next();
        if(path.toLower().contains(name.toLower()))
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

QString Data::getText(QString name)
{
    QDirIterator it(appFolder,QDir::Files,QDirIterator::Subdirectories);
    QString content;

    QFile *file = nullptr;
    while(it.hasNext())
    {
        QString path = it.next();
        if(path.contains(name))
        {
            file = new QFile(path);
            break;
        }
    }
    if(file != nullptr)
    {
        if(file->open(QIODevice::ReadOnly))
            content = file->readAll();
    }
    return content;
}

bool Data::exists(QString name)
{
    QDirIterator it(appFolder,QDir::Files,QDirIterator::Subdirectories);
    while (it.hasNext())
    {
        if(it.next().toLower().contains(name.toLower()))
            return true;
    }
    return false;
}

bool Data::settingExists(QString name)
{
    QSettings set("Lukas Schmitt","Siedler");
    set.sync();
    return set.allKeys().contains(name);
}

QString Data::getPath(QString name)
{
    QDirIterator it(appFolder,QDir::Files,QDirIterator::Subdirectories);
    while (it.hasNext()) {
        if(it.next().contains(name))
            return it.filePath();
    }
    return "";
}

QStringList Data::getMP3s()
{
    QStringList mp3s;
    QDirIterator it(appFolder,QDir::Files,QDirIterator::Subdirectories);
    while (it.hasNext()) {
        if(it.next().endsWith(".mp3"))
            mp3s += it.filePath();
    }
    return mp3s;
}

QString Data::getStylesheet(ResourceEnum resource)
{
    QString tmpFileName;
    switch(resource)
    {
    case SHEEP:
        tmpFileName = "stylesheetSheep.css";
    break;
    case WOOD:
        tmpFileName = "stylesheetWood.css";
    break;
    case CLAY:
        tmpFileName = "stylesheetClay.css";
    break;
    case IRON:
        tmpFileName = "stylesheetIron.css";
    break;
    case WHEAT:
        tmpFileName = "stylesheetWheat.css";
    break;
    case ALL:
        tmpFileName = "stylesheet.css";
    break;
    default:
        tmpFileName = "stylesheet.css";
    }

    QString style;
    if(exists(tmpFileName))
    {
        QFile* styleFile = getFile(tmpFileName);
        if(styleFile->open(QIODevice::ReadOnly))
        {
            style = styleFile->readAll();
            styleFile->close();
            delete styleFile;
        }
    }
    else
        qDebug() << "Konnte Stylesheet nicht finden";
    return style;
}

QString Data::getStylesheet(ColorStyle color)
{
    switch (color) {
    case ColorStyle::Red:
        return getStylesheet(ResourceEnum::SHEEP);
    case ColorStyle::Green:
        return getStylesheet(ResourceEnum::WOOD);
    case ColorStyle::Yellow:
        return getStylesheet(ResourceEnum::WHEAT);
    case ColorStyle::Orange:
        return getStylesheet(ResourceEnum::CLAY);
    case ColorStyle::Purple:
        return getStylesheet(ResourceEnum::IRON);
    default:
        return QString();
    }
}

void Data::setBool(QString key, bool value)
{
    QSettings set("Lukas Schmitt","Siedler");
    set.setValue(key,value);
    set.sync();
}

bool Data::getBool(QString key)
{
    QSettings set("Lukas Schmitt","Siedler");
    set.sync();
    return set.value(key,false).toBool();
}

void Data::setInt(QString key, int value)
{
    QSettings set("Lukas Schmitt","Siedler");
    set.setValue(key,value);
    set.sync();
}

int Data::getInt(QString key, int defaultVal)
{
    QSettings set("Lukas Schmitt","Siedler");
    set.sync();
    return set.value(key,defaultVal).toInt();
}

QPixmap Data::getIcon(ResourceEnum e,int height)
{
    QPixmap tmp;
    switch(e)
    {
    case SHEEP:
        tmp = getPixmap("iconSheep",height);
    break;
    case WOOD:
        tmp = getPixmap("iconWood",height);
    break;
    case CLAY:
        tmp = getPixmap("iconClay",height);
    break;
    case IRON:
        tmp = getPixmap("iconIron",height);
    break;
    case WHEAT:
        tmp = getPixmap("iconWheat",height);
    break;
    case ALL:
    break;
    default:
        break;
    }
    return tmp;
}

QStringList Data::getBonusPunktTypen()
{
    return getText("Bonuspunkttypen.txt").split("\n");
}

Data::Data()
{
    appFolder = QDir(QCoreApplication::applicationDirPath()).absolutePath();
    pixmaps = readPixmaps();
}

QList<pixNameCombi> Data::readPixmaps()
{
    QDirIterator it(appFolder,QDir::Files,QDirIterator::Subdirectories);
    QList<pixNameCombi> list;
    while (it.hasNext()) {
        if(it.next().endsWith(".png"))
        {
            QPixmap pixi;
            if(pixi.load(it.filePath()))
                list += pixNameCombi(it.fileName(),pixi);
        }
    }
    return list;
}
