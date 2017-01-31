#ifndef YEARVIEW_H
#define YEARVIEW_H

#include <QFrame>
#include <QPaintEvent>
#include <QGridLayout>
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QSpacerItem>
#include <QPushButton>

#include "Model/seasoncontroller.h"
#include "View/seasonview.h"

class YearView : public QFrame
{
    Q_OBJECT
public:
    explicit YearView(SeasonController* s, QWidget *parent = 0);
signals:
    void gotoNextYear();
private:

    QList<SeasonView*> seasonWidgets;
    void paintEvent(QPaintEvent *e);
    QList<QLine> getArrowLines(QPoint p ,int length);
};

#endif // YEARVIEW_H
