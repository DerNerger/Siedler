#include "buildingwidget.h"

BuildingWidget::BuildingWidget(Building *b, QWidget *parent) : QGroupBox(parent)
{
    initStylesheet();
    myBuildingData = b;

    layout = new QVBoxLayout(this);

    this->setTitle(b->getName());
    //QLabel* name = new QLabel(b->getName());
    //name->setFont(QFont("Georgia",16));
    //layout->addWidget(name);

    QHBoxLayout* costs = new QHBoxLayout(this);
    QLabel* sheepPixmap = new QLabel("S");
    QLabel* woodPixmap = new QLabel("W");
    QLabel* clayPixmap = new QLabel("C");
    QLabel* ironPixmap = new QLabel("I");
    QLabel* wheatPixmap = new QLabel("W");

    QLabel* sheepCost = new QLabel("1");
    QLabel* woodCost = new QLabel("2");
    QLabel* clayCost = new QLabel("3");
    QLabel* ironCost = new QLabel("4");
    QLabel* wheatCost = new QLabel("5");

    costs->addWidget(sheepCost);
    costs->addWidget(sheepPixmap);
    costs->addWidget(woodCost);
    costs->addWidget(woodPixmap);
    costs->addWidget(clayCost);
    costs->addWidget(clayPixmap);
    costs->addWidget(ironCost);
    costs->addWidget(ironPixmap);
    costs->addWidget(wheatCost);
    costs->addWidget(wheatPixmap);

    layout->addLayout(costs);
    QString diceString = calcDices();
    if(!diceString.isEmpty())
    {
        QLabel* dices = new QLabel(QString("Du erhälst %1 Würfel.").arg(diceString));
        layout->addWidget(dices);
    }
}

void BuildingWidget::initStylesheet()
{
    this->setStyleSheet("QGroupBox {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #F2E496, stop: 1 #FFFFFF);border: 2px solid gray;border-radius: 5px; margin-top: 1ex; }");
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

