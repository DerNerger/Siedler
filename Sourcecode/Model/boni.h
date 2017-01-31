#ifndef BONI_H
#define BONI_H

#include <QMap>
#include <QString>
#include "ShowPlaceEnum.h"

class Boni
{
public:
    Boni();
    virtual ~Boni(){;}
    virtual int getPoints();
    virtual QMap<int,int> getDices();
    virtual int getTradeRatio();
    virtual QString getTextFor(enum ShowPlaceEnum place);
    virtual QString getBoniAsText() = 0;
    virtual bool isExclusive(){return false;}
    virtual int getProtection();
    virtual int counterID(){return -1;}
};

#endif // BONI_H
