#include "xmlparser.h"

XMLParser::XMLParser(QString path) : path(path)
{
}

void XMLParser::parseTree()
{
    QDomDocument doc("SiedlerDoc");
    QFile file(path);
    file.open(QIODevice::ReadOnly);
    doc.setContent(&file);
    file.close();
    QDomElement docElem = doc.documentElement();
    QDomNode n = docElem.firstChild();
    while(!n.isNull()) {
        SubTree* tree = parseSubTree(n);
        n = n.nextSibling();
    }
}

SubTree* XMLParser::parseSubTree(QDomNode node){
    QDomElement e = node.toElement();
    QString tagName = e.tagName();
    if(tagName!="SubTree") return NULL;
    QString name = e.attribute("Name");
    if(name=="") return NULL;
    SubTree *tree = new SubTree(name);
    QDomElement elem = node.toElement();
    QDomNode child = elem.firstChild();
    if(!child.isNull()){
        Building* building = parseBuilding(child);
        tree->AddChildBuilding(building);
        child = child.nextSibling();
    }
}

Building* XMLParser::parseBuilding(QDomNode node){
    QDomElement e = node.toElement();
    QString tagName = e.tagName();
    if(tagName!="Building") return NULL;
    QString name = e.attribute("Name");
    if(name=="") return NULL;
    if(!e.hasAttribute("costs")) return NULL;

    QList<int> costsList;
    QString costs = e.attribute("costs");
    QStringList parts = costs.split(",");
    for(QString s : parts){
        costsList.append(s.toInt());
    }
    Building *building = new Building(0, costsList, name);

    if(e.hasAttribute("dice")){
        QString dice = e.attribute("dice");
    }
    if(e.hasAttribute("text")){
        QString text = e.attribute("text");
    }
    if(e.hasAttribute("points")){
        QString points = e.attribute("points");
    }
    return building;
}

//costs="3,5,1,2,5", dice="1W6,2W4", text="NewYear:Du darfst diese Runde einen Wurf wiederholen.,Uebersicht:und noch was anderes", points="7
