#include "mediaplayer.h"
#include "ui_mediaplayer.h"

MediaPlayer::MediaPlayer(bool playAutomatic, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MediaPlayer)
{
    ui->setupUi(this);

    ui->checkBox->setChecked(playAutomatic);
    connect(ui->checkBox,SIGNAL(clicked(bool)),this,SIGNAL(autoSound(bool)));
    connect(ui->pushButtonOverview,SIGNAL(released()),this,SIGNAL(playMain()));
    connect(ui->pushButtonYear,SIGNAL(released()),this,SIGNAL(playSecond()));
    connect(ui->volumeSlider,SIGNAL(valueChanged(int)),this,SIGNAL(volumeChanged(int)));
}

MediaPlayer::~MediaPlayer()
{
    delete ui;
}
