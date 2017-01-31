#include "ProtectionBoni.h"

ProtectionBoni::ProtectionBoni(int Protection) : protection(Protection)
{

}

QString ProtectionBoni::getBoniAsText()
{
 return QString("Schutz +%1").arg(protection);
}
