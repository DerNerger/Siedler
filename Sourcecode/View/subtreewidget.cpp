#include "subtreewidget.h"

SubtreeWidget::SubtreeWidget(SubTree *Tree, ResourceEnum Res, QWidget *parent) : QGroupBox(parent),tree(Tree),res(Res)
{
    setTitle(Tree->getName());
    setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    grid = new QGridLayout(this);
    grid->setSpacing(20);
    Building * next = (Building*)tree->getChildren().first();
    paintBuilding(next,0,0);
    QSpacerItem* spacer = new QSpacerItem(20,20,QSizePolicy::Preferred,QSizePolicy::Preferred);
    grid->addItem(spacer,grid->rowCount(),0);

}

void SubtreeWidget::paintBuilding(Building *b, int row, int col)
{

    BuildingWidget* w = new BuildingWidget(b,res);

    connect(w,SIGNAL(buildingChanged()),this,SIGNAL(buildingChanged()));

    grid->addWidget(w,row,col);

    QList<TreeElement*> childs = b->getChildren();

    for(int i=0; i < childs.length(); i++)
        paintBuilding((Building*)childs.at(i),row+1,i);
}
