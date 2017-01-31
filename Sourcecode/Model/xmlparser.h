#ifndef XMLPARSER_H
#define XMLPARSER_H

#include "QString"
#include "QFile"
#include "QDomElement"
#include "QDomNode"
#include "QStringList"

#include <QDomDocument>

#include "subtree.h"
#include "team.h"
#include "building.h"
#include "diceboni.h"
#include "textboni.h"
#include "pointboni.h"
#include "tradeboni.h"
#include "ProtectionBoni.h"

class XMLParser
{
private:
    QString path;
    bool buyEverything;
public:
    XMLParser(QString path, bool BuyEverything = false);
    Team* parseTeam(QString name, ResourceEnum res);
    SubTree* parseSubTree(QDomNode node);
    Building* parseBuilding(QDomNode node, Building *parent);
};

#endif // XMLPARSER_H
