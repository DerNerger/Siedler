#include "textboni.h"

QString TextBoni::getTextFor(enum ShowPlaceEnum p){
    if(place==p)
        return text;
    else
        return "";
}



