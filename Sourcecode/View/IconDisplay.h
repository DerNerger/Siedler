#ifndef ICONDISPLAY_H
#define ICONDISPLAY_H

#include "Model/building.h"
#include "Model/data.h"
#include "View/Icon.h"

#include <QWidget>
#include <QHBoxLayout>
#include <QBitmap>

enum buildingStatus{
    BuildingStandard = 0,
    BuildingBought = 1,
    BuildingLost = 2
};

class IconDisplay : public QWidget
{
    Q_OBJECT
public:
    explicit IconDisplay(QList<Building*> BuildingsBought,QList<Building*> BuildingsLost, QWidget *parent = 0, ResourceEnum E = SHEEP);
signals:
    void mouseOverBuilding(Building*,ResourceEnum);
public slots:
    int getWidth();
private slots:
    void processMouseover(Building* b);
private:
    ResourceEnum Enum;
    QHBoxLayout* layout;
    int width;
};

#endif // ICONDISPLAY_H
