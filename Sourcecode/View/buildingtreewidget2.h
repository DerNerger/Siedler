#ifndef BUILDINGTREEWIDGET2_H
#define BUILDINGTREEWIDGET2_H

#include "Model/team.h"

#include "View/buildingwidget.h"

#include <QWidget>
#include <QGridLayout>
#include <QLine>
#include <QSpacerItem>
#include <QPainter>
#include <QMouseEvent>

class buildingTreeWidget2 : public QWidget
{
    Q_OBJECT
public:
    buildingTreeWidget2(Team *T, QWidget *parent = 0);

signals:
    void gotoBuildingTree(ResourceEnum res);
    void gotoOverview();
private:
    QGridLayout *grid;
    Team* t;
    void printNextBuilding(Building *b, int col, int row, QWidget* parent);
    void paintEvent(QPaintEvent *);
    BeamerView beamer;
private slots:
    void repaintBuildings();
    void mouseMoveEvent(QMouseEvent *m);
};

#endif // BUILDINGTREEWIDGET2_H
