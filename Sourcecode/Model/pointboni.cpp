#include "pointboni.h"

QString PointBoni::getBoniAsText(){
    return QString("Siegpunkte: %1").arg(points);
}

int PointBoni::getPoints(){
    return points;
}
