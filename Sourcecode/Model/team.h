#ifndef TEAM_H
#define TEAM_H

#include "treeelement.h"
#include "ResourceEnum.h"
#include "subtree.h"

#include "diceboni.h"
#include "pointboni.h"
#include "counterboni.h"
#include "Model/data.h"
#include "Model/Development.h"


#include "QString"
#include "QList"

typedef QPair<int,int> ratio;

class Team : public TreeElement
{
private:
    enum ResourceEnum resource;
    QList<SubTree*> subTrees;
    QList<QPair<QString,int> >teamPoints;
    QList<ratio> income;
    QList<Development> dev;
public:
    Team(QString name, ResourceEnum resource, QList<SubTree*> st) : TreeElement(name), resource(resource), subTrees(st)
    {
        QMap<int,int> startingDice;
        startingDice.insert(4,1);
        this->boni += (Boni*)(new DiceBoni(startingDice));
    }
    virtual ~Team();
    virtual QList<TreeElement*> getChildren();
    bool isBought(){return true;}
    int getPoints();
    int getBuildingPoints();
    int getDevelopmentPoints();
    int getTeamPoints();
    QList<QPair<QString, int> >getTeamPointList(){return teamPoints;}
    void addTeamPoints(QPair<QString,int> val){teamPoints += val;}
    void addTeamPoints(QList<QPair<QString, int> >val){teamPoints += val;}
    void removeTeamPoints(QPair<QString,int> val);
    void removeTeamPoints(QString val);
    void addResources(int number);
    int getResources();
    ratio getYearResources();
    ResourceEnum getResource(){return resource;}
    QStringList getTextFor(ShowPlaceEnum e);
    QString getDicesAsText();
    int getTradeRatio();
    int getProtection();
    QList<CounterBoni> getCountersFor(QList<int> counterIDs);
    QPixmap getIcon();
    QString getStylesheet();
    int numberOfDevelopments(){return dev.length();}
    QList<Development> getDevelopments(){return dev;}
    void addDevelopment(Development d){dev += d;}
};

#endif // TEAM_H
