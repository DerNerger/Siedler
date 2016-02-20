#ifndef DICEBONI_H
#define DICEBONI_H

#include "boni.h"

class DiceBoni : public Boni
{
private:
    QMap<int, int> dices;
public:
    DiceBoni(QMap<int, int> dices) : Boni(), dices(dices){}
    virtual QString getBoniAsText();
};

#endif // DICEBONI_H
