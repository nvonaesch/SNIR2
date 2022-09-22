#include "Bateau.h"

#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

class Flotte {
public:
    Flotte(const string _nomDuFichier);
    ~Flotte();
    Bateau::ETATS_BATEAU TirerSurLaFlotte(const char _vertical, const int _horizontal);
    Bateau::ETATS_BATEAU VerifierEtatDeLaFlotte();
    int ObtenirNbBateaux() const;
private:
    static const int NB_BATEAUX_MAX = 5;
    int nbBateaux;
    Bateau *lesBateaux[NB_BATEAUX_MAX];
};
/*Le 5 à l'extrémité de la flèche signifie que l'on crée ici 5 instances qui seront nos 5 bateaux*/
/*LA relation entre la classe Flotte et la classe Bateau est une relation de composition*/