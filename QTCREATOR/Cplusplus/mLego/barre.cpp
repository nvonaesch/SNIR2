#include "barre.h"

Barre::Barre(const string _reference, unsigned int _longueur, const double _densite, const string _nom):
    reference(_reference),
    nom(_nom),
    densite(_densite),
    longueur(_longueur)
{
    cout << "constructeur classe Barre" << endl;
}

void Barre::AfficherCaracteristiques()
{
    cout << "Le numero de reférence est n°" << reference << endl;
    cout << "La longueur est de: " << longueur << " m" <<  endl;
    cout << "La densite est de: " << densite << " kg/m3" << endl;
    cout << "Le nom de l'alliage est: " << nom << endl;
}


