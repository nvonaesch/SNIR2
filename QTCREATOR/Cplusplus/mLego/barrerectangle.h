#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H
#include <barre.h>

class BarreRectangle : public Barre
{
public:
    BarreRectangle(string _reference, const unsigned int _longueur, const double _densite, string _nom, const int _largeurRectangle);
    double CalculerSection();
    double CalculerMasse();
private:
    string reference;
    int longueurRectangle;
    int largeurRectangle;
    double densite;
};

#endif // BARRERECTANGLE_H
