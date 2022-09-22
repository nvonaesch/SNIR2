#ifndef BATEAU_H
#define BATEAU_H
#include <string>
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

class Bateau {
public:
    Bateau();
    Bateau(const string _nom, const char _vertical, const int _horizontal, const int _taille, const char _sens='H');
    ~Bateau();
    enum ETATS_BATEAU{
        MANQUE,
        TOUCHE,
        COULE
    };
    ETATS_BATEAU Torpiller(const char _vertical, const int _horizontal);
    string ObtenirNom();
    ETATS_BATEAU ObtenirEtatBateau();
private:
    char sens;
    int horizontal;
    int* coque;
    string nom;
    char vertical;
    int taille;
};

#endif /* BATEAU_H */

