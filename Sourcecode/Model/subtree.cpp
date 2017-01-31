#include "subtree.h"

SubTree::SubTree(QString name, QList<Building*> *buildings) : TreeElement(name), buildings(buildings)
{
}

SubTree::~SubTree()
{

}

QList<TreeElement *> SubTree::getChildren()
{
    QList<TreeElement *> list;
    foreach (Building* b, *buildings) {
        list += b;
    }
    return list;
}

QStringList SubTree::getTextFor(ShowPlaceEnum e)
{
    QStringList list;
    foreach (Building* b, *buildings)
    {
        list += b->getTextFor(e);
    }
    return list;
}

int SubTree::getPoints()
{
    int sum = 0;
    foreach (Building* b, *buildings)
        sum += b->getPoints();
    return sum;
}

QMap<int, int> SubTree::getDices()
{
    QMap<int,int> map;
    for(Building* b : *buildings)
    {
        QMapIterator<int,int> it(b->getDices());
        while(it.hasNext())
        {
            it.next();
            map.insert(it.key(),map.value(it.key())+(int)it.value());
        }
    }
    return map;
}

int SubTree::getTradeRatio()
{
    int ratio = 5;
    for(Building* b : *buildings)
    {
        int buildingRatio = b->getTradeRatio();
        if(buildingRatio < ratio)
            ratio = buildingRatio;
    }
    return ratio;
}

int SubTree::getProtection()
{
    int prot = 0;
    for(Building* b : *buildings){
        prot += b->getProtection();
    }
    return prot;
}

QList<CounterBoni> SubTree::getCountersFor(QList<int> counterIDs)
{
    QList<CounterBoni> list;
    for(Building* b : *buildings){
        list += b->getCountersFor(counterIDs);
    }
    return list;
}

