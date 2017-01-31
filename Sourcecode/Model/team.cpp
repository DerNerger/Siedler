#include "team.h"

Team::~Team()
{
    for(SubTree* s : subTrees)
        delete s;
}

QList<TreeElement *> Team::getChildren()
{
    QList<TreeElement *> list;
    foreach (SubTree* s, subTrees) {
        list += s;
    }
    return list;
}

int Team::getPoints()
{
    int p = 0;
    p += getBuildingPoints();
    p += getDevelopmentPoints();
    p += getTeamPoints();
    return p;
}

int Team::getBuildingPoints()
{
    int p = 0;
    foreach(TreeElement* elem, getChildren())
    {
        p += elem->getPoints();
    }
    return p;
}

int Team::getDevelopmentPoints()
{
    int p = 0;
    foreach (Development d, dev) {
        d = d;
    }
    return p;
}

int Team::getTeamPoints()
{
    int p = 0;
    for(int i = 0; i < teamPoints.length(); i++)
    {
        p+= teamPoints[i].second;
    }
    return p;
}

void Team::removeTeamPoints(QPair<QString, int> val)
{
    teamPoints.removeAll(val);
}

void Team::removeTeamPoints(QString val)
{
    for(int i = 0 ; i < teamPoints.length(); i++)
    {

        if(val.startsWith(teamPoints[i].first + ":"))
        {
            teamPoints.removeAt(i);
            i--;
        }
    }
}

void Team::addResources(int number)
{
    int earnedRes,maxRes;

    QMapIterator<int,int> i(getDices());
    int tmp = 0;
    while(i.hasNext())
    {
        i.next();
        tmp += i.value() * i.key();
    }

    earnedRes = number;
    maxRes = tmp;

    income += ratio(earnedRes,maxRes);
}

int Team::getResources()
{
    int tmp = 0;
    for(QPair<int,int> r : income)
        tmp += r.first;
    return tmp;
}

ratio Team::getYearResources()
{
    ratio tmp;
    tmp.first  = 0;
    tmp.second = 0;
    if(!income.isEmpty())
         tmp = income.last();
    return tmp;
}

QStringList Team::getTextFor(ShowPlaceEnum e)
{
    QStringList list;
    for(SubTree* s : subTrees)
       list += s->getTextFor(e);
    return list;
}

QString Team::getDicesAsText()
{
    QMapIterator<int,int> i(getDices());
    QString s;
    while (i.hasNext())
    {
        i.next();
        if(i.value() > 0)
            s += QString("%1W%2,").arg(i.value()).arg(i.key());
    }
    s.chop(1);
    if(!s.isEmpty())
        return s;
    else
        return "1W4";
}

int Team::getTradeRatio()
{
    int ratio = 5;
    for(SubTree* s : subTrees)
    {
        int subtreeRatio = s->getTradeRatio();
        if(subtreeRatio < ratio)
            ratio = subtreeRatio;
    }
    return ratio;
}

int Team::getProtection()
{
    int prot = 0;
    for(SubTree* s : subTrees){
        prot += s->getProtection();
    }
    return prot;
}

QList<CounterBoni> Team::getCountersFor(QList<int> counterIDs)
{
    QList<CounterBoni> list;
    for(SubTree* s : subTrees){
        list += s->getCountersFor(counterIDs);
    }
    return list;
}

QPixmap Team::getIcon()
{
    Data* data = Data::getInstance();
    return data->getIcon(resource,100);
}

QString Team::getStylesheet()
{
    Data* d = Data::getInstance();
    return d->getStylesheet(resource);
}
