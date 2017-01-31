#include "historywidget.h"

HistoryWidget::HistoryWidget(History *H, QWidget *parent) : QChartView(parent),
{
    QHBoxLayout *layout = new QHBoxLayout(this);

    table = setupTable(H);
    layout->addWidget(table);

    QFrame *frame = new QFrame();
    frame->setObjectName("tableFrame");
    layout->addWidget(frame);
    QVBoxLayout *tableLayout = new QVBoxLayout(frame);


    QChartView* resourceChart = setupResourceChart(H);
    tableLayout->addWidget(resourceChart);
    QChartView* pointChart = setupPointView(H);
    tableLayout->addWidget(pointChart);


    table->resizeRowsToContents();
    table->resizeColumnsToContents();
}

QTableWidget* HistoryWidget::setupTable(History * h)
{
    QStringList headerItems;
    headerItems << "Events" << "Schäfer" << "Holzfäller" << "Lehmbauern" << "Bergwerker" << "Weizenbauern";

    QList<Year> years= h->getHistory();
    int yearCount = years.length();

    QTableWidget* t = new QTableWidget(this);
    t->setColumnCount(6);
    t->verticalHeader()->setVisible(true);
    t->setRowCount(yearCount);
    t->setHorizontalHeaderLabels(headerItems);

    for(int i = 0; i< yearCount ; i++)
    {
        Year y = years[i];

        QString stringEventTitle;
        for(Event e : y.getEvents())
            stringEventTitle += e.title() + "\n";
        stringEventTitle.chop(1);

        QTableWidgetItem* eventItem = new QTableWidgetItem(stringEventTitle);
        QString stringEventDescription;
        for(Event e : y.getEvents())
            stringEventDescription += e.description() + "\n";
        stringEventDescription.chop(1);
        eventItem->setToolTip(stringEventDescription);
        t->setItem(i,0,eventItem);

        for(int j = 0 ; j < 5 ; j++)
        {
            QList<Building*> built = y.buildingsBoughtFrom(static_cast<ResourceEnum>(j));
            QList<Building*> lost = y.buildingsLostFrom(static_cast<ResourceEnum>(j));
            QTableWidgetItem* cellItem = new QTableWidgetItem(generateCellText(built,BuildOrLost::Built) + generateCellText(lost,BuildOrLost::Lost));
            t->setItem(i,j+1,cellItem);
        }
    }

    t->resizeColumnsToContents();
    return t;
}

 QChartView* HistoryWidget::setupResourceChart(History *h)
{
    QChart* c = new QChart();


    QList<QSplineSeries*> splines;
    QStringList colors,names;
    colors << "#FC8389" << "#8CDC8C"    << "#FDA44D"    << "#6152A5"   << "#FFE873";
    names  << "Schäfer" << "Holzfäller" << "Lehmbauern" << "Bergleute" << "Weizenbauern";
    for(int i=0;i<5;i++)
    {
        splines += new QSplineSeries();
        splines[i]->append(0,0);
        splines[i]->setName(names[i]);
        QPen pen(QColor(colors[i]), 3, Qt::SolidLine , Qt::RoundCap, Qt::RoundJoin);
        splines[i]->setPen(pen);
    }

    int sumMax = 0;
    QList<Year> years= h->getHistory();
    for(int j = 0 ; j < 5 ; j++)
    {
        int sum = 0;
        int yearNum = 1;
        for(Year y : years)
        {
             ratio tmp= y.getResourcesFrom(static_cast<ResourceEnum>(j));
             sum += tmp.first;
             splines[j]->append(yearNum++,sum);
        }
        if(sum > sumMax)
            sumMax = sum;
        c->addSeries(splines[j]);
    }

    QLegend* legend = c->legend();
    legend->setFont(QFont("Comic Sans MS",12));
    legend->setAlignment(Qt::AlignRight);
    legend->setScale(0.8);

    QCategoryAxis *xaxis = new QCategoryAxis();
    xaxis->setMin(0);
    int xMax = (years.length()/8+1)*8;
    xaxis->setMax(xMax);

    for(int i=0; i<years.length(); i++){
        QString text;
        for(Event e : years[i].getEvents())
            text += e.title() + "\r\n";
        xaxis->append(text,i+1);
    }

    c->setAxisX(xaxis);

    c->setTitleFont(QFont("Comic Sans MS",15));
    c->setTitle("Erwürfelte Rohstoffe");
    c->createDefaultAxes();
    c->setFont(QFont("Georgia",11));

    int yRange = (sumMax/4+1)*4;
    c->axisY()->setRange(0,yRange);

    QLinearGradient gradient;
    gradient.setStart(0,0);
    gradient.setFinalStop(0,1);
    gradient.setColorAt(0,QColor("#FFE5A1"));
    gradient.setColorAt(1,QColor("#CB9E24"));
    c->setBackgroundBrush(gradient);

    QChartView * view = new QChartView(this);
    view->setChart(c);
    return view;
 }

 QChartView *HistoryWidget::setupPointView(History *h)
 {
     QChart* c = new QChart();
     c->setTitleFont(QFont("Comic Sans MS",15));
     QList<QSplineSeries*> rolled;
     QStringList colors,names;
     colors << "#FC8389" << "#8CDC8C" << "#FDA44D" << "#6152A5" << "#FFE873";
     names << "Schäfer" << "Holzfäller" << "Lehmbauern" << "Bergleute" << "Weizenbauern";
     for(int i=0;i<5;i++)
     {
         rolled += new QSplineSeries();
         rolled[i]->append(0,0);
         rolled[i]->setName(names[i]);
         QPen pen(QColor(colors[i]), 3, Qt::SolidLine , Qt::RoundCap, Qt::RoundJoin);
         rolled[i]->setPen(pen);
     }

     int sumMax = 0;
     QList<Year> years= h->getHistory();
     for(int j = 0 ; j < 5 ; j++)
     {
         int sum = 0;
         int yearNum = 1;
         for(Year y : years)
         {
              sum += y.getPointChanges(static_cast<ResourceEnum>(j));
              rolled[j]->append(yearNum++,sum);
         }
         if(sum > sumMax)
             sumMax = sum;
         c->addSeries(rolled[j]);
     }

     QLegend* legend = c->legend();
     legend->setFont(QFont("Comic Sans MS",12));
     legend->setAlignment(Qt::AlignRight);
     legend->setScale(0.8);

     c->setTitle("Punkteübersicht");
     c->createDefaultAxes();
     int xRange = (years.length()/8+1)*8;
     c->axisX()->setRange(0,xRange);
     int yRange = (sumMax/4+1)*4;
     c->axisY()->setRange(0,yRange);
     c->axisY();

     QLinearGradient gradient(0,0,0,1);
     gradient.setColorAt(0,QColor("#FFE5A1"));
     gradient.setColorAt(1,QColor("#FFE5A1"));
     c->setBackgroundBrush(gradient);

     c->setFont(QFont("Georgia",11));
     QChartView * view = new QChartView(this);
     view->setChart(c);
     view->setStyleSheet(Data::getInstance()->getStylesheet());

     return view;
 }

void HistoryWidget::resizeEvent(QResizeEvent *event)
{
    if(/* DISABLES CODE */ (0))
    {
        table->widthMM();
        int width = table->width();
        table->setColumnWidth(0,50);
        for(int i = 1 ; i < 6 ; i++)
            table->setColumnWidth(i,(width-60)/5);
    }
    event->ignore();
}

QString HistoryWidget::generateCellText(QList<Building *> list, BuildOrLost type)
{
    QString text;
    if(type == BuildOrLost::Built)
    {
        if(list.length() == 1)
        {
            QString name = list.first()->getName();
            text = QString("%1 %2 wurde gebaut. \n")
                    .arg(einOrEine(name,true))
                    .arg(name);
        }
        else if(list.length() >= 2)
        {
            QString name1 = list.first()->getName();
            text = QString("%1 %2")
                    .arg(einOrEine(name1,true)).arg(name1);
            for(int  i = 1 ; i < list.length()-1 ; i++ )
            {
                QString name = list[i]->getName();
                text += QString(", %1 %2")
                        .arg(einOrEine(name,false)).arg(name);
            }
            QString name2 = list.last()->getName();
            text += QString(" und %1 %2 wurden gebaut. \n")
                    .arg(einOrEine(name2,false)).arg(name2);
        }
    }
    else
    {
        if(list.length() == 1)
        {
            QString name = list.first()->getName();
            text = QString("%1 %2 wurde zerstört.")
                    .arg(einOrEine(name,true))
                    .arg(name);
        }
        else if(list.length() >= 2)
        {
            QString name1 = list.first()->getName();
            text = QString("%1 %2")
                    .arg(einOrEine(name1,true)).arg(name1);
            for(int  i = 1 ; i < list.length()-1 ; i++ )
            {
                QString name = list[i]->getName();
                text += QString(", %1 %2")
                        .arg(einOrEine(name,false)).arg(name);
            }
            QString name2 = list.last()->getName();
            text += QString(" und %1 %2 wurden zerstört.")
                    .arg(einOrEine(name2,false)).arg(name2);
        }
    }
    return text;
}

QString HistoryWidget::einOrEine(QString s, bool capital)
{
    QString ret;
    QStringList maleWords = {"Gymnasium","Markt","Hafen","Kloster","Gericht","Rathaus","Museum","Amphitheater","Stadttor","Hospitz"};
    if(maleWords.contains(s))
        ret =  QString("ein");
    else
        ret =  QString("eine");

    if(capital)
        ret.replace(0,1,"E");
    return ret;
}
