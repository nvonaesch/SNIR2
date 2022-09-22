#ifndef BARRERONDE_H
#define BARRERONDE_H

#include "barre.h"

class BarreRonde : public Barre
{
public:
    BarreRonde(string _reference, const unsigned int _longueur, const double _densite, string _nomAlliage, const int _diametre);
    int CalculerSection();
    virtual void AfficherCaracteristiques();
    virtual float CalculerMasse();
private:
    int diametre;
};

#endif // BARRERONDE_H
