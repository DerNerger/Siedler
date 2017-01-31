#ifndef BUILDINGWIDGET_H
#define BUILDINGWIDGET_H

#include <QGroupBox>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPoint>
#include <QLineEdit>
#include <QMouseEvent>

#include "Model/building.h"
#include "Model/data.h"
#include "Model/ResourceEnum.h"

class BuildingWidget : public QFrame
{
    Q_OBJECT
public:
    explicit BuildingWidget(Building *b, ResourceEnum resource, bool readOnly = false, QWidget *parent = 0);
    BuildingWidget();
signals:
    void buildingChanged();
public slots:

private:
    Building *myBuildingData;
    QVBoxLayout* layout;
    bool forPicture;
private slots:
    void buyClicked();
    void destroyClicked();
    void mouseDoubleClickEvent(QMouseEvent *event);
};

#endif // BUILDINGWIDGET_H
