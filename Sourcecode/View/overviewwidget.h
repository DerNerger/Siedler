#ifndef OVERVIEWWIDGET_H
#define OVERVIEWWIDGET_H

#include <QWidget>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QKeyEvent>
#include <QGroupBox>

#include "View/yearview.h"
#include "View/teamwidget.h"
#include "View/yearwidget.h"
#include "View/HistoryWidget.h"
#include "Model/event.h"
#include "View/mediaplayer.h"
#include "Model/season.h"
#include "Model/History.h"

#include "ui_ButtonBox.h"


class OverviewWidget : public QWidget
{
    Q_OBJECT
public:
    explicit OverviewWidget(QList<Team *> teams, History* history, SeasonController *seasons,QWidget *parent = 0);
signals:
    void buyBuildingFor(ResourceEnum res);
    void gotoMainMenu();
    void gotoOverview();
    void gotoOptions();
    void exitGame();

    void volumeChanged(int vol);
    void playMain();
    void playSecond();
    void pause();

public slots:
    void keyPressEvent(QKeyEvent *event);
    Ui::ButtonBox* getButtonBox(){return buttonBox;}
private:
    QGridLayout* grid;
    QVBoxLayout* menuLayout;
    QGroupBox* menuBox;
    QList<TeamWidget*> teamWidgets;
    HistoryWidget* history;
    YearView* year;
    Ui::ButtonBox* buttonBox;
private slots:
};

#endif // OVERVIEWWIDGET_H
