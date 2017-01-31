#include "seasonview.h"
#include "ui_seasonview.h"

SeasonView::SeasonView(Season *Season, QWidget *parent) :
    QGroupBox(parent),
    ui(new Ui::SeasonView),season(Season)
{
    ui->setupUi(this);
    this->setTitle(season->Name());
    ui->labelDescription->setText(season->Description());
    ui->progressBarTime->setMaximum(season->Duration());
    connect(season,SIGNAL(elapsedTimeChanged(int)),this,SLOT(updateView(int)));
    updateView(0);
}

SeasonView::~SeasonView()
{
    delete ui;
}

QString SeasonView::secs2string(int time)
{
    return QString("%1:%2").arg(time/60,2,10,QChar('0')).arg(time%60,2,10,QChar('0'));
}

void SeasonView::updateStylesheet()
{
    Data* d = Data::getInstance();
    switch (season->Status()) {
        case SeasonStatus::Active:
            setStyleSheet(d->getStylesheet(ColorStyle::Green));
        break;
        case SeasonStatus::TooLong:
            setStyleSheet(d->getStylesheet(ColorStyle::Red));
        break;
        case SeasonStatus::Deactive:
            setStyleSheet(d->getStylesheet(ColorStyle::Orange));
        break;
    }
}

void SeasonView::updateView(int timeElapsed)
{
    int duration = season->Duration();

    QString time = QString("%1/%2").arg(secs2string(timeElapsed)).arg(secs2string(duration));
    ui->labelTime->setText(time);
    ui->progressBarTime->setValue(timeElapsed);
    updateStylesheet();
}
