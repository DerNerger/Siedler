#include "audioplayer.h"

AudioPlayer::AudioPlayer(int Secs2Fade):
    secs2Fade(Secs2Fade),status(PlayerStatus::Stop),fadingQueue(SoundType::Empty)
{
    maxVolume = Data::getInstance()->getInt("volume",100);
    QStringList list;
    list << "Spring|Frühling"<<"Summer|Sommer"<<"Autumn|Herbst"<<"Winter|Winter"<< "*";
    for(QString s : list)
        playLists += createPlayList(s);
    timer = new QTimer();
    timer->setInterval(10*secs2Fade);
    connect(timer,SIGNAL(timeout()),this,SLOT(faderTick()));
    timer->start();

    player = new QMediaPlayer();
    tmpPlayer = new QMediaPlayer();
}

void AudioPlayer::stop()
{
    player->stop();
    tmpPlayer->stop();
    status = PlayerStatus::Stop;
}

void AudioPlayer::play(SoundType type)
{
    if(status == PlayerStatus::Play || status == PlayerStatus::Stop)
    {
        QMediaPlaylist* list = playLists.at(st2index(type));
        list->shuffle();
        list->setCurrentIndex(0);
        tmpPlayer->setPlaylist(list);
        tmpPlayer->setVolume(0);
        tmpPlayer->play();
        stepNumber = 0;
        status = PlayerStatus::Fading;
    }
    else
    {
        fadingQueue = type;
    }
}

void AudioPlayer::setVolume()
{
    int volume = Data::getInstance()->getInt("volume",100);
    if(volume >=0 && volume <= 100)
        maxVolume = volume;
    else if(volume > 100)
        maxVolume = 100;
    else
        maxVolume = 0;

    if(status != PlayerStatus::Fading)
    {
        player->setVolume(maxVolume);
    }
}

void AudioPlayer::faderTick()
{
    if(status == PlayerStatus::Fading)
    {
        stepNumber++;
        if(stepNumber <= 70)
            tmpPlayer->setVolume(maxVolume/70.0* stepNumber);
        if(stepNumber >= 30 && stepNumber <= 100)
            player->setVolume(100.0/70.0*maxVolume - stepNumber * maxVolume/70.0);
        if(stepNumber > 100)
        {
            status = PlayerStatus::Play;
            QMediaPlayer* swap = player;
            player = tmpPlayer;
            tmpPlayer = swap;

            if(fadingQueue != SoundType::Empty)
            {
                play(fadingQueue);
                fadingQueue = SoundType::Empty;
            }
        }
    }
}

QMediaPlaylist* AudioPlayer::createPlayList(QString title)
{
    Data* d = Data::getInstance();
    QStringList files = d->getMP3s();
    QMediaPlaylist* list = new QMediaPlaylist();

    for(QString file : files)
    {
        if(file.toLower().contains(QRegExp(title.toLower())))
            list->addMedia(QMediaContent(QUrl(file)));
    }
    return list;
}

int AudioPlayer::st2index(SoundType type)
{
    return static_cast<int>(type);
}
