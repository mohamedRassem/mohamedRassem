#ifndef EVENEMENT_H
#define EVENEMENT_H
#include<Qstring>

class evenement
{
public:
    void setCODEEVENEMENT(Qstring n);
    void setNOM(Qstring n);
    void setLIEU5(Qstring n);
    void setDAT(Qdate);
    Qstring get_CODEEVENEMENT();
    Qstring get_NOM();
    Qstring get_LIEU();
    Qdate get_DAT();
    evenement();
private:

    Qstring CODEEVENEMENT,NOM,LIEU;
    Qdate DAT;

};

#endif // EVENEMENT_H
