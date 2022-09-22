#ifndef HORLOGE_H
#define HORLOGE_H

#include "Clavier.h"
#include "Cadran.h"



class Horloge {
public:
    Horloge(const short _nbMode = 3, const short _resolution = 24);
    ~Horloge();

    enum MODE_HORLOGE { /// Différents modes de l'horloge
        AUCUN_REGLAGE, /// Fonctionnement normal
        REGLAGE_HEURES,
        REGLAGE_MINUTES
    };
    void ActualiserHeure();
    bool AvancerHeures();
    bool AvancerMinutes();
    void ReculerHeures();
    void ReculerMinutes();
    Clavier::TOUCHES_CLAVIER Controler(Clavier::TOUCHES_CLAVIER numTouche);
    void ChangerMode();
protected: // les attributs sont rendus accessibles aux classes dérivées
    int heures; /// Valeur des heures courantes
    int minutes; /// Valeurs des minutes courantes
    int resolution; /// Résolution de l'horloge 12 ou 24 (valeur par défaut)
    const short nbMode; /// Nombre de modes de l'horloge
    short mode; /// Mode courant de l'horloge
    uint64_t tempsPrec; /// Valeur précédente du temps
    Clavier *leClavier; /// Composition de la classe Clavier
    Cadran *leCadran; /// Composition de la classe Cadran
};

#endif /* HORLOGE_H */

