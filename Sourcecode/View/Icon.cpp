#include "Icon.h"

Icon::Icon(QPixmap pixi, Building *B, QWidget *parent) : building(B),QLabel(parent)
{
    setMinimumHeight(pixi.height());
    setMinimumWidth(pixi.width());
    setPixmap(pixi);
}

void Icon::enterEvent(QEvent *e)
{
    emit showBuildingInfo(building);
    e->accept();
}

