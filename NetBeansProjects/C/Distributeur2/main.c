#include "monnayeur.h"
#include "menu.h"
#include "boissons.h"
int main(int argc, char** argv) 
{
    T_PIECE lesPieces[NB_PIECES];
    T_BOISSONS lesBoissons[NB_BOISSONS];
    int montant;
    int quitter = 0;
    InitialiserBoissons(lesBoissons);
    InitialiserPieces(lesPieces);
    do{
        RemplirStockPieces(lesPieces);
        RemplirStockBoissons(lesBoissons)
        AfficherPiecesEnStock(lesPieces);
        printf("\nAppuyer sur une touche Espace puis Entrée pour continuer");
        while (getchar() != ' ');
        
        printf("Montant a rendre: ");
        scanf("%d", &montant);
        
        if (RendreMonnaie(lesPieces, montant))
            printf("La monnaie est rendu\n");
        else
            printf("La monnaie ne peut être rendue\n");
        AfficherPiecesRendues(lesPieces);
        AfficherPiecesEnStock(lesPieces);
        printf("\nAppuyer sur une touche Echap puis Entrée pour Quitter");
        while ((quitter = getchar()) != 0x1B);
    }
    while (quitter != 0x1B);
    return (EXIT_SUCCESS);
}

