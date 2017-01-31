#ifndef TEXTBONI_H
#define TEXTBONI_H

#include "QString"
#include "boni.h"

class TextBoni : public Boni
{
private:
    QString text;
    ShowPlaceEnum place;
    bool exclusive;
public:
    TextBoni(QString text, ShowPlaceEnum place, bool exclusive = false) : text(text), place(place),exclusive(exclusive){}
    virtual QString getBoniAsText(){return text;}
    virtual QString getTextFor(enum ShowPlaceEnum p);
    bool isExclusive(){return exclusive;}
};

#endif // TEXTBONI_H
