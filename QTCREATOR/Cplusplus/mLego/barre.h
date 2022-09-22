#ifndef BARRE_H
#define BARRE_H
#include <stdlib.h>
#include <iostream>

using namespace std;

class Barre
{

public:

    Barre(const string _reference, unsigned int _longueur, const double _densite,const string _nom);
    void AfficherCaracteristiques();
protected:

    string reference;
    string nom;
    double densite;
    unsigned int longueur;

};

#endif // BARRE_H
