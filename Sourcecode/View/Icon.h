#ifndef ICON_H
#define ICON_H

#include <QLabel>
#include <QEvent>

#include "Model/building.h"

class Icon : public QLabel
{
    Q_OBJECT
public:
    Icon(QPixmap pixi,Building* B, QWidget *parent = 0);
signals:
    void showBuildingInfo(Building* building);
private:
    void enterEvent(QEvent* e);
    Building* building;
};

#endif // ICON_H
