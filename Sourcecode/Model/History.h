#ifndef HISTORY_H
#define HISTORY_H

#include "team.h"
#include "event.h"
#include "YearHistory.h"

#include <QStringList>

typedef QPair<int,int> ratio;

class History
{
public:
    History();
    void appendNewData(QList<Team*> Teams, QList<Event> Events, QList<ratio> Res);
    void clear();
    QList<Year> getHistory(){return capturedYears;}
    QList<ratio> getLatestResources();
    QList<ratio> getAllResources();
private:
    QList< QList<Building*> > prevBoughtBuildingsPerTeam;
    QList<Year> capturedYears;
    QList<Building*> getBoughtBuildings(TreeElement* t);
};

#endif // HISTORY_H
