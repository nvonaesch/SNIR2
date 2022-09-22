#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
    char touche;
    int puissance = 128;
    printf("Appuyer sur une touche suivi de Entrée : ");
    touche = getchar();
    printf("Le code ASCII de %c en binaire et son code héxadécimal: %x : ", touche, touche);
    do
    {
        if(touche >= puissance)
        {
            printf("1");
            touche -= puissance ;  // équivalent à : touche = touche - puissance
        }
        else  printf("0"); // il n’y a pas d’accolades, car une seule instruction dans le else
        puissance /= 2;
    } while(puissance >= 1);
    printf("\n");
    return (EXIT_SUCCESS);
}