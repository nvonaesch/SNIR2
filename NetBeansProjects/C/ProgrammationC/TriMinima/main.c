#include <stdio.h>
#include <stdlib.h>
#define NB_ELEMENTS 10

int main(int argc, char** argv) {
    int nombres[NB_ELEMENTS] = {1, 3, 8, 2, 7, 5, 6, 1, 4, 9};
    int min = nombres[0];
    int indice;
    int tour;
    int nbtour;
    nbtour= 0;
    int temp;
    for (tour = 0; tour < NB_ELEMENTS-1; tour++) {
        for (indice = 0; indice < NB_ELEMENTS; indice++) {
            if (min > nombres[indice]) {
                temp = min;
                min=nombres[indice];
                nombres[tour]=temp;
            }
            printf("/tour %d/ %d  ",nbtour, nombres[indice]);
        }
        nbtour = nbtour+1;
        printf("\n");
    }
    

    return (EXIT_SUCCESS);
}
