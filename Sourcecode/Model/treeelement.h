#ifndef TREEELEMENT_H
#define TREEELEMENT_H

#include <QList>
#include <QString>
#include <QMap>
#include <QObject>

class Building;

class TreeElement
{
protected:
    QString name;
    QList<Building*> childrens;
public:
    TreeElement(QString name);

    QString getName(){return name;}
    virtual QMap<int,int> getDices();
    virtual QList<TreeElement*> getChildren() = 0;
    virtual bool isBought() = 0;


};

#include "building.h" //darf nicht oben stehen

#endif // TREEELEMENT_H
