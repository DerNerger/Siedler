#ifndef SUBTREE_H
#define SUBTREE_H

#include <QList>
#include "QString"
#include "building.h"
#include "treeelement.h"

class SubTree : public TreeElement
{
private:
    QList<Building*> buildings;
public:
    SubTree(QString name);
    void AddChildBuilding(Building * building);
};

#endif // SUBTREE_H
