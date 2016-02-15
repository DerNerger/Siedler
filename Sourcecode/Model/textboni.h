#ifndef TEXTBONI_H
#define TEXTBONI_H

#include "QString"
#include "boni.h"

class TextBoni : public Boni
{
private:
    QString text;
    ShowPlaceEnum place;
public:
    TextBoni(QString text, ShowPlaceEnum place) : text(text), place(place){}
    virtual QString getBoniAsText();
    virtual QString getTextFor(enum ShowPlaceEnum p);
};

#endif // TEXTBONI_H
