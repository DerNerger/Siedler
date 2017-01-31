#ifndef DATA_H
#define DATA_H

#include "Model/ResourceEnum.h"

#include "QCoreApplication"
#include "QDirIterator"
#include "QDebug"
#include "QIcon"
#include "QPixmap"
#include "QPair"
#include "QSettings"

typedef QPair<QString,QPixmap> pixNameCombi;

enum class ColorStyle{Red,Green,Yellow,Orange,Purple};

class Data
{
public:
    static Data* getInstance();
    QPixmap getPixmap(QString name, int height = 22);
    QFile *getFile(QString name);
    QString getText(QString name);
    bool exists(QString name);
    bool settingExists(QString name);
    QString getPath(QString name);
    QStringList getMP3s();
    QString getStylesheet(ResourceEnum resource = ALL);
    QString getStylesheet(ColorStyle color);
    void setBool(QString key,bool value);
    bool getBool(QString key);
    void setInt(QString key,int value);
    int getInt(QString key,int defaultVal = -1);
    QPixmap getIcon(ResourceEnum e, int height = 200);
    QStringList getBonusPunktTypen();
private:
    Data();
    QList<pixNameCombi > readPixmaps();
    QString appFolder;
    QList<pixNameCombi > pixmaps;
    static QSettings* set;
};

#endif // DATA_H
