#ifndef EVENT_H
#define EVENT_H

#include <QString>
#include <QPair>
#include <Model/boni.h>
#include <Model/ResourceEnum.h>

typedef QPair<ResourceEnum,double> Factor;

class Event
{
public:
    Event(bool positive = true, QString title = "", QString description = "", QString sound = "", int CounterID = -1, QList<Boni*> boni = QList<Boni*>(), Factor factor = Factor(ALL,1.0));
    QString title(){return t;}
    QString description(){return d;}
    QString sound(){return s;}
    int counterID(){return cID;}
    QList<Boni*> bonis(){return b;}
    Factor factor(){return f;}
    bool isPositive(){return pos;}
private:
    bool pos;
    QString t;
    QString d;
    QString s;
    int cID;
    QList<Boni*> b;
    Factor f;
};

#endif // EVENT_H
