#ifndef EVENTPARSER_H
#define EVENTPARSER_H

#include "Model/data.h"
#include "Model/event.h"
#include "Model/diceboni.h"
#include "Model/boni.h"
#include "Model/CounterBoni.h"

#include <QDomDocument>
#include <QFile>


class EventParser
{
public:
    EventParser();
    QList<Event> getGoodEvents();
    QList<Event> getBadEvents();
private:
    Event parseEvent(QDomNode node, bool pos);
    Data* data;
    QDomDocument* doc;
};

#endif // EVENTPARSER_H
