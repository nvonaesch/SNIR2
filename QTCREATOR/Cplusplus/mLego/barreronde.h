#ifndef BARRERONDE_H
#define BARRERONDE_H
#include "barre.h"

class BarreRonde : public Barre
{
public:
    BarreRonde(const string _reference, const unsigned int _longueur, const double _densite, const string _nom, const double _diametre);
    double CalculerSection();
    double CalculerMasse();
private:
    string reference;
    double diametre;
    unsigned int longueur;
    double densite;
};

#endif // BARRERONDE_H
