#ifndef TEAM_H
#define TEAM_H

#include "treeelement.h"
#include "ResourceEnum.h"
#include "subtree.h"

#include "QString"
#include "QList"


class Team : public TreeElement
{
private:
    enum ResourceEnum resource;
    QList<SubTree> subTrees;
public:
    Team(QString name, enum ResourceEnum resource);
};

#endif // TEAM_H
