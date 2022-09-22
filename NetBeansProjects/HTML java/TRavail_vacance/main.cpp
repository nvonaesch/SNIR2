#include <cstdlib>
#include "cadran.h"
#include "Clavier.h"
using namespace std;

int main(int argc, char** argv) {
    Cadran leCadran(20, 20);
    Cadran leCadran2(10, 10, 1, 15);
    Clavier leClavier;
    int heure = 0;
    int minute = 0;
    Clavier::TOUCHES_CLAVIER touche;
        leCadran2.Afficher("ALARME","OK");
    do {
        leCadran.Afficher(heure, minute);
        touche = leClavier.Scruter();
        if (touche != Clavier::AUCUNE) {
            switch (touche) {
                case Clavier::PLUS:
                    heure++;
                    break;
                case Clavier::MOINS:
                    heure--;
                    break;
            }
        }
//        minute++;
    } while (touche != Clavier::FIN);

    return 0;
}

