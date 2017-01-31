#include "seasoncontroller.h"

SeasonController::SeasonController()
{
    int durations[] = {120,480,60,30};
    QStringList names;
    names << "Frühling" <<"Sommer" <<"Herbst" <<"Winter";
    QStringList descriptions;
    descriptions << "Rohstoffe würfeln" << "Bauen&Handeln" << "Bauen&Handeln" << "Zum Würfeln!";
    for(int i = 0 ; i < 4 ; i++)
    {
        seasons += new Season(names[i],descriptions[i],durations[i]);
    }
    connect(seasons[3],SIGNAL(seasonIsOver()),this,SIGNAL(yearIsOver()));
}

SeasonController::~SeasonController()
{

}

void SeasonController::nextSeason()
{
    bool noSeasonActive = true;
    for(int i = 0 ; i < 4 ; i++)
    {
        if(seasons[i]->Status() == SeasonStatus::Active || seasons[i]->Status() ==SeasonStatus::TooLong)
        {
            if(i < 3)
            {
                seasons[i]->stop();
                seasons[i+1]->start();
                emit changeSound(static_cast<SoundType>(i+1));
            }
            else
            {
                seasons[3]->stop();
                seasons[0]->start();
                emit changeSound(SoundType::Spring);
            }
            noSeasonActive = false;
            break;
        }
    }
    if(noSeasonActive)
    {
        seasons[0]->start();
        emit changeSound(SoundType::Spring);
        emit yearIsOver();
    }
}


void SeasonController::gotoSeason(QString name)
{
    qDebug() << name;
}
