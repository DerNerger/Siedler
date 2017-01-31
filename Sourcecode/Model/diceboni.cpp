#include "diceboni.h"

QString DiceBoni::getBoniAsText(){
    QString str = "Rohstoffwürfel ";
    QMap<int, int>::iterator i;
    for (i = dices.begin(); i != dices.end(); ++i)
    {
        if(i.value()>0)
            str +=  QString("%1W%2,").arg(i.value()).arg(i.key());
    }
    str.chop(1);
    return str;
}

QMap<int, int> DiceBoni::getDices()
{
    return dices;
}
