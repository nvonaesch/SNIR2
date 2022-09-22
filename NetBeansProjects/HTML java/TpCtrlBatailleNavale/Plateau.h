#ifndef PLATEAU_H
#define PLATEAU_H
#include "Bateau.h"
using namespace std;

class Plateau {
public:
    void Jouer();
    Plateau(string _nomDuFichier);
    void AfficherGrille();
    void Tirer(const char _vertical, const int _horizontal,const bool _cible);
private:
    char grille[10][10];
};

#endif /* PLATEAU_H */

