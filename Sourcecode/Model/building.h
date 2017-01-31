#ifndef BUILDING_H
#define BUILDING_H

#include <QList>
#include <QString>
#include <QStringList>

#include "treeelement.h"
#include "Model/boni.h"
#include "CounterBoni.h"


class Building : public TreeElement
{
private:
    TreeElement *parent;
    QList<int> costs;
    bool bought;
    QList<Building*> *childs;

public:
    Building(TreeElement *parent = nullptr, QList<int> costs = {0,0,0,0,0}, QString name = "", QList<Building*> *childs = nullptr, QList<Boni*> boni= QList<Boni*>(), bool bought=false) : TreeElement(name,boni), parent(parent), costs(costs), bought(bought), childs(childs){}
    QMap<int, int> getDices();
    QList<TreeElement*> getChildren();
    QStringList getBoniAsText();
    QList<int> getCosts(){return costs;}
    void setParent(TreeElement* t){parent = t;}
    bool parentIsBought(){ if(parent) return parent->isBought(); else return true;}
    bool isBought(){return bought;}
    virtual bool noChildIsBought();
    void setBought(bool Bought){bought = Bought;}
    bool isBuyable();
    bool hasChildren(){return !childs->isEmpty();}
    void setChildren(QList<Building*> *children){childs = children;}
    int getPoints(bool evenIfNotBought = false);
    int getThisPoints();
    QStringList getTextFor(ShowPlaceEnum e);
    int getTradeRatio();
    int getProtection();
    QList<CounterBoni> getCountersFor(QList<int> counterIDs);
};

#endif // BUILDING_H
