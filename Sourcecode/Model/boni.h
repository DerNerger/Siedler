#ifndef BONI_H
#define BONI_H

#include <QMap>
#include <QString>
#include "ShowPlaceEnum.h"

class Boni
{
public:
    Boni();
    int getPoints();
    virtual QMap<int,int> getDices();
    QString getTextFor(enum ShowPlaceEnum place);
    virtual QString getBoniAsText() = 0;
};

#endif // BONI_H
