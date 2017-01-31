#include "hauptmenu.h"

MainWidget::MainWidget(bool xmlLoaded, QWidget *centralWidget) : QWidget(centralWidget)
{
    // MAIN LAYOUT
    QGridLayout* layout = new QGridLayout(this);
    layout->setRowStretch(0,100);
    layout->setColumnStretch(0,100);
    // TITEL
    /*
     * QLabel* titel = new QLabel("Die Siedler");
    titel->setObjectName("Titel");
    QPixmap tmp = Data::getInstance()->getPixmap("DieSiederLogo",500);
    titel->setPixmap(tmp);
    layout->addWidget(titel,layout->rowCount(),0,1,-1,Qt::AlignCenter);
    */

    // WEITER SPIELEN

    if(xmlLoaded)
    {
        QPushButton *goOnPlaying = new QPushButton("Weiter spielen");
        goOnPlaying->setObjectName("mainMenuButton");
        layout->addWidget(goOnPlaying,layout->rowCount(),1);
        connect(goOnPlaying,SIGNAL(released()),this,SIGNAL(gotoOverview()));
    }
    // NEUES SPIEL
    QPushButton *newGame = new QPushButton("Neues Spiel");
    newGame->setObjectName("mainMenuButton");
    layout->addWidget(newGame,layout->rowCount(),1);
    connect(newGame,SIGNAL(released()),this,SIGNAL(gotoNewGame()));

    QPushButton *options = new QPushButton("Optionen");
    options->setObjectName("mainMenuButton");
    layout->addWidget(options,layout->rowCount(),1);
    connect(options,SIGNAL(released()),this,SIGNAL(gotoOptions()));

    QPushButton *exit = new QPushButton("Spiel beenden");
    exit->setObjectName("mainMenuButton");
    layout->addWidget(exit,layout->rowCount(),1);
    connect(exit,SIGNAL(released()),this,SIGNAL(exit()));


    layout->setRowStretch(layout->rowCount(),100);    
    layout->setColumnStretch(layout->columnCount(),100);
}

