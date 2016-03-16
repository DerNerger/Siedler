#ifndef ARROWPAINTER_H
#define ARROWPAINTER_H

#include <QPoint>
#include <QPainter>
#include <QWidget>

namespace Arrow
{
    enum Direction
    {
        automatic,
        vertical,
        horizontal
    };
}

class ArrowPainter
{
public:
    ArrowPainter(QWidget *Widget);
    ~ArrowPainter();
    void paint(QPoint From, QPoint To, Arrow::Direction Dir = Arrow::automatic);
private:
    QPoint from,to;
    QPen painterAppearance;
    QPainter* p;
    void left2right();
    void top2bottom();
};

#endif // ARROWPAINTER_H
