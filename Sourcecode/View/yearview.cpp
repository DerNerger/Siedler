#include "yearview.h"

YearView::YearView(SeasonController *seasonController, QWidget *parent) : QFrame(parent)
{
    setObjectName("yearView");

    QGridLayout* grid = new QGridLayout(this);

    QPushButton* nextSeason = new QPushButton("Nächste Jahreszeit");
    connect(nextSeason,SIGNAL(clicked()),seasonController,SLOT(nextSeason()));
    grid->addWidget(nextSeason,0,0,1,-1,Qt::AlignCenter);

    QSpacerItem *spacer = new QSpacerItem(1,40,QSizePolicy::Minimum,QSizePolicy::Minimum);
    grid->addItem(spacer,2,0,1,1);
    spacer = new QSpacerItem(30,1,QSizePolicy::Preferred,QSizePolicy::Preferred);
    grid->addItem(spacer,0,0,1,1);

    int col=1;
    for(Season *s : seasonController->getSeasons())
    {
        SeasonView* view = new SeasonView(s);
        seasonWidgets += view;

        grid->addWidget(view,1,col++,1,1,Qt::AlignCenter);
        spacer = new QSpacerItem(30,1,QSizePolicy::Preferred,QSizePolicy::Preferred);
        grid->addItem(spacer,1,col++,1,1);
    }
}

void YearView::paintEvent(QPaintEvent *e)
{
    const int thickness1 = 2;
    const int thickness2 = 4;

    QFrame::paintEvent(e);

    SeasonView* spring = seasonWidgets[0];
    SeasonView* summer = seasonWidgets[1];
    SeasonView* autumn = seasonWidgets[2];
    SeasonView* winter = seasonWidgets[3];

    QList<QLine> lines;

    // Spring to Summer

    int arrowLength = 15;

    int xStart1 = spring->pos().x() + spring->width();
    int yStart1 = spring->pos().y() + spring->height()/2;

    int xEnd1 = summer->pos().x();
    int yEnd1 = summer->pos().y() + summer->height()/2;

    lines += QLine(xStart1,yStart1,xEnd1,yEnd1);
    if(xEnd1-xStart1 > arrowLength + thickness2)
        lines += getArrowLines(QPoint(xEnd1,yEnd1),arrowLength);
    else
        lines += getArrowLines(QPoint(xEnd1,yEnd1),xEnd1-xStart1-thickness2-2);
    // Summer to Autumn

    int xStart2 = summer->pos().x() + summer->width();
    int yStart2 = summer->pos().y() + summer->height()/2;

    int xEnd2 = autumn->pos().x();
    int yEnd2 = autumn->pos().y() + autumn->height()/2;

    lines += QLine(xStart2,yStart2,xEnd2,yEnd2);
    if(xEnd2-xStart2 > arrowLength + thickness2)
        lines += getArrowLines(QPoint(xEnd2,yEnd2),arrowLength);
    else
        lines += getArrowLines(QPoint(xEnd2,yEnd2),xEnd2-xStart2-thickness2-2);

    // Autumn to Winter

    int xStart3 = autumn->pos().x() + autumn->width();
    int yStart3 = autumn->pos().y() + autumn->height()/2;

    int xEnd3 = winter->pos().x();
    int yEnd3 = winter->pos().y() + winter->height()/2;

    lines += QLine(xStart3,yStart3,xEnd3,yEnd3);
    if(xEnd3-xStart3 > arrowLength + thickness2)
        lines += getArrowLines(QPoint(xEnd3,yEnd3),arrowLength);
    else
        lines += getArrowLines(QPoint(xEnd3,yEnd3),xEnd3-xStart3-thickness2-2);

    // Winter to Spring

    int x1 = winter->pos().x() + winter->width();
    int y1 = winter->pos().y() + winter->height()/2;

    int x2 = (width() + (winter->pos().x() + winter->width()))/2;
    int y2 = y1;

    int x3 = x2;
    int y3 = (winter->pos().y() + winter->height() + height())/2;

    int x4 = spring->pos().x()/2;
    int y4 = y3;

    int x5 = x4;
    int y5 = spring->pos().y() + spring->height()/2;

    int x6 = spring->pos().x();
    int y6 = y5;

    if(x6-x5 > arrowLength + thickness2)
        lines += getArrowLines(QPoint(x6,y6),arrowLength);
    else
        lines += getArrowLines(QPoint(x6,y6),x6-x5-thickness2-2);

    lines += QLine(x1,y1,x2,y2);
    lines += QLine(x2,y2,x3,y3);
    lines += QLine(x3,y3,x4,y4);
    lines += QLine(x4,y4,x5,y5);
    lines += QLine(x5,y5,x6,y6);

    QPainter p1(this);

    QBrush brush1(QColor("#9F5E10"));
    QPen pen1(brush1,thickness2);

    QBrush brush2(QColor("#FFE5A1"));
    QPen pen2(brush2,thickness1);

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

QList<QLine> YearView::getArrowLines(QPoint p, int length)
{
    QLine l1(p.x(),p.y(),p.x()-length,p.y()-length/2);
    QLine l2(p.x(),p.y(),p.x()-length,p.y()+length/2);
    QList<QLine> lines;
    lines += l1;
    lines += l2;
    return lines;
}
