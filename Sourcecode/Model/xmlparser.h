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
#include "building.h"

class XMLParser
{
private:
    QString path;
public:
    XMLParser(QString path);
    void parseTree();
    SubTree* parseSubTree(QDomNode node);
    Building* parseBuilding(QDomNode node);
};

#endif // XMLPARSER_H
