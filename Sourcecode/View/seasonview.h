#ifndef SEASONVIEW_H
#define SEASONVIEW_H

#include <QWidget>
#include <QGroupBox>
#include <Model/data.h>

#include "Model/data.h"
#include "Model/season.h"

namespace Ui {
class SeasonView;
}

class SeasonView : public QGroupBox
{
    Q_OBJECT

public:
    explicit SeasonView(Season* S,QWidget *parent = 0);
    ~SeasonView();
public slots:

signals:

private:
    Ui::SeasonView *ui;
    Season *season;

    QString secs2string(int time);

private slots:
    void updateStylesheet();
    void updateView(int timeElapsed);
};

#endif // SEASONVIEW_H
