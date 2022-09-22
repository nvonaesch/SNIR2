/* 
 * File:   main.c
 * Author: nvonaesch
 *
 * Created on 30 novembre 2021, 13:43
 */
#include "menu.h"
#include "monnayeur.h"
int main()
{
    
   char *nomBoissons [NB_BOISSONS +1] = { "Quitter","Café sucré    (1 euro)",
                                       "Café au lait  (1 euro)", "Chocolat      (1 euro)", 
                                       "Coca cola     (1,5 euro)", "Orangina      (1,5 euro)"};
   char* nomPiece[NB_PIECES] = {
       "Pour ne plus insérer de pièce","2 Euros", "1 euros", "50 cents", "20 cents", "10 cents"
   };
   AfficherMenu(nomBoissons, NB_BOISSONS +1);
   AfficherMenu(nomPiece, NB_PIECES +1);
   return (EXIT_SUCCESS);
}
