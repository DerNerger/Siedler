#include "History.h"

History::History()
{

}

void History::appendNewData(QList<Team *> Teams, QList<Event> Events, QList<ratio> Res)
{
    // COLLECT BOUGHT BUILDINGS

    QList<QList<Building*> > boughtBuildingsPerTeam;
    QList<QList<Building*> > lostBuildingsPerTeam;

    for(int i=0;i<5;i++)
        prevBoughtBuildingsPerTeam += QList<Building*>();

    int i = 0;
    for(Team* t : Teams)
    {
        QList<Building *> boughtBuildings;
        QList<TreeElement*> subtrees = t->getChildren();
        for(TreeElement* s : subtrees)
            boughtBuildings += getBoughtBuildings(s);

        QSet<Building*> newBuildings = boughtBuildings.toSet() ;
        QSet<Building*> oldBuildings = prevBoughtBuildingsPerTeam.at(i).toSet();

        QSet<Building*> bought;
        QSet<Building*> lost;
        lost    = oldBuildings;
        lost    -= newBuildings;
        bought  = newBuildings;
        bought  -= oldBuildings;

        boughtBuildingsPerTeam += bought.toList();
        lostBuildingsPerTeam += lost.toList();
        prevBoughtBuildingsPerTeam[i] = boughtBuildings;
        i++;
    }
    capturedYears += Year(boughtBuildingsPerTeam,lostBuildingsPerTeam,Events,Res);
}

void History::clear()
{
    capturedYears.clear();
    prevBoughtBuildingsPerTeam.clear();
}

QList<ratio> History::getLatestResources()
{
    return capturedYears.last().getResources();
}

QList<ratio> History::getAllResources()
{
    QList<ratio> list;
    for(int i = 0 ; i < 5 ; i++)
    {
        ratio r(0,0);
        list.append(r);
    }

    for(Year y : capturedYears)
    {
        for(int i = 0; i<5 ; i++)
        {
            list[i].first += y.getResourcesFrom(static_cast<ResourceEnum>(i)).first;
            list[i].second += y.getResourcesFrom(static_cast<ResourceEnum>(i)).second;
        }
    }
    return list;
}

QList<Building *> History::getBoughtBuildings(TreeElement *t)
{
    QList<Building *> boughtBuildings;
    if(t->isBought())
    {
        if(!t->isSubtree())
            boughtBuildings += static_cast<Building*>(t);
        for(TreeElement * elem : t->getChildren())
        {
            if(elem->isBought())
                boughtBuildings += getBoughtBuildings(elem);
        }
    }
    return boughtBuildings;
}

