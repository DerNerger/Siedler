#ifndef EVENTGENERATOR_H
#define EVENTGENERATOR_H

#include "Model/event.h"

#include <QList>
#include <QTime>
#include <cstdlib>


class EventGenerator
{
public:
    EventGenerator(QList<Event> BadEvents, QList<Event> GoodEvents, bool random = true);
    QList<Event> generateEvents(bool multipleEvents);
    QList<Event> getEventHistory(){return eventHistory;}
private:
    bool random;
    QList<Event> usedGoodEvents;
    QList<Event> usedBadEvents;
    QList<Event> unusedGoodEvents;
    QList<Event> unusedBadEvents;
    QList<Event> eventHistory;

    Event randomGoodEvent();
    Event randomBadEvent();
    Event randomEvent();

    qint64 newRand(int max);
};

#endif // EVENTGENERATOR_H
