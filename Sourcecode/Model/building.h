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
    QList<Building*> childs;
    QList<Boni*> boni;
public:
    Building(TreeElement *parent, QList<int> costs, QString name, bool bought=false);
    QMap<int, int> getDices();
    QList<TreeElement*> getChildren();
    QStringList getBoniAsText();
};

#endif // BUILDING_H
