#include "xmlparser.h"

XMLParser::XMLParser(QString path) : path(path)
{}

Team *XMLParser::parseTeam(QString name, ResourceEnum res)
{
    QDomDocument doc("SiedlerDoc");
    QFile file(path);
    file.open(QIODevice::ReadOnly);
    doc.setContent(&file);
    file.close();
    QDomElement docElem = doc.documentElement();
    QDomNode n = docElem.firstChild();
    QList<SubTree*> childrenList;
    while(!n.isNull()) {
        SubTree* tree = parseSubTree(n);
        childrenList.append(tree);
        n = n.nextSibling();
    }
    Team *t = new Team(name, res, childrenList);
    return t;
}

SubTree* XMLParser::parseSubTree(QDomNode node){
    QDomElement e = node.toElement();
    QString tagName = e.tagName();
    if(tagName!="SubTree") return NULL;
    QString name = e.attribute("Name");
    if(name=="") return NULL;

    QList<Building*> *childrenList = new QList<Building*>();
    QDomNode child = e.firstChild();
    if(!child.isNull()){
        Building* building = parseBuilding(child, 0);
        childrenList->append(building);
        child = child.nextSibling();
    }
    SubTree *tree = new SubTree(name, childrenList);
    return tree;
}

Building* XMLParser::parseBuilding(QDomNode node, Building* fater){
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

    QList<Boni*> boniList;
    if(e.hasAttribute("dice")){
        QString dice = e.attribute("dice");
        QStringList parts = dice.split(",");
        QMap<int, int> diceMap;
        for(QString s : parts){
            QStringList parts2 = s.split("W");
            diceMap[parts2[0].toInt()]=parts2[1].toInt();
        }
        Boni *boni = new DiceBoni(diceMap);
        boniList.append(boni);
    }

    if(e.hasAttribute("text")){
        QString text = e.attribute("text");
        QStringList parts = text.split(":");
        ShowPlaceEnum spe;
        if(parts[0]=="NewYear")
            spe = NewYear;
        else
            throw "invalid ShowPlaceEnum";
        Boni *boni = new TextBoni(parts[1], spe);
        boniList.append(boni);
    }

    if(e.hasAttribute("points")){
        QString points = e.attribute("points");
        Boni *boni = new PointBoni(points.toInt());
        boniList.append(boni);
    }
    QList<Building*> *childrenList = new QList<Building*>();

    Building *building = new Building(fater, costsList, name, childrenList, boniList);
    QDomNode child = e.firstChild();
    if(!child.isNull()){
        Building* building = parseBuilding(child, building);
        childrenList->append(building);
        child = child.nextSibling();
    }

    return building;
}
