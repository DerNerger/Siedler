#ifndef TREEELEMENT_H
#define TREEELEMENT_H

#include <QList>
#include <QString>
#include <QMap>
#include <QObject>

#include "Model/boni.h"

class Building;

class TreeElement
{
protected:
    QString name;
    QList<Boni*> boni;
public:
    TreeElement(QString name);
    TreeElement(QString name,QList<Boni*> Boni);
    QString getName(){return name;}
    virtual QMap<int,int> getDices();
    virtual QList<TreeElement*> getChildren() = 0;
    virtual bool isBought(){return false;}
    virtual int getPoints();
    virtual bool hasChildren(){return false;}
    virtual bool isBuyable(){return false;}
    virtual QStringList getTextFor(ShowPlaceEnum e);
    virtual int getTradeRatio();
    virtual int getProtection();
    virtual bool isSubtree(){return false;}
};

#include "building.h" //darf nicht oben stehen

#endif // TREEELEMENT_H
