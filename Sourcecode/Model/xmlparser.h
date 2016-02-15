#ifndef XMLPARSER_H
#define XMLPARSER_H

#include "QString"
#include "QFile"
#include "QDomElement"
#include "QDomNode"
#include "QStringList"

#include <QDomDocument>
#include <iostream>
#include "subtree.h"
#include "team.h"
#include "building.h"
#include "diceboni.h"
#include "textboni.h"
#include "pointboni.h"

class XMLParser
{
private:
    QString path;
public:
    XMLParser(QString path);
    Team* parseTeam(QString name, ResourceEnum res);
    SubTree* parseSubTree(QDomNode node);
    Building* parseBuilding(QDomNode node, Building *fater);
};

#endif // XMLPARSER_H
