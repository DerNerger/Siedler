#ifndef TRADEBONI_H
#define TRADEBONI_H

#include "Model/boni.h"

class TradeBoni : public Boni
{
public:
    TradeBoni(int value);
    QString getBoniAsText();
    int getTradeRatio(){return value;}
private:
    int value;
};

#endif // TRADEBONI_H
