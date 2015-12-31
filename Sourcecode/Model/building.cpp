#include "building.h"

Building::Building(TreeElement *parent, QList<int> costs, QString name, bool bought) : TreeElement(name), parent(parent), costs(costs), bought(bought)
{
}
