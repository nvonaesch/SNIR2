#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int nbr;
    int resultat;
    int ancien;
    int ancienAvant;
    int indice;
    nbr = 20;
    printf("les %d premiers termes de la suite de Fibonacci sont :\n",nbr);
    if (nbr == 0 || nbr == 1) {
        resultat = nbr;
        printf("le resultat est : %d",resultat);
    } else {
        ancienAvant = 0;
        ancien = 1;
        printf(" 1 ;");
        for (indice = 2; indice <= nbr; indice++) {
            resultat = ancien + ancienAvant;
            ancienAvant = ancien;
            ancien = resultat;
            printf(" %d ;",resultat);
        }
    }
    return (EXIT_SUCCESS);
}

