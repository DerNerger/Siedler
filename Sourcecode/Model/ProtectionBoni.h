#ifndef PROTECTIONBONI_H
#define PROTECTIONBONI_H

#include "boni.h"

class ProtectionBoni : public Boni
{
public:
    ProtectionBoni(int Protection);
    virtual ~ProtectionBoni(){;}
    virtual QString getBoniAsText();
    virtual int getProtection(){return protection;}
private:
    int protection;
};

#endif // PROTECTIONBONI_H
