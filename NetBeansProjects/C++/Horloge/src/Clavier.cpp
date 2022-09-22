#include "Clavier.h"

Clavier::Clavier(const uint8_t _bps[], const int _nbPoussoirs) :
nbPoussoirs(_nbPoussoirs) {
    if (nbPoussoirs > 4)
        nbPoussoirs = 4; // Limite le nombre de boutons poussoirs à 4
    if (nbPoussoirs > 0) {
        lesboutonPoussoirs = new uint8_t[nbPoussoirs]; // allocation dynamique du tableau
        for (int indice = 0; indice < nbPoussoirs; indice++) {
            lesboutonPoussoirs[indice] = _bps[indice];
            pinMode(lesboutonPoussoirs[indice], INPUT);
        }
    } else lesboutonPoussoirs = nullptr; // On fixe une valeur au pointeur si l'allocation n'a pas lieu
}

Clavier::~Clavier() {
    if (lesboutonPoussoirs != nullptr) // la destruction ce fait uniquement si l'allocation a eu lieu
        delete [] lesboutonPoussoirs;
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

