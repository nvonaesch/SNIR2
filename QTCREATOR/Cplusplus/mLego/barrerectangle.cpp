#include "barrerectangle.h"

BarreRectangle::BarreRectangle(string _reference, const unsigned int _longueur, const double _densite, string _nom, const int _largeurRectangle):
         Barre(_reference,_longueur,_densite,_nom),
         largeurRectangle(_largeurRectangle)
{

}
double BarreRectangle::CalculerMasse()
{

    return longueurRectangle * densite * CalculerSection();
}
double BarreRectangle::CalculerSection()
{
    return longueurRectangle * largeurRectangle;
}
