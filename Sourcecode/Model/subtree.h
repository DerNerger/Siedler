#ifndef SUBTREE_H
#define SUBTREE_H

#include <QList>
#include "QString"
#include "building.h"
#include "treeelement.h"
#include "counterboni.h"

class SubTree : public TreeElement
{
private:
    QList<Building*> *buildings;
public:
    SubTree(QString name, QList<Building*> *buildings);
    virtual ~SubTree();
    virtual QList<TreeElement*> getChildren();
    bool isBought(){return true;}
    bool hasChildren(){return !buildings->isEmpty();}
    QStringList getTextFor(ShowPlaceEnum e);
    int getPoints();
    QMap<int,int> getDices();
    int getTradeRatio();
    int getProtection();
    QList<CounterBoni> getCountersFor(QList<int> counterIDs);
    virtual bool isSubtree(){return true;}
};

#endif // SUBTREE_H
