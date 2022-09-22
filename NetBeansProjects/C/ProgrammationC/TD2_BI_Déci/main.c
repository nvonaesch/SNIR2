#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char touche;
    int puissance = 128;
    int nbDecimal = 0;
    do {
        printf("Entrez le premier caractere de votre nombre :\n");
        touche = getchar();
        getchar();
        if (touche == 49) {
            nbDecimal = nbDecimal + puissance;
            puissance = puissance / 2;
        } else puissance = puissance / 2;
    } while (puissance >= 1);
    printf("\n");
    printf("Le nombre decimal equivalent est %d", nbDecimal);
    return (EXIT_SUCCESS);
}