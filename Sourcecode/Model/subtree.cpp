#include "subtree.h"



SubTree::SubTree(QString name) : TreeElement(name)
{
}

void SubTree::addChildBuilding(Building *building){
    buildings.append(building);
}

QList<TreeElement *> SubTree::getChildren()
{

}

