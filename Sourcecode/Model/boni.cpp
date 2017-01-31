#include "boni.h"

Boni::Boni()
{
}

int Boni::getPoints(){
    return 0;
}

QMap<int, int> Boni::getDices()
{
    return QMap<int,int>();
}

int Boni::getTradeRatio()
{
    return 5;
}

QString Boni::getTextFor(enum ShowPlaceEnum place)
{
    place = place;
    return "";
}

int Boni::getProtection()
{
    return 0;
}
