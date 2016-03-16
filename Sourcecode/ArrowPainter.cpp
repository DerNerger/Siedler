#include "ArrowPainter.h"

ArrowPainter::ArrowPainter(QWidget* Widget)
{
    p = new QPainter(Widget);
    painterAppearance.setWidth(2);
    painterAppearance.setColor(Qt::black);
    p->setPen(painterAppearance);
    p->setRenderHint(QPainter::Antialiasing);
}

ArrowPainter::~ArrowPainter()
{
    delete p;
}

void ArrowPainter::paint(QPoint From, QPoint To, Arrow::Direction Dir)
{
    from = From;
    to = To;
    if(Dir == Arrow::automatic)
    {
        if(abs(from.x()-to.x()) > abs(from.y()-to.y()))
            left2right();
        else
            top2bottom();
    }
    else
    {
        if(Dir == Arrow::horizontal)
            left2right();
        else
            top2bottom();
    }
}

void ArrowPainter::left2right()
{
    int xWidth = to.x() - from.x();

    QLine sectionOne(from.x(),from.y(),from.x()+xWidth/2,from.y());
    QLine sectionTwo(from.x()+xWidth/2,from.y(),from.x()+xWidth/2,to.y());
    QLine sectionThr(from.x()+xWidth/2,to.y(),to.x(),to.y());

    p->drawLine(sectionOne);
    p->drawLine(sectionTwo);
    p->drawLine(sectionThr);

    QLine arrowTopLine(to.x(),to.y(),to.x()-25,to.y()+5);
    QLine arrowBottomLine(to.x(),to.y(),to.x()-25,to.y()-5);

    p->drawLine(arrowTopLine);
    p->drawLine(arrowBottomLine);
}

void ArrowPainter::top2bottom()
{
    int yWidth = to.y() - from.y();

    QLine sectionOne(from.x(),from.y(),from.x(),from.y()+yWidth/2);
    QLine sectionTwo(from.x(),from.y()+yWidth/2,to.x(),from.y()+yWidth/2);
    QLine sectionThr(to.x(),from.y()+yWidth/2,to.x(),to.y());

    p->drawLine(sectionOne);
    p->drawLine(sectionTwo);
    p->drawLine(sectionThr);

    QLine arrowTopLine(to.x(),to.y(),to.x()+5,to.y()-25);
    QLine arrowBottomLine(to.x(),to.y(),to.x()-5,to.y()-25);

    p->drawLine(arrowTopLine);
    p->drawLine(arrowBottomLine);
}

