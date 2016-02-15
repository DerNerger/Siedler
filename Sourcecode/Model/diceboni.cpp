#include "diceboni.h"

QString DiceBoni::getBoniAsText(){
    QString str = "";
    QMap<int, int>::iterator i;
    for (i = dices.begin(); i != dices.end(); ++i){
        str+=i.value();
        str+="W";
        str+=i.key();
        str+=" ";
    }
    return str;
}
