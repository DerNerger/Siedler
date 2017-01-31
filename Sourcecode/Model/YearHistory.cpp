#include "YearHistory.h"

Year::Year(QList<QList<Building *> > BuildingsBought, QList<QList<Building *> > BuildingsLost, QList<Event> Events, QList<ratio> Resources):
    buildingsBought(BuildingsBought),buildingsLost(BuildingsLost),events(Events),resources(Resources)
{

}

int Year::getSpentResourcesFrom(ResourceEnum e)
{
    int costs = 0 ;
    for(Building* b : buildingsBoughtFrom(e))
    {
        for(int tmp : b->getCosts())
        {
            costs += tmp;
        }
    }
    return costs;
}

int Year::getPointChanges(ResourceEnum e)
{
    int points = 0;
    for(Building* b : buildingsBought[static_cast<int>(e)])
        points += b->getPoints(true);
    for(Building* b : buildingsLost[static_cast<int>(e)])
        points -= b->getPoints(true);
    return points;
}

