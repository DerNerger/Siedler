#include "overviewwidget.h"

OverviewWidget::OverviewWidget(QList<Team*> teams, History *h, SeasonController* seasons, QWidget *parent) :
    QWidget(parent),buttonBox(new Ui::ButtonBox)
{
    grid = new QGridLayout(this);
    QHBoxLayout* teamBox= new QHBoxLayout();
    grid->addLayout(teamBox,0,0,1,-1);

    // SETUP TEAMWIDGETS

    int i = 0;
    foreach (Team* t, teams)
    {
        teamWidgets += new TeamWidget(t);
        teamWidgets[i]->setSizePolicy(QSizePolicy::Maximum,QSizePolicy::Maximum);
        teamBox->addWidget(teamWidgets[i]);
        connect(teamWidgets[i],SIGNAL(clicked(ResourceEnum)),this,SIGNAL(buyBuildingFor(ResourceEnum)));
        connect(teamWidgets[i],SIGNAL(gotoOverview()),this,SIGNAL(gotoOverview()));
        i++;
    }

    // HISTORY WIDGET

    history = new HistoryWidget(h);
    history->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::MinimumExpanding);
    grid->addWidget(history,1,0,1,5);

    // YEARVIEW

    year = new YearView(seasons);
    grid->addWidget(year,2,1,1,2);

    // MENÜLEISTE

    menuBox = new QGroupBox();
    //menuBox->setObjectName("menuBox");
    menuLayout = new QVBoxLayout(menuBox);

    QPushButton *haupt = new QPushButton("Hauptmenü");
    haupt->setSizePolicy(QSizePolicy::Preferred,QSizePolicy::MinimumExpanding);
    connect(haupt,SIGNAL(clicked(bool)),this,SIGNAL(gotoMainMenu()));
    menuLayout->addWidget(haupt);


    QPushButton *options = new QPushButton("Optionen");
    options->setSizePolicy(QSizePolicy::Preferred,QSizePolicy::MinimumExpanding);
    menuLayout->addWidget(options);
    connect(options,SIGNAL(released()),this,SIGNAL(gotoOptions()));

    QPushButton *exit = new QPushButton("Spiel beenden");
    exit->setSizePolicy(QSizePolicy::Preferred,QSizePolicy::MinimumExpanding);
    connect(exit,SIGNAL(clicked(bool)),this,SIGNAL(exitGame()));
    menuLayout->addWidget(exit);

    grid->addWidget(menuBox,grid->rowCount()-1,4,1,1);

    // BUTTONBOX

    QGroupBox* buttonBoxWidget = new QGroupBox();
    grid->addWidget(buttonBoxWidget,grid->rowCount()-1,0,1,1);

    int buttonSize = 60;

    buttonBox->setupUi(buttonBoxWidget);
    Data *d = Data::getInstance();
    buttonBox->pushButtonSpring->setIcon(d->getPixmap("spring",buttonSize));
    buttonBox->pushButtonSummer->setIcon(d->getPixmap("summer",buttonSize));
    buttonBox->pushButtonAutumn->setIcon(d->getPixmap("autumn",buttonSize));
    buttonBox->pushButtonWinter->setIcon(d->getPixmap("winter",buttonSize));
    buttonBox->pushButtonGeneratePixmaps->setIcon(d->getPixmap("generate",buttonSize));
    buttonBox->pushButtonPause->setIcon(d->getPixmap("pause",buttonSize));
    buttonBox->pushButtonWindowed->setIcon(d->getPixmap("windowed",buttonSize));
    buttonBox->pushButtonProjector->setIcon(d->getPixmap("projector",buttonSize));

    // ROW AND COL STRETCHES

    grid->setRowStretch(0,1);
    grid->setRowStretch(1,4);
    grid->setRowStretch(2,1); 

    grid->setColumnStretch(0,5);
    grid->setColumnStretch(1,11);
    grid->setColumnStretch(2,4);

    // MARGINS

    grid->setMargin(6);
    grid->setSpacing(6);
}

void OverviewWidget::keyPressEvent(QKeyEvent *event)
{
    for(TeamWidget* w : teamWidgets)
    {
        w->keyPressEvent(event);
    }
}
