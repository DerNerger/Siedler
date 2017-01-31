#ifndef AUDIOPLAYER_H
#define AUDIOPLAYER_H

#include <QObject>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QMediaContent>
#include <QTimer>

#include "Model/data.h"

enum class PlayerStatus{Stop,Fading,Play};
enum class SoundType{Spring,Summer,Autumn,Winter,All,Empty};

class AudioPlayer : public QObject
{
    Q_OBJECT
public:
    AudioPlayer(int SecsToFade = 4);

public slots:
    void stop();
    void play(SoundType type);
    void playSpring(){play(SoundType::Spring);}
    void playSummer(){play(SoundType::Summer);}
    void playAutumn(){play(SoundType::Autumn);}
    void playWinter(){play(SoundType::Winter);}
    void setVolume();
private slots:
    void faderTick();
private:
    int secs2Fade;
    QMediaPlaylist* createPlayList(QString title);
    QVector<QMediaPlaylist *> playLists;
    QMediaPlayer* player,*tmpPlayer;
    PlayerStatus status;
    QTimer* timer;    
    int stepNumber;
    int maxVolume;
    SoundType fadingQueue;
    int st2index(SoundType type);
};

#endif // AUDIOPLAYER_H
