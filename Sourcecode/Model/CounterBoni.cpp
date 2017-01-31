#include "CounterBoni.h"

CounterBoni::CounterBoni(int id, QString Text) : ID(id),text(Text)
{

}

int CounterBoni::counterID()
{
    return ID;
}

QString CounterBoni::getTextFor(ShowPlaceEnum place)
{
    place = place;
    return text;
}

QString CounterBoni::getBoniAsText()
{
    return text;
}



