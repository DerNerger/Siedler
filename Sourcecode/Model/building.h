#ifndef BUILDING_H
#define BUILDING_H

#include <QList>
#include <QString>

#include "treeelement.h"

class Building : public TreeElement
{
private:
    TreeElement *parent;
    QList<int> costs;
    bool bought;
    QList<Building*> childs;
public:
    Building(TreeElement *parent, QList<int> costs, QString name, bool bought=false);
};

#endif // BUILDING_H
