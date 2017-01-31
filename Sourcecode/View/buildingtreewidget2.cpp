#include "buildingtreewidget2.h"

buildingTreeWidget2::buildingTreeWidget2(Team *T, QWidget *parent) : QWidget(parent),t(T)
{
    setMouseTracking(true);
    grid = new QGridLayout(this);
    grid->setHorizontalSpacing(30);
    grid->setVerticalSpacing(30);

    int col = 0;
    for(TreeElement* tmp : t->getChildren())
    {
        QLabel* treeTitle = new QLabel(tmp->getName());
        treeTitle->setObjectName("subtreeTitle");
        treeTitle->setAlignment(Qt::AlignCenter);
        grid->addWidget(treeTitle,0,col);
        for(TreeElement* elem : tmp->getChildren())
        {
            Building *tmpBuilding = (Building*) elem;
            printNextBuilding(tmpBuilding,col,1,treeTitle);
            col++;
        }        
        // HIER WARST DU!!!
    }

    QSpacerItem *spacer = new QSpacerItem(20,20);
    grid->addItem(spacer,grid->rowCount(),0,1,grid->columnCount());
    QPushButton* back = new QPushButton("Zurück");
    connect(back,SIGNAL(released()),this,SIGNAL(gotoOverview()));
    if(grid->columnCount()%2)
    { // ungerade
        grid->addWidget(back,grid->rowCount(),grid->columnCount()/2,1,1);
    }
    else
    { // gerade
        grid->addWidget(back,grid->rowCount(),(grid->columnCount()/2)-1,1,2);
    }

}

void buildingTreeWidget2::printNextBuilding(Building *b, int col, int row, QWidget *parent)
{
    BuildingWidget *widget = new BuildingWidget(b,t->getResource());
    connect(widget,SIGNAL(buildingChanged()),this,SLOT(repaintBuildings()));
    /*
    int xParent = parent->x() + parent->width()/2;
    int yParent = parent->y() + parent->height();
    int xChild  = widget->x() + widget->width()/2;
    int yChild  = widget->y();

    arrows += QLine(xParent,yParent,xChild,yChild);*/
    grid->addWidget(widget,row++,col);
    for(TreeElement* elem : b->getChildren())
    {
        Building *tmpBuilding = (Building*)elem;
        printNextBuilding(tmpBuilding,col,row,widget);
    }
}

void buildingTreeWidget2::paintEvent(QPaintEvent *)
{
    QPainter p(this);

    p.setPen(QPen(QColor(255, 255, 255), 3));

    p.drawLine(10,10,1000,1500);
}

void buildingTreeWidget2::repaintBuildings()
{
    emit gotoBuildingTree(t->getResource());
}

void buildingTreeWidget2::mouseMoveEvent(QMouseEvent *m)
{
    beamer.updateMousePos(m->pos());
}

