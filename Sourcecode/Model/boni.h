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
    QMap<int,int> getDices();
    QString getTextFor(enum ShowPlaceEnum place);
    QString getBoniAsText() = delete;
};

#endif // BONI_H
