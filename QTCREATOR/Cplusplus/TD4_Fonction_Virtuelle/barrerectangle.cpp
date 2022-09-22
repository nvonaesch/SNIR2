#include "barrerectangle.h"

BarreRectangle::BarreRectangle(string _reference, const unsigned int _longueur, const double _densite, string _nomAlliage, const int _largeur):
    Barre(_reference, _longueur, _densite, _nomAlliage),
    largeur(_largeur)
{
}

void BarreRectangle::AfficherCaracteristiques()
{
    Barre::AfficherCaracteristiques();
    cout << "La largeur est de: " << largeur << " m" << endl;
}

int BarreRectangle::CalculerSection()
{
    return longueur*largeur;
}

float BarreRectangle::CalculerMasse()
{
    return longueur*CalculerSection()*densite;
}
