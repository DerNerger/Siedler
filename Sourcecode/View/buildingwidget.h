#ifndef BUILDINGWIDGET_H
#define BUILDINGWIDGET_H

#include <QGroupBox>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include "Model/building.h"
#include "Model/data.h"
#include "Model/ResourceEnum.h"

class BuildingWidget : public QGroupBox
{
    Q_OBJECT
public:
    explicit BuildingWidget(Building *b, ResourceEnum resource, QWidget *parent = 0);

signals:
    void repaint();
public slots:

private:
    QVBoxLayout* layout;
    Building *myBuildingData;
    QString calcDices();

private slots:
    void buyButtonToggled(bool);
};

#endif // BUILDINGWIDGET_H
