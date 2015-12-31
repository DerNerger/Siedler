#ifndef TREEELEMENT_H
#define TREEELEMENT_H

#include <QList>
#include <QString>

class Building;

class TreeElement
{
private:
    QString name;
    QList<Building*> childrens;
public:
    TreeElement(QString name);
};

#include "building.h" //darf nicht oben stehen

#endif // TREEELEMENT_H
