#include "eventparser.h"

EventParser::EventParser()
{

}

QList<Event> EventParser::getGoodEvents()
{
    Data *data = Data::getInstance();
    QList<Event> events;
    if(data->exists("events.xml"))
    {
        doc = new QDomDocument();
        doc->setContent(data->getText("events.xml"));

        QDomElement rootElem = doc->documentElement();
        QDomNodeList list = rootElem.childNodes();
        for(int i = 0 ; i<list.length() ; i++)
        {
            QDomNode node = list.at(i);
            QString tag = node.toElement().tagName();
            if(tag == "GoodEvents")
            {
                QDomNode n = node.firstChild();
                while (!n.isNull())
                {
                    events += parseEvent(n,true);
                    n = n.nextSibling();
                }
            }
        }
    }
    return events;
}

QList<Event> EventParser::getBadEvents()
{
    Data *data = Data::getInstance();
    QList<Event> events;
    if(data->exists("events.xml"))
    {
        doc = new QDomDocument();
        doc->setContent(data->getText("events.xml"));

        QDomElement rootElem = doc->documentElement();
        QDomNodeList list = rootElem.childNodes();
        for(int i = 0 ; i<list.length() ; i++)
        {
            QDomNode node = list.at(i);
            QString tag = node.toElement().tagName();
            if(tag == "BadEvents")
            {
                QDomNode n = node.firstChild();
                while (!n.isNull())
                {
                    events += parseEvent(n,false);
                    n = n.nextSibling();
                }
            }
        }
    }
    return events;
}

Event EventParser::parseEvent(QDomNode node,bool pos)
{
    QString title,description,sound;
    QList<Boni*> boni;
    int counterID = -1;
    Factor fac;
    fac.first = ALL;
    fac.second = 1.0;
    QDomNodeList items = node.childNodes();
    for(int i=0; i<items.length(); i++)
    {
        QDomElement elem = items.at(i).toElement();
        QString name = elem.nodeName();
        if(name == "Title")
            title = elem.text();
        if(name == "Description")
            description = elem.text();
        if(name == "Sound")
            sound = elem.text();
        if(name == "DiceBoni")
        {
            QString dice = elem.text();
            QStringList parts = dice.split(",");
            QMap<int, int> diceMap;
            for(QString s : parts)
            {
                QStringList parts2 = s.split("W");
                diceMap[parts2[1].toInt()]=parts2[0].toInt();
            }
            boni += new DiceBoni(diceMap);
        }
        if(name == "DiceFactor")
        {
            QString factor = elem.text();
            QStringList parts = factor.split(":");
            if(parts.length() == 1)
            {
                fac.first = ALL;
                fac.second = parts[0].toDouble();
            }
            else
            {
                if(parts[0].toLower().contains("sheep"))
                    fac.first = SHEEP;
                else if(parts[0].toLower().contains("wood"))
                    fac.first = WOOD;
                else if(parts[0].toLower().contains("clay"))
                    fac.first = CLAY;
                else if(parts[0].toLower().contains("iron"))
                    fac.first = IRON;
                else if(parts[0].toLower().contains("wheat"))
                    fac.first = WHEAT;
                else
                    fac.first = ALL;
                fac.second = parts[1].toDouble();
            }
        }
        if(name == "counterID")
        {
            QString counter = elem.text();
            int tmp = counter.toInt();
            if(tmp > -1)
                counterID = tmp;
        }

    }
    return Event(pos,title,description,sound,counterID,boni,fac);
}
