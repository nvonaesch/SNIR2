#include "menu.h"
#include "monnayeur.h"
int AfficherMenu(char *options[], int nbOptions)
{
    int i;
    int choix = 0;
    int indice;
    int indice2;
    for (indice = 1; indice < nbOptions; indice++)
    {
        printf("%d - %s\n", indice, options[indice]);
    }
    printf("\n0 - %s\n\n", options[0]);
    printf("Votre choix : ");
    scanf("%d", &choix);
    system("clear");
    
}
