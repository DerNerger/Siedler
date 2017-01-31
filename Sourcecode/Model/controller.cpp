#include "controller.h"

Controller::Controller(int &argc, char **argv) :
    QApplication(argc,argv),data(Data::getInstance()),seasonController(nullptr),xmlLoaded(false)
{
    player = new AudioPlayer(2);
    player->play(SoundType::Summer);

    mainWindow = new MainWindow();
    mainWindow->setWindowTitle("Die Siedler - Das Gruppenspiel");
    mainWindow->show();

    loadStylesheet();

    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(loadStylesheet()));
    timer->setSingleShot(false);
    timer->start(50);

    history = new History();

    if(data->exists("background.png"))
    {
        QPixmap background = data->getPixmap("background",1531);
        background = background.scaled(mainWindow->size(),Qt::IgnoreAspectRatio);
        QPalette palette;
        palette.setBrush(QPalette::Background,background);
        mainWindow->setPalette(palette);
    }
    openMainMenu();
}

void Controller::openMainMenu()
{
    mainWindow->centralWidget()->close();
    MainWidget* mainmenu = new MainWidget(xmlLoaded);
    connect(mainmenu,SIGNAL(exit()),this,SLOT(exit()));
    connect(mainmenu,SIGNAL(gotoNewGame()),this,SLOT(openNewGame()));
    connect(mainmenu,SIGNAL(gotoOverview()),this,SLOT(openOverview()));
    connect(mainmenu,SIGNAL(gotoOptions()),this,SLOT(openOptions()));
    mainWindow->setCentralWidget(mainmenu);
}

void Controller::exit()
{
    mainWindow->close();
}

void Controller::openNewGame()
{
    mainWindow->centralWidget()->close();
    NewGameWidget* newGameWidget = new NewGameWidget();
    connect(newGameWidget,SIGNAL(gotTeamNames(QStringList)),this,SLOT(initTeamsAndEvents(QStringList)));
    connect(newGameWidget,SIGNAL(gotoStartGame()),this,SLOT(openOverview()));
    mainWindow->setCentralWidget(newGameWidget);
}

void Controller::openNewYear()
{
    mainWindow->centralWidget()->close();

    bool multipleEvents = data->getBool("goodAndBadEvents");
    QList<Event> events = generator->generateEvents(multipleEvents);

    NewYearWidget* newyearWidget = new NewYearWidget(teams,events);
    connect(newyearWidget,SIGNAL(gotoOverview()),this,SLOT(openOverview()));
    connect(newyearWidget,SIGNAL(updateHistory(QList<Event>)),this,SLOT(updateHistory(QList<Event>)));
    connect(newyearWidget,SIGNAL(okPressed()),seasonController,SLOT(nextSeason()));
    mainWindow->setCentralWidget(newyearWidget);
}

void Controller::openOverview()
{
    mainWindow->centralWidget()->close();
    OverviewWidget* overview = new OverviewWidget(teams,history,seasonController);
    connect(overview,SIGNAL(exitGame()),this,SLOT(exit()));
    connect(overview,SIGNAL(gotoMainMenu()),this,SLOT(openMainMenu()));
    connect(overview,SIGNAL(buyBuildingFor(ResourceEnum)),this,SLOT(openBuyBuilding(ResourceEnum)));
    connect(overview,SIGNAL(gotoOverview()),this,SLOT(openOverview()));
    connect(overview,SIGNAL(gotoOptions()),this,SLOT(openOptions()));

    // buttonBoxSignals

    Ui::ButtonBox *bb =  overview->getButtonBox();
    connect(bb->pushButtonSpring,SIGNAL(clicked()),player,SLOT(playSpring()));
    connect(bb->pushButtonSummer,SIGNAL(clicked()),player,SLOT(playSummer()));
    connect(bb->pushButtonAutumn,SIGNAL(clicked()),player,SLOT(playAutumn()));
    connect(bb->pushButtonWinter,SIGNAL(clicked()),player,SLOT(playWinter()));
    connect(bb->pushButtonPause,SIGNAL(clicked()),player,SLOT(stop()));
    connect(bb->pushButtonWindowed,SIGNAL(clicked()),this,SLOT(switchWindowMode()));
    connect(bb->pushButtonGeneratePixmaps,SIGNAL(clicked()),this,SLOT(generatePixmaps()));

    mainWindow->setCentralWidget(overview);
}

void Controller::openOptions()
{
    mainWindow->centralWidget()->close();
    OptionWidget* optionWidget = new OptionWidget();
    connect(optionWidget,SIGNAL(gotoMainWindow()),this,SLOT(openMainMenu()));
    connect(optionWidget,SIGNAL(volumeChanged()),player,SLOT(setVolume()));
    mainWindow->setCentralWidget(optionWidget);
}

void Controller::openBuyBuilding(ResourceEnum r)
{
    TreeWidget* t = new TreeWidget(teams[r]);
    connect(t,SIGNAL(gotoOverview()),this,SLOT(openOverview()));
    connect(t,SIGNAL(gotoBuildingTree(ResourceEnum)),this,SLOT(openBuyBuilding(ResourceEnum)));
    mainWindow->setCentralWidget(t);
}

void Controller::initTeamsAndEvents(QStringList teamNames)
{    
    teams.clear();
    if(seasonController)
        delete seasonController;
    seasonController = new SeasonController();
    connect(seasonController,SIGNAL(changeSound(SoundType)),player,SLOT(play(SoundType)));
    connect(seasonController,SIGNAL(yearIsOver()),this,SLOT(openNewYear()));
    QString pathToXML = data->getPath("Tree.xml");
    XMLParser xmlParser(pathToXML);
    for(int i = 0 ; i < 5 ; i++)
        teams += xmlParser.parseTeam(teamNames[i],static_cast<ResourceEnum>(i));

    xmlLoaded = true;

    bool random = true;
    EventParser eventParser;
    QList<Event> goodEvents = eventParser.getGoodEvents();
    QList<Event> badEvents = eventParser.getBadEvents();
    generator = new EventGenerator(badEvents, goodEvents, random);

    history->clear();
}

void Controller::loadStylesheet()
{
    QString stylesheet = data->getText("Stylesheet.css");
    mainWindow->setStyleSheet(stylesheet);
}

void Controller::updateHistory(QList<Event> events)
{
    QList<ratio> res;
    for(Team* t : teams)
        res += t->getYearResources();
    history->appendNewData(teams,events,res);
}

void Controller::switchWindowMode()
{
    if(mainWindow->isFullScreen())
    {
        mainWindow->showNormal();
    }
    else
    {
        mainWindow->showFullScreen();
    }
}

void Controller::generatePixmaps()
{
    QString pathToXML = data->getPath("Tree.xml");
    XMLParser xmlParser(pathToXML,true);

    QString pathToDesktop = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);

    QString path = QFileDialog::getSaveFileName(0,"Wähle einen Speicherort für Teamübersichten",pathToDesktop,"PDF (*.pdf)");

    if(!path.isEmpty())
    {
        QStringList names;
        names << "Schäfer" << "Holzfäller" << "Lehmbauern" << "Bergleute" << "Weizenbauern";

        QPdfWriter writer(path);
        writer.setPageMargins(QMargins(0,0,0,0));
        writer.setPageOrientation(QPageLayout::Landscape);
        writer.setPageSize(QPageSize(QPageSize::A3));
        QPainter painter(&writer);

        for(int i=0; i<5 ; i++)
        {
            Team* team = xmlParser.parseTeam(names[i],static_cast<ResourceEnum>(i));

            TreeWidget* t = new TreeWidget(team,true);
            QString stylesheet = data->getText("Stylesheet.css");
            t->setStyleSheet(stylesheet);
            int height = 1080;
            t->resize(QSize(static_cast<int>(1.4*height),height));

            painter.drawPixmap(0,0,writer.width(),writer.height(),t->grab());
            if(i<4)
                writer.newPage();
        }
        painter.end();
    }
}



