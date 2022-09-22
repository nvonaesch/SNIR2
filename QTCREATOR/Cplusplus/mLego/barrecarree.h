#ifndef BARRECARREE_H
#define BARRECARREE_H
#include "barre.h"

class BarreCarree : public Barre
{
public:
    BarreCarree(const string _reference, int longueur,double _densite,const string _nom,int _largeurCarree);
    double CalculerSection();
    double CalculerMasse();
private:
    string reference;
    unsigned int longueurCarree;
    unsigned int largeurCarree;
    double densite;
};

#endif // BARRECARREE_H
