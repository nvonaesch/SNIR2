#include "Plateau.h"

Plateau::Plateau(const string _nomDuFichier){
    for (int i=0;i<10;i++)
        for (int j=0;j<10;j++)
            grille[i][j]=' ';
}


/*
void Plateau::Jouer() {
    Bateau::ETATS_BATEAU torpille;
    bool sortie = false;
    char vertical;
    int horizontal;
    if (laFlotte.ObtenirNbBateaux() != 0) {
        cout << "Entrer les coordonnées de la torpille : ";
        do {
            cin >> vertical >> horizontal;
            torpille = laFlotte.TirerSurLaFlotte(vertical, horizontal);
            switch (torpille) {
                case Bateau::TOUCHE:
                    Tirer(vertical, horizontal, true);
                    cout << "Rejouer : ";
                    break;
                case Bateau::COULE:
                    Tirer(vertical, horizontal, true);
                    cout << "Bateau coulé... ";
                    if (laFlotte.VerifierEtatDeLaFlotte() != Bateau::COULE)
                        cout << "rejouer : ";
                    else
                        sortie = true;
                    break;
                case Bateau::MANQUE:
                    Tirer(vertical, horizontal, false);
                    cout << "Rejouer : ";
                    break;
            }
        } while (sortie == false);
    }
    cout << "fin de la partie !" << endl;
*/

