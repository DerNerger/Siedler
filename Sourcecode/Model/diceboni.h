#ifndef DICEBONI_H
#define DICEBONI_H

#include "boni.h"

class DiceBoni : public Boni
{
public:
    DiceBoni(QMap<int,int> Dices);
    QMap<int,int> getDices();
    QString getBoniAsText();

private:
    QMap<int,int> dices;
};

#endif // DICEBONI_H
