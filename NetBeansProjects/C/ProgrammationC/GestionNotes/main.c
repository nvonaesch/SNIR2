

#include <stdio.h>
#include <stdlib.h>
#define NB_ELEVES 10

int main(int argc, char** argv) {
    float notes[NB_ELEVES] = {9,15,5,4,4.8,16,8,7,19,20,10};
    int indice;
    int cpt;
    float min;
    float max;
    float somme;
    cpt = 0;
    min = notes[0];
    max = notes[0];
    somme = 0;
    for(indice = 0; indice < NB_ELEVES - 1;indice++) {
        printf("L'élève numéro %d a eu la note %f /20 \n", indice, notes[indice]);
        if (notes[indice] >= 10){
            cpt = cpt+1;
        }
        if (min > notes[indice]){
            min = notes[indice];
        }
        if (max < notes[indice]){
            max = notes[indice];
        }
        somme = somme + notes[indice];
        
    }
    printf("%d élèves ont obtenu une notes >= 10 \n",cpt);
    printf("La moyenne de classe est : %.2f \n",somme / NB_ELEVES);
    printf("La note la plus faible est %.1f \n",min);
    printf("La note la plus élevée est %.1f \n",max);
    return (EXIT_SUCCESS);
}
