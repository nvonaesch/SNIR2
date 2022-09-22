#include "monnayeur.h"
#include "menu.h"
#include "boissons.h"
void InitialiserBoissons(T_BOISSONS _boissons[]) {
    _boissons[0]._valeurBoissons = 200;
    _boissons[1]._valeurBoissons = 100;
    _boissons[2]._valeurBoissons = 50;
    _boissons[3]._valeurBoissons = 20;
    _boissons[4]._valeurBoissons = 10;

    strcpy(_boissons[0].montantBoissons, "2.00€");
    strcpy(_boissons[1].montantBoissons, "1.00€");
    strcpy(_boissons[2].montantBoissons, "0.50€");
    strcpy(_boissons[3].montantBoissons, "0.20€");
    strcpy(_boissons[4].montantBoissons, "0.10€");
    
    strcpy(_boissons[0].nomBoissons, "Café Sucrè");
    strcpy(_boissons[1].nomBoissons, "Café au lait");
    strcpy(_boissons[2].nomBoissons, "Chocolat");
    strcpy(_boissons[3].nomBoissons, "Coca cola");
    strcpy(_boissons[4].nomBoissons, "Orangina");
}