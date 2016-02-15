#include "treeelement.h"

TreeElement::TreeElement(QString name) : name(name)
{
}

QMap<int, int> TreeElement::getDices()
{
    QMap<int, int> sum;
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
