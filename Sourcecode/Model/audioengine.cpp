#include "audioengine.h"

AudioEngine::AudioEngine(double FadingTimeInS) : fadingTime(FadingTimeInS)
{
    player    = new QMediaPlayer();
    tmpPlayer = new QMediaPlayer();

    maxVolume = Data::getInstance()->getInt("volume");
    player->setVolume(maxVolume);
    tmpPlayer->setVolume(0);

    tickGenerator = new QTimer();
    tickGenerator->start(fadingTime*10);
    connect(tickGenerator,SIGNAL(timeout()),this,SLOT(tickToTmpPlayer()));

    isFading = false;
    queueFading = false;

    readAudioFiles();
}

void AudioEngine::playAudioFor()
{

}

void AudioEngine::readAudioFiles()
{
    QStringList files = Data::getInstance()->getMP3s();

    while(seasonAudios.length() < 4)
       seasonAudios.append(new QMediaPlaylist());

    for(QString s : files)
    {
        if(s.toLower().contains("spring"))
            seasonAudios.at(0)->addMedia(QMediaContent(QUrl(s)));
        else if(s.toLower().contains("summer"))
            seasonAudios.at(1)->addMedia(QMediaContent(QUrl(s)));
        else if(s.toLower().contains("autumn"))
            seasonAudios.at(2)->addMedia(QMediaContent(QUrl(s)));
        else if(s.toLower().contains("winter"))
            seasonAudios.at(3)->addMedia(QMediaContent(QUrl(s)));
    }

    for(int i=0;i<4;i++)
        seasonAudios[i]->setCurrentIndex(0);

    player->setPlaylist(seasonAudios.at(0));
    tmpPlayer->setPlaylist(seasonAudios.at(1));
}

void AudioEngine::volumeChanged()
{
    maxVolume = Data::getInstance()->getInt("volume");
    if(!isFading)
        player->setVolume(maxVolume);
}

void AudioEngine::tickToTmpPlayer()
{
    static int step = 0;

    player->play();
    tmpPlayer->play();

    if(isFading)
    {
        step++;
        if(step <= 70)
            tmpPlayer->setVolume(maxVolume/70.0* step);
        if(step >= 30 && step <= 100)
            player->setVolume(100.0/70.0*maxVolume - step * maxVolume/70.0);
        if(step > 100)
        {
            step = 0;
            isFading = false;
            swapPlayers();
        }
    }
}

void AudioEngine::swapPlayers()
{
    QMediaPlayer* dummy = player;
    player = tmpPlayer;
    tmpPlayer = dummy;
}
