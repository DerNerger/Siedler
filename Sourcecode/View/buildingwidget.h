#ifndef BUILDINGWIDGET_H
#define BUILDINGWIDGET_H

#include <QGroupBox>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include "Model/building.h"

class BuildingWidget : public QGroupBox
{
    Q_OBJECT
public:
    explicit BuildingWidget(Building *b, QWidget *parent = 0);

signals:

public slots:

private:
    QVBoxLayout* layout;
    Building *myBuildingData;
    void initStylesheet();
    QString calcDices();
};

#endif // BUILDINGWIDGET_H
