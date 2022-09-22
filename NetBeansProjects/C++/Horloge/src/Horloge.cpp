#include "Horloge.h"
uint8_t bps[4] = {36, 39, 34, 35};

Horloge::Horloge(const short _nbMode, const short _resolution) :
heures(0),
minutes(0),
resolution(_resolution),
nbMode(_nbMode),
mode(AUCUN_REGLAGE),
tempsPrec(millis()) {
    leCadran = new Cadran(5, 5);
    leClavier = new Clavier(bps);
}

void Horloge::ActualiserHeure() {
    uint64_t TempsEcoule;
    TempsEcoule = millis() - tempsPrec;
    if (TempsEcoule > 1000) {
        tempsPrec = millis();
        if (AvancerMinutes())
            AvancerHeures();
    }
    leCadran->Afficher(heures, minutes);


}

bool Horloge::AvancerHeures() {
    bool retour = false;
    if (++heures == resolution) {
        heures = 0;
        retour = true; // on est arrivé à la fin de l’heure
    }
    return retour;
}

bool Horloge::AvancerMinutes() {
    bool retour = false;
    if (++minutes == 60) // pré-incrémentation puis test d’égalité avec la valeur 60
    {
        minutes = 0;
        retour = true; // on est arrivé à la fin de l’heure
    }
    return retour;
}

void Horloge::ReculerHeures() {
    if (--heures == -1)
        heures = resolution - 1;
}

void Horloge::ReculerMinutes() {
    if (--minutes == -1)
        minutes = 59;
}

Clavier::TOUCHES_CLAVIER Horloge::Controler(Clavier::TOUCHES_CLAVIER numTouche) {
    switch (mode) {
        case AUCUN_REGLAGE:
            ActualiserHeure();
            if (numTouche == Clavier::MODE)
                ChangerMode();
            break;
        case REGLAGE_HEURES:
            if (numTouche == Clavier::MODE)
                ChangerMode();
            if (numTouche == Clavier::PLUS) {
                AvancerHeures();

            }
            if (numTouche == Clavier::MOINS) {
                ReculerHeures();

            }
            leCadran->Afficher("HH", heures);
            break;
        case REGLAGE_MINUTES:
            if (numTouche == Clavier::MODE)
                ChangerMode();
            if (numTouche == Clavier::PLUS) {
                AvancerMinutes();

            }
            if (numTouche == Clavier::MOINS) {
                ReculerMinutes();

            }
            leCadran->Afficher("MM", minutes);
            break;
    }
    return leClavier->Scruter();
}

void Horloge::ChangerMode() {
    if (++mode == nbMode)
        mode = AUCUN_REGLAGE;

}

Horloge::~Horloge() {
    delete leClavier;
    delete leCadran;
}

