#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H

#include "barre.h"

class BarreRectangle : public Barre
{
public:
    BarreRectangle(string _reference, const unsigned int _longueur, const double _densite, string _nomAlliage, const int _largeur);
    virtual void AfficherCaracteristiques();
    int CalculerSection();
    virtual float CalculerMasse();
private:
    int largeur;
};

#endif // BARRERECTANGLE_H
