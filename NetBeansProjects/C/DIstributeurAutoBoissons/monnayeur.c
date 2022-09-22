#include "menu.h"
#include "monnayeur.h"

int CalculerMontantDepose(int _pieces[][NB_PIECES], int _nbPieces)
{
    int montant;
    int indice = 0;
    for (indice = 0; indice < NB_PIECES; indice += 1)
    {
        montant = montant + _pieces[1][indice] * _pieces[0][indice];
    }
    return montant;

}