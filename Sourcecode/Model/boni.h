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
<<<<<<< HEAD
    QString getBoniAsText();
=======
    virtual QString getBoniAsText() = 0;
>>>>>>> 394c5e56f57ef7f768f38c60226e37d44642ad58
};

#endif // BONI_H
