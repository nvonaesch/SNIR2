#include "Clavier.h"

Clavier::Clavier(const uint8_t _bps[], const int _nbPoussoirs) :
nbPoussoirs(_nbPoussoirs) // initialisation avec la liste d’initialisation
{
    if (nbPoussoirs > 4) // initialisation dans le corps du constructeur
        nbPoussoirs = 4;
    if (nbPoussoirs > 0) // Le nombre de boutons-poussoirs doit être compris entre 1 et 4
        for (int indice = 0; indice < nbPoussoirs; indice++) {
            lesboutonPoussoirs[indice] = _bps[indice]; // Recopie du paramètre dans l’attribut
            pinMode(lesboutonPoussoirs[indice], INPUT); // Initialisation des broches du GPIO en entrée
        }
}

Clavier::TOUCHES_CLAVIER Clavier::Scruter() {
    TOUCHES_CLAVIER retour = AUCUNE;
    for (int indice = 0; indice < nbPoussoirs; indice++) {
        if (!digitalRead(lesboutonPoussoirs[indice]))
            retour = static_cast<TOUCHES_CLAVIER> (indice); // si appui sur plusieurs touche seule la
    } // dernière est conservée.
    delay(200); // pour limiter les rebonds sur les boutons-poussoirs
    return retour;
}

