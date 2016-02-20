#ifndef SUBTREE_H
#define SUBTREE_H

#include <QList>
#include "QString"
#include "building.h"
#include "treeelement.h"

class SubTree : public TreeElement
{
private:
    QList<Building*> *buildings;
public:
    SubTree(QString name, QList<Building*> *buildings);
    ~SubTree();
    virtual QList<TreeElement*> getChildren();
    bool isBought(){return true;}
};

#endif // SUBTREE_H
