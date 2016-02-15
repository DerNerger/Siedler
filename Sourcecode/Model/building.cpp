#include "building.h"



QMap<int, int> Building::getDices()
{
    QMap<int, int> sum;
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
