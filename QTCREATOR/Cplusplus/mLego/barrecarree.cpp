#include "barrecarree.h"

BarreCarree::BarreCarree(const string _reference, int _longueur,double _densite,const string _nom, int _largeurCarree):

    Barre(_reference,_longueur,_densite,_nom),
    largeurCarree(_largeurCarree)
{

}

double BarreCarree::CalculerSection()
{
    return longueurCarree * longueurCarree;
}

BarreCarree::BarreCarree(const string _reference, const int _densite, int longueur, const int _cote)
{

}

double BarreCarree::CalculerMasse()
{
    return largeurCarree * densite * CalculerSection();
}

