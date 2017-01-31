#include "buildingwidget.h"

BuildingWidget::BuildingWidget(Building *b, ResourceEnum resource, bool readOnly, QWidget *parent):
    QFrame(parent),myBuildingData(b)
{
    setObjectName("BuildingWidget");
    Data* data = Data::getInstance();

    layout = new QVBoxLayout(this);

    // TITLE ICON AND POINTS

    QHBoxLayout* titleAndIcon = new QHBoxLayout();
    QLabel* title = new QLabel(b->getName());
    title->setAlignment(Qt::AlignCenter);
    title->setObjectName("buildingWidgetTitel");

    QLabel* icon  = new QLabel("");
    QPixmap pixIcon = data->getPixmap(b->getName(),25);
    icon->setPixmap(pixIcon);

    QLabel* points = new QLabel(QString::number(b->getThisPoints()));

    points->setObjectName("buildingWidgetTitel");
    points->setSizePolicy(QSizePolicy::Maximum,QSizePolicy::Fixed);
    points->setEnabled(true);

    titleAndIcon->addWidget(title);
    titleAndIcon->addStretch();
    titleAndIcon->addWidget(icon);

    titleAndIcon->addWidget(points);

    layout->addLayout(titleAndIcon);

    // COSTS

    QGridLayout* costLayout = new QGridLayout();
    int costs[5] = {0,0,0,0,0};
    for(int i = 0 ; i < 5 ; i++)
        costs[(i+resource)%5] = b->getCosts()[i];

    QLabel* sheepPixmap = new QLabel("S");
    QLabel* woodPixmap = new QLabel("W");
    QLabel* clayPixmap = new QLabel("C");
    QLabel* ironPixmap = new QLabel("I");
    QLabel* wheatPixmap = new QLabel("W");

    sheepPixmap->setAlignment(Qt::AlignCenter);
    woodPixmap->setAlignment(Qt::AlignCenter);
    clayPixmap->setAlignment(Qt::AlignCenter);
    ironPixmap->setAlignment(Qt::AlignCenter);
    wheatPixmap->setAlignment(Qt::AlignCenter);

    int size = 28;

    sheepPixmap->setPixmap(data->getPixmap("iconSheep",size));
    woodPixmap->setPixmap(data->getPixmap("iconWood",size));
    clayPixmap->setPixmap(data->getPixmap("iconClay",size));
    ironPixmap->setPixmap(data->getPixmap("iconIron",size));
    wheatPixmap->setPixmap(data->getPixmap("iconWheat",size));

    QLabel* sheepCost = new QLabel(QString::number(costs[0]));
    QLabel* woodCost  = new QLabel(QString::number(costs[1]));
    QLabel* clayCost  = new QLabel(QString::number(costs[2]));
    QLabel* ironCost  = new QLabel(QString::number(costs[3]));
    QLabel* wheatCost = new QLabel(QString::number(costs[4]));

    sheepCost->setAlignment(Qt::AlignCenter);
    woodCost->setAlignment(Qt::AlignCenter);
    clayCost->setAlignment(Qt::AlignCenter);
    ironCost->setAlignment(Qt::AlignCenter);
    wheatCost->setAlignment(Qt::AlignCenter);

    costLayout->addWidget(sheepCost,1,costLayout->columnCount());
    costLayout->addWidget(sheepPixmap,0,costLayout->columnCount()-1);
    costLayout->addWidget(woodCost,1,costLayout->columnCount());
    costLayout->addWidget(woodPixmap,0,costLayout->columnCount()-1);
    costLayout->addWidget(clayCost,1,costLayout->columnCount());
    costLayout->addWidget(clayPixmap,0,costLayout->columnCount()-1);
    costLayout->addWidget(ironCost,1,costLayout->columnCount());
    costLayout->addWidget(ironPixmap,0,costLayout->columnCount()-1);
    costLayout->addWidget(wheatCost,1,costLayout->columnCount());
    costLayout->addWidget(wheatPixmap,0,costLayout->columnCount()-1);

    layout->addLayout(costLayout);

    // BONI

    for(QString s : b->getBoniAsText())
    {
        if(!s.contains("Siegpunkte")){
            QLabel* boniLabel = new QLabel(s);
            boniLabel->setAlignment(Qt::AlignCenter);
            boniLabel->setWordWrap(true);
            boniLabel->setObjectName("description");
            layout->addWidget(boniLabel);
        }
    }



    if(b->parentIsBought() && !b->isBought() && !readOnly)
        setStyleSheet(data->getStylesheet(ResourceEnum::WOOD));
    else if(b->isBought() && b->noChildIsBought() && !readOnly)
        setStyleSheet(data->getStylesheet(ResourceEnum::WHEAT));
    else
        setStyleSheet(data->getStylesheet(ResourceEnum::WHEAT));

    layout->addStretch(5);
}

BuildingWidget::BuildingWidget()
{
    layout = new QVBoxLayout(this);
    QLabel* l = new QLabel("Gebäudevorschau");
    l->setAlignment(Qt::AlignCenter);
    layout->addWidget(l);
    l->setSizePolicy(QSizePolicy::MinimumExpanding,QSizePolicy::MinimumExpanding);
}
void BuildingWidget::buyClicked()
{
    myBuildingData->setBought(true);
    emit buildingChanged();
}

void BuildingWidget::destroyClicked()
{
    myBuildingData->setBought(false);
    emit buildingChanged();
}

void BuildingWidget::mouseDoubleClickEvent(QMouseEvent *event)
{
    if(myBuildingData->noChildIsBought() && myBuildingData->parentIsBought() && myBuildingData->isBuyable())
        buyClicked();
    else if(myBuildingData->isBought() && myBuildingData->noChildIsBought())
        destroyClicked();
    event->ignore();
}

