#include "newgamewidget.h"
#include "ui_newgamewidget.h"

NewGameWidget::NewGameWidget(QWidget *parent):
    QWidget(parent),
    ui(new Ui::NewGameWidget)
{
    ui->setupUi(this);
    connect(ui->pushButtonOk,SIGNAL(released()),this,SLOT(okPressed()));
    ui->tnSheep->activateWindow();
    QTimer::singleShot(0,ui->tnSheep,SLOT(setFocus()));

    // Setup stylesheets

    ui->groupBoxSheep->setStyleSheet(Data::getInstance()->getStylesheet(SHEEP));
    ui->groupBoxWood->setStyleSheet(Data::getInstance()->getStylesheet(WOOD));
    ui->groupBoxClay->setStyleSheet(Data::getInstance()->getStylesheet(CLAY));
    ui->groupBoxIron->setStyleSheet(Data::getInstance()->getStylesheet(IRON));
    ui->groupBoxWheat->setStyleSheet(Data::getInstance()->getStylesheet(WHEAT));
}

NewGameWidget::~NewGameWidget()
{
    delete ui;
}

void NewGameWidget::okPressed()
{
    QStringList teamNames;
    // SCHÄFER
    if(!ui->tnSheep->text().isEmpty())
        teamNames += ui->tnSheep->text();
    else
        teamNames += "Schäfer";
    // HOLZFÄLLER
    if(!ui->tnWood->text().isEmpty())
        teamNames += ui->tnWood->text();
    else
        teamNames += "Holzfäller";
    // ZIEGLER
    if(!ui->tnClay->text().isEmpty())
        teamNames += ui->tnClay->text();
    else
        teamNames += "Ziegler";
    // BERGLEUTE
    if(!ui->tnIron->text().isEmpty())
        teamNames += ui->tnIron->text();
    else
        teamNames += "Bergleute";
    // WEIZENBAUERN
    if(!ui->tnWheat->text().isEmpty())
        teamNames += ui->tnWheat->text();
    else
        teamNames += "Weizenbauern";

    emit gotTeamNames(teamNames);
    emit gotoStartGame();
}

void NewGameWidget::keyPressEvent(QKeyEvent *e)
{
    if(e->key() == Qt::Key_Enter || e->key() == Qt::Key_Return)
    {
        okPressed();
    }
    QWidget::keyPressEvent(e);
}


