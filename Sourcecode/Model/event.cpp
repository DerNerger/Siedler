#include "event.h"

Event::Event(bool positive, QString title, QString description, QString sound, int CounterID, QList<Boni *> boni, Factor factor) : pos(positive), t(title), d(description), s(sound), cID(CounterID), b(boni), f(factor)
{

}
