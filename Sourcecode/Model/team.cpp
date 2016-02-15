#include "team.h"

QList<TreeElement *> Team::getChildren()
{
    QList<TreeElement *> list;
    foreach (SubTree* s, subTrees) {
        list += s;
    }
    return list;
}
