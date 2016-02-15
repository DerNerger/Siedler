#include "subtree.h"



SubTree::SubTree(QString name, QList<Building*> *buildings) : TreeElement(name), buildings(buildings)
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

