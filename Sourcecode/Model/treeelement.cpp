#include "treeelement.h"

TreeElement::TreeElement(QString name) : name(name), childrens()
{
}

QMap<int, int> TreeElement::getDices()
{
    QMap<int, int> sum;
    foreach(TreeElement* hans , getChildren())
    {
        QMap<int, int> childDices = hans->getDices();
        QMapIterator<int, int> iterator(childDices);
        while (iterator.hasNext())
        {
            iterator.next();
            sum[iterator.key()] += iterator.value();
        }
    }
    return sum;
}
