#ifndef YEARWIDGET_H
#define YEARWIDGET_H

#include <QWidget>

#include "Model/event.h"
#include "Model/YearHistory.h"

#include "View/IconDisplay.h"

namespace Ui {
class YearWidget;
}

class YearWidget : public QWidget
{
    Q_OBJECT

public:
    explicit YearWidget(QList<Year> history, QWidget *parent = 0);
    ~YearWidget();
signals:
    void gotoNewYear();
private:
    Ui::YearWidget *ui;
};

#endif // YEARWIDGET_H
