#ifndef MEDIAPLAYER_H
#define MEDIAPLAYER_H

#include <QWidget>

#include "Model/data.h"

namespace Ui {
class MediaPlayer;
}

class MediaPlayer : public QWidget
{
    Q_OBJECT

public:
    explicit MediaPlayer(bool playAutomatic, QWidget *parent = 0);
    ~MediaPlayer();

private:
    Ui::MediaPlayer *ui;

public slots:

signals:
    void volumeChanged(int vol);
    void playMain();
    void playSecond();
    void pause();
    void autoSound(bool doIt);
};

#endif // MEDIAPLAYER_H
