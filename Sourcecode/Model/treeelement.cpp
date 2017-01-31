#include "treeelement.h"

TreeElement::TreeElement(QString name) : name(name)
{
}

TreeElement::TreeElement(QString name, QList<Boni *> Boni) : name(name), boni(Boni)
{

}

QMap<int, int> TreeElement::getDices()
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
    foreach(TreeElement* elem, getChildren())
    {
        QMap<int, int> childDices = elem->getDices();
        QMapIterator<int, int> iterator(childDices);
        while (iterator.hasNext())
        {
            iterator.next();
            sum[iterator.key()] += iterator.value();
        }
    }
    return sum;
}

int TreeElement::getPoints()
{
    return 0;
}

QStringList TreeElement::getTextFor(ShowPlaceEnum e)
{
    e = e;
    return QStringList();
}

int TreeElement::getTradeRatio()
{
    int ratio = 5;
    for(Boni* b : boni)
    {
        if(b->getTradeRatio() < ratio)
            ratio = b->getTradeRatio();
    }
    return ratio;
}

int TreeElement::getProtection()
{
    int prot = 0;
    for(Boni*b : boni)
    {
        prot += b->getProtection();
    }
    return prot;
}
