#include "building.h"

QMap<int, int> Building::getDices()
{
    QMap<int, int> sum;
    if(bought)
    {
        for(Boni* b : boni)
        {
            QMapIterator<int, int> boniIterator(b->getDices());
            while (boniIterator.hasNext())
            {
                boniIterator.next();
                sum[boniIterator.key()] += boniIterator.value();
            }
        }
        for(Building* child : *childs)
        {
            QMapIterator<int, int> childIterator(child->getDices());
            while (childIterator.hasNext())
            {
                childIterator.next();
                sum[childIterator.key()] += childIterator.value();
            }
        }
    }
    return sum;
}

QList<TreeElement *> Building::getChildren()
{
    QList<TreeElement*> tmpList;
    foreach (Building* b, *childs) {
        tmpList += b;
    }
    return tmpList;
}

QStringList Building::getBoniAsText()
{
    QStringList boniStrings;
    for(Boni* b : boni)
        boniStrings += b->getBoniAsText();
    return boniStrings;
}

bool Building::noChildIsBought()
{
    bool childBought = false;
    for(Building* b : *childs)
    {
        childBought |= b->isBought();
    }
    return !childBought;
}

bool Building::isBuyable()
{
    return parent->isBought() && !bought;
}

int Building::getPoints(bool evenIfNotBought)
{
    int sum = 0;
    if(bought || evenIfNotBought)
    {
        for(Boni* b : boni)
            sum += b->getPoints();
        for(Building* b : *childs)
            sum += b->getPoints();
    }
    return sum;
}

int Building::getThisPoints()
{
    int sum = 0;
    for(Boni* b : boni)
        sum += b->getPoints();
    return sum;
}

QStringList Building::getTextFor(ShowPlaceEnum e)
{
    QStringList boniList;
    if(bought)
    {
        for(Boni* b : boni)
        {
            if(!b->isExclusive())
            {
                QString s = b->getTextFor(e);
                if(!s.isEmpty())
                    boniList += s;

            }
            else
            {
                if(noChildIsBought())
                {
                    QString s = b->getTextFor(e);
                    if(!s.isEmpty())
                        boniList += s;
                }
            }
        }
        for(Building* b : *childs)
        {
            boniList += b->getTextFor(e);
        }
    }
    return boniList;
}

int Building::getTradeRatio()
{

    int ratio = 5;
    if(bought)
    {
        ratio = TreeElement::getTradeRatio();
        for(Building* child : *childs)
        {
            int childRatio = child->getTradeRatio();
            if(childRatio < ratio)
                ratio = childRatio;
        }
    }
    return ratio;
}

int Building::getProtection()
{
    int prot = 0;
    if(bought){
        prot = TreeElement::getProtection();
        for(Building* child : *childs){
            prot += child->getProtection();
        }
    }
    return prot;
}

QList<CounterBoni> Building::getCountersFor(QList<int> counterIDs)
{
    QList<CounterBoni> list;
    if(bought)
    {
        for(Boni* b : boni)
        {
            for(int id : counterIDs)
            {
                if(b->counterID() == id )
                {
                    list += *((CounterBoni*)b);

                }
            }
        }
        for(Building* b : *childs)
        {
            list += b->getCountersFor(counterIDs);
        }
    }
    return list;
}
