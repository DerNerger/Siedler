#ifndef POINTBONI_H
#define POINTBONI_H

#include "boni.h"

class PointBoni : public Boni
{
private:
    int points;
public:
    PointBoni(int points) : points(points){}
    virtual QString getBoniAsText();
    virtual int getPoints();
};

#endif // POINTBONI_H
