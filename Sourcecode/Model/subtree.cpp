#include "subtree.h"



SubTree::SubTree(QString name) : TreeElement(name)
{
}

void SubTree::AddChildBuilding(Building *building){
    buildings.append(building);
}
