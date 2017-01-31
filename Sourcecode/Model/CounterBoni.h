#ifndef COUNTERBONI_H
#define COUNTERBONI_H

#include "boni.h"

class CounterBoni : public Boni
{
public:
    CounterBoni(int id = -1,QString Text = "");
    virtual ~CounterBoni(){;}
    virtual int counterID();
    virtual QString getTextFor(ShowPlaceEnum place);
    virtual QString getBoniAsText();
private:
    int ID;
    QString text;
};

#endif // COUNTERBONI_H
