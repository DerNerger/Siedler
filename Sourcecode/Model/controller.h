#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "mainwindow.h"
#include "View/hauptmenu.h"
#include "View/newgamewidget.h"
#include "View/overviewwidget.h"
#include "View/TreeWidget.h"
#include "View/newyearwidget.h"
#include "View/OptionWidget.h"

#include "Model/data.h"
#include "Model/team.h"
#include "Model/xmlparser.h"
#include "Model/eventparser.h"
#include "Model/eventgenerator.h"
#include "Model/History.h"
#include "Model/audioplayer.h"

#include <QGridLayout>
#include <QApplication>
#include <QThread>
#include <QTimer>
#include <QStandardPaths>
#include <QFileDialog>
#include <QPdfWriter>
#include <QPainter>

class Controller : public QApplication
{
    Q_OBJECT
public:
    Controller(int &argc, char **argv);
private:
    // View

    MainWindow* mainWindow;

    // Model

    QList<Team*> teams;
    Data* data;
    SeasonController* seasonController;
    bool xmlLoaded;
    History* history;
    EventGenerator* generator;
    AudioPlayer* player;

private slots:
    void exit();
    void openNewGame();
    void openNewYear();
    void openOverview();
    void openOptions();
    void openBuyBuilding(ResourceEnum r);
    void openMainMenu();
    void initTeamsAndEvents(QStringList teamNames);
    void loadStylesheet();
    void updateHistory(QList<Event> events);
    void switchWindowMode();
    void generatePixmaps();
};

#endif // CONTROLLER_H
