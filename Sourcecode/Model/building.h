#ifndef BUILDING_H
#define BUILDING_H

#include <QList>
#include <QString>
#include <QStringList>

#include "treeelement.h"
#include "Model/boni.h"


class Building : public TreeElement
{
private:
    TreeElement *parent;
    QList<int> costs;
    bool bought;
    QList<Building*> *childs;
    QList<Boni*> boni;
public:
    Building(TreeElement *parent, QList<int> costs, QString name, QList<Building*> *childs, QList<Boni*> boni, bool bought=false) : TreeElement(name), parent(parent), costs(costs), bought(bought), childs(childs), boni(boni)
    {
    }
    QMap<int, int> getDices();
    QList<TreeElement*> getChildren();
    QStringList getBoniAsText();
    QList<int> getCosts() {return costs;}
};

#endif // BUILDING_H
