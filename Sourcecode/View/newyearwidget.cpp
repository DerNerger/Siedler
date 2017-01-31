#include "newyearwidget.h"
#include "ui_newyearwidget.h"

NewYearWidget::NewYearWidget(QList<Team *> Teams, QList<Event> Events, QWidget *parent) : QWidget(parent), teams(Teams) ,events(Events), ui(new Ui::NewYearWidget)
{
    ui->setupUi(this);

    teamBoxes += ui->groupBoxSheep;
    teamBoxes += ui->groupBoxWood;
    teamBoxes += ui->groupBoxClay;
    teamBoxes += ui->groupBoxIron;
    teamBoxes += ui->groupBoxWheat;

    protBoxes += ui->groupBoxProt1;
    protBoxes += ui->groupBoxProt2;
    protBoxes += ui->groupBoxProt3;
    protBoxes += ui->groupBoxProt4;
    protBoxes += ui->groupBoxProt5;

    // EVENT
    QList<int> counterIDs;

    QHBoxLayout* layout = new QHBoxLayout();
    ui->groupBoxEvents->setLayout(layout);
    int i = 0;

    for(Event e : events)
    {
        if(!e.title().isEmpty())
        {
            Data* d = Data::getInstance();
            QFrame *box= new QFrame();
            box->setObjectName("teamWidget");
            QString style = d->getStylesheet(static_cast<ResourceEnum>(i%5));
            box->setStyleSheet(style);
            QVBoxLayout *lay = new QVBoxLayout(box);
            QLabel *eventTitle = new QLabel(e.title());
            eventTitle->setAlignment(Qt::AlignCenter);
            eventTitle->setObjectName("EventLabel");
            QLabel *eventDescription = new QLabel(e.description());
            eventDescription->setAlignment(Qt::AlignCenter);
            eventDescription->setObjectName("description");
            eventDescription->setWordWrap(true);

            lay->addWidget(eventTitle);
            lay->addWidget(eventDescription);

            layout->addWidget(box);

            if(e.isPositive())
                box->setStyleSheet(d->getStylesheet(ResourceEnum::WOOD));
            else
                box->setStyleSheet(d->getStylesheet(ResourceEnum::SHEEP));

            if(e.counterID() > -1)
                counterIDs += e.counterID();
            layout->setStretch(i,1);
        }
        i++;
    }

    // ICONS

    Data* data = Data::getInstance();

    int iconSize = 60;

    ui->iconSheep->setPixmap(data->getPixmap("iconSheep",iconSize));
    ui->iconWood->setPixmap(data->getPixmap("iconWood",iconSize));
    ui->iconClay->setPixmap(data->getPixmap("iconClay",iconSize));
    ui->iconIron->setPixmap(data->getPixmap("iconIron",iconSize));
    ui->iconWheat->setPixmap(data->getPixmap("iconWheat",iconSize));

    int shieldSize = 25;

    ui->labelProt1->setPixmap(data->getPixmap("shield",shieldSize));
    ui->labelProt2->setPixmap(data->getPixmap("shield",shieldSize));
    ui->labelProt3->setPixmap(data->getPixmap("shield",shieldSize));
    ui->labelProt4->setPixmap(data->getPixmap("shield",shieldSize));
    ui->labelProt5->setPixmap(data->getPixmap("shield",shieldSize));

    QList<QGridLayout*> diceLayouts;
    diceLayouts += ui->gridLayoutSheep;
    diceLayouts += ui->gridLayoutWood;
    diceLayouts += ui->gridLayoutClay;
    diceLayouts += ui->gridLayoutIron;
    diceLayouts += ui->gridLayoutWheat;

    for(int i = 0; i < 5 ; i++)
    {
        // DICE

        QGridLayout* layout = diceLayouts[i];
        Team* team = teams[i];
        QMap<int, int> sum;

        // EVENT DICE

        for(Event e : events)
        {
            for(Boni* b : e.bonis())
            {
                QMapIterator<int, int> boniIterator(b->getDices());
                while (boniIterator.hasNext())
                {
                    boniIterator.next();
                    sum[boniIterator.key()] += boniIterator.value();
                }
            }
        }

        // TEAM DICE

        QMapIterator<int, int> teamIt(team->getDices());
        while (teamIt.hasNext())
        {
            teamIt.next();
            sum[teamIt.key()] += teamIt.value();
        }

        // CREATE DICEWIDGETS

        QMapIterator<int, int> iterator(sum);
        while (iterator.hasNext())
        {
            iterator.next();
            for(int j = 0; j < iterator.value() ; j++)
            {
                DiceWidget* d = new DiceWidget(iterator.key(),team->getResource());
                diceWidgets += d;
                connect(d,SIGNAL(buttonClicked()),this,SLOT(updateResourceSpinboxes()));
                layout->addWidget(d,0,layout->columnCount());
            }
        }

        updateResourceSpinboxes();

        // INFO

        QList<QLabel*> protPixmaps;
        protPixmaps += ui->protSheep;
        protPixmaps += ui->protWood;
        protPixmaps += ui->protClay;
        protPixmaps += ui->protIron;
        protPixmaps += ui->protWheat;

        QList<QLabel*> shields;
        shields += ui->labelProt1;
        shields += ui->labelProt2;
        shields += ui->labelProt3;
        shields += ui->labelProt4;
        shields += ui->labelProt5;

        for(int i = 0; i < teams.length(); i++)
        {
            protPixmaps[i]->setAlignment(Qt::AlignCenter);
            protPixmaps[i]->setStyleSheet("font: normal 20px;");
            if(counterIDs.contains(1))
            {
                protPixmaps[i]->setText(QString("%1").arg(teams[i]->getProtection()));
            }
            else if(!counterIDs.isEmpty())
            {
                QList<CounterBoni> list = teams[i]->getCountersFor(counterIDs);
                if(!list.isEmpty())
                    shields[i]->setPixmap(data->getPixmap("isOK",40));
                else
                    shields[i]->setPixmap(data->getPixmap("isNotOK",40));
                protPixmaps[i]->close();
            }
            else
            {
                for(auto a : protBoxes)
                    a->close();
            }
        }
    }

    // STYLESHEETS

    for(int i=0; i<5; i++)
        teamBoxes[i]->setStyleSheet(Teams[i]->getStylesheet());
}

NewYearWidget::~NewYearWidget()
{
    delete ui;
}

void NewYearWidget::on_pushButtonOk_released()
{
    teams[SHEEP]->addResources(ui->spinBoxSheep->value());
    teams[WOOD]->addResources(ui->spinBoxWood->value());
    teams[CLAY]->addResources(ui->spinBoxClay->value());
    teams[IRON]->addResources(ui->spinBoxIron->value());
    teams[WHEAT]->addResources(ui->spinBoxWheat->value());

    emit updateHistory(events);
    emit gotoOverview();
    emit okPressed();
}

void NewYearWidget::updateResourceSpinboxes()
{
    int res[5] = {0,0,0,0,0};
    bool grey[5] = {1,1,1,1,1};

    for(DiceWidget* d : diceWidgets)
    {
        res[d->getResource()] += d->getNumber();
        grey[d->getResource()] &= static_cast<bool>(d->getNumber());
    }
    for(int i=0;i<5;i++){
        if(grey[i]){
            teamBoxes[i]->setObjectName("");
            protBoxes[i]->setObjectName("");
        }
        else{
            teamBoxes[i]->setObjectName("greyedOut");
            protBoxes[i]->setObjectName("greyedOut");
        }
    }
    for(Event e : events)
    {
        if(e.factor().second != 1.0)
        {
            if(e.factor().first == SHEEP){
                double tmp = res[SHEEP] * e.factor().second;
                res[SHEEP] = static_cast<int>(ceil(tmp));
            }
            else if(e.factor().first == WOOD){
                double tmp = res[WOOD] * e.factor().second;
                res[WOOD] = static_cast<int>(ceil(tmp));
            }
            else if(e.factor().first == CLAY){
                double tmp = res[CLAY] * e.factor().second;
                res[CLAY] = static_cast<int>(ceil(tmp));
            }
            else if(e.factor().first == IRON){
                double tmp = res[IRON] * e.factor().second;
                res[IRON] = static_cast<int>(ceil(tmp));
            }
            else if(e.factor().first == WHEAT){
                double tmp = res[WHEAT] * e.factor().second;
                res[WHEAT] = static_cast<int>(ceil(tmp));
            }
            else if(e.factor().first == ALL)
            {
                for(int i = 0; i<5 ; i++)            {
                    double tmp = res[i] * e.factor().second;
                    res[i] = static_cast<int>(ceil(tmp));
                }
            }
        }
    }

    ui->spinBoxSheep->setValue(res[SHEEP]);
    ui->spinBoxWood->setValue(res[WOOD]);
    ui->spinBoxClay->setValue(res[CLAY]);
    ui->spinBoxIron->setValue(res[IRON]);
    ui->spinBoxWheat->setValue(res[WHEAT]);
}
