#include "eventgenerator.h"

EventGenerator::EventGenerator(QList<Event> BadEvents, QList<Event> GoodEvents, bool random)
{
    unusedBadEvents = BadEvents;
    unusedGoodEvents = GoodEvents;
    this->random = random;
}

QList<Event> EventGenerator::generateEvents(bool multipleEvents)
{
    QList<Event> eventList;
    if(multipleEvents)
    {
        eventList += randomBadEvent();
        eventList += randomGoodEvent();
    }
    else
    {
        eventList += randomEvent();
    }
    return eventList;
}

Event EventGenerator::randomGoodEvent()
{
    Event e;
    if(unusedGoodEvents.length() == 0)
    {
        unusedGoodEvents = usedGoodEvents;
        usedGoodEvents.clear();
    }
    qint64 index = -1;
    if(unusedGoodEvents.length() >= unusedBadEvents.length())
        index = newRand(unusedGoodEvents.length());
    else
        index = newRand(unusedBadEvents.length());

    if(index > -1 && index < unusedGoodEvents.length())
    {
        e = unusedGoodEvents[static_cast<int>(index)];
        unusedGoodEvents.removeAt(static_cast<int>(index));
    }
    usedGoodEvents += e;
    eventHistory += e;
    return e;
}

Event EventGenerator::randomBadEvent()
{
    Event e;
    if(unusedBadEvents.length() == 0)
    {
        unusedBadEvents = usedBadEvents;
        usedBadEvents.clear();
    }
    qint64 index = -1;
    if(unusedBadEvents.length() >= unusedGoodEvents.length())
        index = newRand(unusedBadEvents.length());
    else
    {
        index = newRand(unusedGoodEvents.length());
        if(index > unusedBadEvents.length())
            index = -1;
    }
    if(index > -1)
    {
        e = unusedBadEvents[static_cast<int>(index)];
        unusedBadEvents.removeAt(static_cast<int>(index));
    }
    usedBadEvents += e;
    eventHistory += e;
    return e;
}

Event EventGenerator::randomEvent()
{
    QList<Event> allUnusedEvents;
    allUnusedEvents += unusedBadEvents;
    allUnusedEvents += unusedGoodEvents;

    if(allUnusedEvents.length() == 0)
    {
        unusedGoodEvents = usedGoodEvents;
        unusedBadEvents = usedBadEvents;

        usedGoodEvents.clear();
        usedBadEvents.clear();
    }

    qint64 index = newRand(allUnusedEvents.length());
    Event e = allUnusedEvents[static_cast<int>(index)];
    allUnusedEvents.removeAt(static_cast<int>(index));
    if(index <= unusedBadEvents.length())
    {
        unusedBadEvents.removeAt(static_cast<int>(index));
    }
    else
    {
        unusedGoodEvents.removeAt(static_cast<int>(index-unusedBadEvents.length()));
    }
    return e;
}

qint64 EventGenerator::newRand(int max)
{
    static QTime t;
    qint64 index = ( rand() * (t.currentTime().msecsSinceStartOfDay()/1000) ) % max;
    return index;
}
