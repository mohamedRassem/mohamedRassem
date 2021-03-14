#include "evenement.h"

evenement::evenement()
{
    CODEEVENEMENT="":
    NOM="":
    LIEU="":
    DAT="";

}
void evenement::setCODEEVENEMENT(Qstring n){CODEEVENEMEENT=n;}
void evenement::setNOM(Qstring n){NOM=n;}
void evenement::setLIEU(Qstring n){LIEU=n;}
void evenement::setDAT(Qdate n){DAT=n;}


Qstring evenement::get_CODEEVENEMENT(){return CODEEVENEMENT;}
Qstring evenement::get_NOM(){return NOM;}
Qstring evenement::get_LIEU(){return LIEU;}
Qdate evenement::get_DAT(){return DAT;}
