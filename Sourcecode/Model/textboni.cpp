#include "textboni.h"

QString TextBoni::getBoniAsText(){
    return text;
}

QString TextBoni::getTextFor(enum ShowPlaceEnum p){
    if(place==p)return text;
    else return "";
}
