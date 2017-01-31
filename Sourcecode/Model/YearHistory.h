#ifndef YEARHISTORY_H
#define YEARHISTORY_H

#include "Model/team.h"
#include "Model/event.h"

typedef QPair<ResourceEnum,Building> buildingForTeam;

class Year
{
public:
    Year(QList<QList<Building*> >BuildingsBought, QList<QList<Building*> >BuildingsLost, QList<Event> Events, QList<ratio> Resources);

    QList<Building*> buildingsBoughtFrom(ResourceEnum e) {return buildingsBought[e];}
    QList<Building*> buildingsLostFrom(ResourceEnum e) {return buildingsLost[e];}
    QList<Event> getEvents(){return events;}
    ratio getResourcesFrom(ResourceEnum e) {return resources[e];}
    QList<ratio> getResources(){return resources;}
    int getSpentResourcesFrom(ResourceEnum e);
    int getPointChanges(ResourceEnum e);

private:
    QList<QList<Building*> > buildingsBought;
    QList<QList<Building*> > buildingsLost;
    QList<Event> events;
    QList<ratio> resources;
};

#endif // YEARHISTORY_H
