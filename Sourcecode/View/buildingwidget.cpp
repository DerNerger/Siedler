#include "buildingwidget.h"

BuildingWidget::BuildingWidget(Building *b, ResourceEnum resource, QWidget *parent)
{
    this->setParent(parent);

    myBuildingData = b;
    Data* data = Data::getInstance();

    layout = new QVBoxLayout(this);

    QHBoxLayout* titleAndIcon = new QHBoxLayout(this);
    QLabel* title = new QLabel(b->getName());
    title->setObjectName("title");
    QLabel* icon  = new QLabel("",this);
    QPixmap pixIcon = data->getPixmap(b->getName(),60);
    icon->setPixmap(pixIcon);

    titleAndIcon->addWidget(title);
    titleAndIcon->addStretch();
    titleAndIcon->addWidget(icon);

    layout->addLayout(titleAndIcon);

    QHBoxLayout* costLayout = new QHBoxLayout(this);
    int costs[5] = {0,0,0,0,0};
    for(int i = 0 ; i < 5 ; i++)
        costs[(i+resource)%5] = b->getCosts()[i];

    QLabel* sheepPixmap = new QLabel("S");
    QLabel* woodPixmap = new QLabel("W");
    QLabel* clayPixmap = new QLabel("C");
    QLabel* ironPixmap = new QLabel("I");
    QLabel* wheatPixmap = new QLabel("W");

    sheepPixmap->setPixmap(data->getPixmap("iconSheep"));
    woodPixmap->setPixmap(data->getPixmap("iconWood"));
    clayPixmap->setPixmap(data->getPixmap("iconClay"));
    ironPixmap->setPixmap(data->getPixmap("iconIron"));
    wheatPixmap->setPixmap(data->getPixmap("iconWheat"));

    QLabel* sheepCost = new QLabel(QString::number(costs[0]));
    QLabel* woodCost  = new QLabel(QString::number(costs[1]));
    QLabel* clayCost  = new QLabel(QString::number(costs[2]));
    QLabel* ironCost  = new QLabel(QString::number(costs[3]));
    QLabel* wheatCost = new QLabel(QString::number(costs[4]));

    costLayout->addWidget(sheepCost);
    costLayout->addWidget(sheepPixmap);
    costLayout->addWidget(woodCost);
    costLayout->addWidget(woodPixmap);
    costLayout->addWidget(clayCost);
    costLayout->addWidget(clayPixmap);
    costLayout->addWidget(ironCost);
    costLayout->addWidget(ironPixmap);
    costLayout->addWidget(wheatCost);
    costLayout->addWidget(wheatPixmap);

    layout->addLayout(costLayout);
    QString diceString = calcDices();
    if(!diceString.isEmpty())
    {
        QLabel* dices = new QLabel(QString("Du erhälst %1 Würfel.").arg(diceString));
        layout->addWidget(dices);
    }


    QPushButton* buyButton = new QPushButton(data->getPixmap("kaufen"),"Kaufen",this);
    buyButton->setCheckable(b->isBuyable());
    buyButton->setChecked(b->isBought());
    connect(buyButton,SIGNAL(toggled(bool)),this,SLOT(buyButtonToggled(bool)));

    layout->addWidget(buyButton);
}

QString BuildingWidget::calcDices()
{
    QString diceString;
    QMapIterator<int, int> it(myBuildingData->getDices());
    while (it.hasNext()) {
        it.next();
        diceString += QString("%iW%i+").arg(it.key()).arg(it.value());
    }
    diceString.chop(1);
    return diceString;
}

void BuildingWidget::buyButtonToggled(bool a)
{
    myBuildingData->setBought(a);
}

