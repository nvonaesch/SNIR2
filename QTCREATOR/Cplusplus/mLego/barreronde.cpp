#include "barreronde.h"
#include <math.h>
BarreRonde::BarreRonde(const string _reference,const unsigned int _longueur, const double _densite, const string _nom, const double _diametre):
    Barre(_reference,_longueur,_densite,_nom),
    diametre(_diametre)
{

}

double BarreRonde::CalculerSection()
{
    return (M_PI * (diametre * diametre))/4;
}

double BarreRonde::CalculerMasse()
{
    return longueur * densite * CalculerSection();
}
