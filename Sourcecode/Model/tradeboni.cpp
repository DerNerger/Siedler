#include "tradeboni.h"

TradeBoni::TradeBoni(int value) : value(value)
{

}

QString TradeBoni::getBoniAsText()
{
    return QString("Handel %1:1 mit Bank").arg(value);
}

