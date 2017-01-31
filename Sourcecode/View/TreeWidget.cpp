#include "TreeWidget.h"

TreeWidget::TreeWidget(Team *T, bool ForPicture, QWidget *parent) : QWidget(parent),forPicture(ForPicture),t(T)
{
    setMouseTracking(true);
    grid = new QGridLayout(this);

    int col=1;
    QList<TreeElement*> subtreeList = t->getChildren();
    for(int i=0 ; i<subtreeList.length() ; i++)
    {
        QLineEdit* subtreeTitle = new QLineEdit(subtreeList[i]->getName());
        subtreeTitle->setReadOnly(true);
        subtreeTitle->setObjectName("subtreeTitle");
        subtreeTitle->setAlignment(Qt::AlignCenter);
        grid->addWidget(subtreeTitle,2,col);

        QList<TreeElement*> buildingList = subtreeList[i]->getChildren();
        for(int j=0 ; j<buildingList.length() ; j++)
            col = printBuilding(static_cast<Building*>(buildingList[j]),subtreeTitle,col,3);

        col++;
    }
    for(int i = 1 ; i < grid->columnCount() ; i++)
        grid->setColumnStretch(i,1);

    if(!forPicture)
    {
        QPushButton* back = new QPushButton(tr("Zurück"));
        back->setObjectName("mainMenuButton");
        connect(back,SIGNAL(released()),this,SIGNAL(gotoOverview()));
        grid->addWidget(back,grid->rowCount(),0,1,-1,Qt::AlignCenter);
    }

    QLabel* teamName = new QLabel(t->getName());
    teamName->setObjectName("teamNameTitle");
    teamName->setStyleSheet(t->getStylesheet());
    grid->addWidget(teamName,0,0,1,-1,Qt::AlignCenter);


    grid->setHorizontalSpacing(10);
    grid->setVerticalSpacing(25);

    QSpacerItem *s = new QSpacerItem(1,1,QSizePolicy::MinimumExpanding,QSizePolicy::MinimumExpanding);
    grid->addItem(s,0,0);
    s = new QSpacerItem(1,1,QSizePolicy::MinimumExpanding,QSizePolicy::MinimumExpanding);
    grid->addItem(s,grid->rowCount(),grid->columnCount());

    grid->setRowStretch(0,1);
    grid->setRowStretch(grid->rowCount()-1,1);
    grid->setColumnStretch(0,1);
    grid->setColumnStretch(grid->columnCount()-1,1);
}

void TreeWidget::repaintBuildings()
{
    emit gotoBuildingTree(t->getResource());
}

int TreeWidget::printBuilding(Building *b, QWidget *prev, int col, int row)
{
    BuildingWidget * w = new BuildingWidget(b,t->getResource(),forPicture);
    connect(w,SIGNAL(buildingChanged()),this,SLOT(repaintBuildings()));

    buildingPairs += QPair<QWidget*,QWidget*>(prev,w);
    grid->addWidget(w,row,col);

    QList<TreeElement*> children = b->getChildren();
    for(int i=0; i<children.length(); i++)
        col = printBuilding(static_cast<Building*>(children[i]),w,col+i,row+1);

    return col;
}

QList<QLine> TreeWidget::generateArrows()
{
    QList<QLine> lines;
    for(QPair<QWidget*,QWidget*> pair : buildingPairs)
    {
        QWidget* wStart = pair.first;
        QWidget* wEnd   = pair.second;

        QPoint start = getStartingPoint(wStart);
        QPoint end = getEndingPoint(wEnd);
        QLine vert1,vert2,hor1,peakLeft,peakRight;

        vert1.setP1(start);
        vert1.setP2(QPoint(start.x(),(start.y()+end.y())/2-4));

        vert2.setP1(QPoint(end.x(),(start.y()+end.y())/2-4));
        vert2.setP2(end);

        hor1.setP1(QPoint(start.x(),(start.y()+end.y())/2-4));
        hor1.setP2(QPoint(end.x(),(start.y()+end.y())/2-4));

        peakLeft.setP1(end);
        peakLeft.setP2(QPoint(end.x()-4,end.y()-8));

        peakRight.setP1(end);
        peakRight.setP2(QPoint(end.x()+4,end.y()-8));

        lines += vert1;
        lines += vert2;
        lines += hor1;
        lines += peakLeft;
        lines += peakRight;
    }
    return lines;
}

void TreeWidget::paintEvent(QPaintEvent *e)
{
    QList<QLine> lines = generateArrows();

    QPainter p1(this);
    QBrush brush1(QColor("#9F7810"));
    QPen pen1(brush1,5);

    QBrush brush2(QColor("#FFE5A1"));
    QPen pen2(brush2,2);

    p1.setPen(pen1);
    for(QLine l : lines)
    {
        p1.drawLine(l);
    }
    p1.setPen(pen2);
    for(QLine l : lines)
    {
        p1.drawLine(l);
    }
    e->accept();
}

QPoint TreeWidget::getStartingPoint(QWidget *w)
{
    int x = w->pos().x() + w->width()/2;
    int y = w->pos().y() + w->height();
    return QPoint(x,y);
}

QPoint TreeWidget::getEndingPoint(QWidget *w)
{
    int x = w->pos().x() + w->width()/2;
    int y = w->pos().y();
    return QPoint(x,y);
}
