#include "season.h"

Season::Season(QString Name, QString Description, int Duration):
    name(Name),description(Description),duration(Duration),timeElapsed(0),status(SeasonStatus::Deactive)
{
    timer =  new QTimer();
    timer->setInterval(1000); // Tick every second
    connect(timer,SIGNAL(timeout()),this,SLOT(timerTicked()));
}

QString Season::Name()
{
    return name;
}

QString Season::Description()
{
    return description;
}

int Season::Duration()
{
    return duration;
}

SeasonStatus Season::Status()
{
    return status;
}

void Season::start()
{
    timer->start();
    status = SeasonStatus::Active;
    emit elapsedTimeChanged(0);
}

void Season::stop()
{
    timeElapsed = 0;
    timer->stop();
    status = SeasonStatus::Deactive;
    emit elapsedTimeChanged(0);
    emit seasonIsOver();
}

void Season::timerTicked()
{
    timeElapsed++;
    if(timeElapsed > duration)
        status = SeasonStatus::TooLong;
    emit elapsedTimeChanged(timeElapsed);
}
