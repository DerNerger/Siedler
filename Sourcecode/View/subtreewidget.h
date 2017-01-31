#ifndef SUBTREEWIDGET_H
#define SUBTREEWIDGET_H

#include <QWidget>
#include <QGroupBox>
#include <QPainter>
#include <QGridLayout>
#include <QSpacerItem>
#include <QPaintEvent>
#include <QLine>
#include <QMouseEvent>
#include <QSpacerItem>


#include "Model/subtree.h"
#include "View/buildingwidget.h"


class SubtreeWidget : public QGroupBox
{
    Q_OBJECT
public:
    explicit SubtreeWidget(SubTree* Tree, ResourceEnum Res, QWidget *parent = 0);

signals:
    void buildingChanged();
public slots:
private:
    SubTree* tree;
    ResourceEnum res;
    QGridLayout* grid;

    void paintBuilding(Building* b, int r , int c);
};

#endif // SUBTREEWIDGET_H
