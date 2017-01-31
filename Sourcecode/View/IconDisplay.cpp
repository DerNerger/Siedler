#include "IconDisplay.h"


IconDisplay::IconDisplay(QList<Building*> BuildingsBought, QList<Building *> BuildingsLost, QWidget *parent, ResourceEnum E):QWidget(parent),Enum(E)
{
    const int ICON_SIZE = 25;
    const int ICON_SPACING = 10;
    layout = new QHBoxLayout(this);

    width = 0;

    for(Building* b : BuildingsBought)
    {
        QPixmap p = Data::getInstance()->getPixmap(b->getName(),ICON_SIZE);
        QPixmap mask(p.size());
        mask.fill(Qt::darkGreen);
        mask.setMask(p.createMaskFromColor(Qt::transparent));
        Icon* icon = new Icon(mask,b);
        connect(icon,SIGNAL(showBuildingInfo(Building*)),this,SLOT(processMouseover(Building*)));
        layout->addWidget(icon);
        if(&b != &(BuildingsBought.last()))
            layout->addSpacing(ICON_SPACING);
        width += ICON_SIZE+ICON_SPACING;
    }
    if(!BuildingsLost.isEmpty())
    {
        layout->addSpacing(ICON_SPACING);
        width += ICON_SPACING;
    }
    for(Building* b : BuildingsLost)
    {
        QPixmap p = Data::getInstance()->getPixmap(b->getName(),ICON_SIZE);
        QPixmap mask(p.size());
        mask.fill(Qt::darkRed);
        mask.setMask(p.createMaskFromColor(Qt::transparent));
        Icon* icon = new Icon(mask,b);
        connect(icon,SIGNAL(showBuildingInfo(Building*)),this,SLOT(processMouseover(Building*)));
        layout->addWidget(icon);
        if(&b != &(BuildingsLost.last()))
            layout->addSpacing(ICON_SPACING);
        width += ICON_SIZE+ICON_SPACING;
    }
}

int IconDisplay::getWidth()
{
    return width;
}

void IconDisplay::processMouseover(Building *b)
{
    emit mouseOverBuilding(b,Enum);
}
