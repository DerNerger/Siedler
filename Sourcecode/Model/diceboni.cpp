#include "diceboni.h"

DiceBoni::DiceBoni(QMap<int, int> Dices): dices(Dices)
{

}

QMap<int, int> DiceBoni::getDices()
{
    return dices;
}

QString DiceBoni::getBoniAsText()
{
    return QString();
}

