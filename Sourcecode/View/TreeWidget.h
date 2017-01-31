#ifndef TREEWIDGET_H
#define TREEWIDGET_H

#include <QWidget>
#include <QGridLayout>
#include <QPainter>
#include <QGridLayout>
#include <QLine>
#include <QSpacerItem>
#include <QMouseEvent>
#include <QPair>
#include <QPoint>
#include <QPaintEvent>
#include <QPainter>
#include <QPen>

#include "View/buildingwidget.h"
#include "Model/team.h"
#include "Model/data.h"


class TreeWidget : public QWidget
{
    Q_OBJECT
public:
    TreeWidget(Team *T, bool ForPicture = false, QWidget *parent = 0);
signals:
    void gotoBuildingTree(ResourceEnum e);
    void gotoOverview();
    void updateHistory(QList<Building*>,QList<Building*>,ResourceEnum);
private slots:
    void repaintBuildings();
private:
    bool forPicture;
    Team* t;
    int printBuilding(Building *b, QWidget *prev, int col, int row);
    QList<QLine> generateArrows();
    void paintEvent(QPaintEvent *e);
    QList<QPair<QWidget*,QWidget*> > buildingPairs;
    QGridLayout* grid;
    QPoint getStartingPoint(QWidget* w);
    QPoint getEndingPoint(QWidget* w);
};

#endif // TREEWIDGET_H
