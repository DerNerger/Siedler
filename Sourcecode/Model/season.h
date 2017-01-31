#ifndef SEASON_H
#define SEASON_H

#include <QObject>
#include <QTimer>

enum class SeasonStatus{Active,TooLong,Deactive};

class Season : public QObject
{
    Q_OBJECT
public:
    Season(QString Name,QString Description, int Duration);
    QString Name();
    QString Description();
    int Duration();
    SeasonStatus Status();
public slots:
    void start();
    void stop();
signals:
    void elapsedTimeChanged(int time);
    void seasonIsOver();
private slots:
    void timerTicked();
private:
    int duration,timeElapsed;
    QString description,name;
    SeasonStatus status;
    QTimer* timer;

};

#endif // SEASON_H
