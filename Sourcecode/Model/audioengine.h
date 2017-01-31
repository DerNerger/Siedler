#ifndef AUDIOENGINE_H
#define AUDIOENGINE_H

#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QTimer>
#include <QObject>

#include "Model/data.h"

class AudioEngine : public QObject
{
    Q_OBJECT
public:
    AudioEngine(double FadingTimeInS = 4);

public slots:
    void volumeChanged();
    void playAudioFor(/*Hier muss was hin*/);
    void readAudioFiles();
private:
    QMediaPlayer* player,* tmpPlayer;
    QList<QMediaPlaylist *> seasonAudios;
    QTimer*    tickGenerator;
    bool       isFading,queueFading;
    int        maxVolume;
    double     fadingTime;
    // QUEUED ENUM WAR HIER ?:(
private slots:
    void tickToTmpPlayer();
    void swapPlayers();
};

#endif // AUDIOENGINE_H
