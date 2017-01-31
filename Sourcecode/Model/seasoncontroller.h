#ifndef SEASONCONTROLLER_H
#define SEASONCONTROLLER_H

#include "Model/season.h"
#include "Model/audioplayer.h"

#include <QObject>
#include <QThread>
#include <QStringList>

class SeasonController : public QObject
{
    Q_OBJECT
public:
    SeasonController();
    ~SeasonController();
    QList<Season*> getSeasons(){return seasons;}
public slots:
    void nextSeason();
    void gotoSeason(QString name);
signals:
    void changeSound(SoundType type);
    void yearIsOver();
private:
    QList<Season*> seasons;
};

#endif // SEASONCONTROLLER_H
