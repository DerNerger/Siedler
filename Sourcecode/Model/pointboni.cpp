#include "pointboni.h"

QString PointBoni::getBoniAsText(){
    return QString("Points:")+points;
}

int PointBoni::getPoints(){
    return points;
}
