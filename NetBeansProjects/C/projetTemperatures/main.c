/* 
 * File:   main.c
 * Author: nvonaesch
 *
 * Created on 20 octobre 2021, 08:12
 */
/* Il faut que le projet s'ouvre dans un terminal externe sinon il peut y'avoir des problèmes d'affichages.*/
#include <stdio.h>
#include <stdlib.h>
#define NB_MESURES 28

int main() {
    float temperatures[NB_MESURES] = {9.6, 9.4, 9.5, 5.1, 5.9, 7.7, 0.9, 1.4, -0.5, -3.6, -6.6, -3.1, -5.5, -4.8, 2.1, 5.4, 8.6, 8.1, 3.7, 10.3, 9.2, 9.4, 8.5, 9.2, 6, 6.5, 2.7, 2.7};
    int indice;
    int cpt;
    float min;
    float max;
    float somme; /*définition de la variable somme*/
    cpt = 0; /*définition de la variable cpt qui sera le compte du nombre de jours avec des températures négatives*/
    int journeefroide; /*définition de la variable qui contiendras la température de la journée la plus froide*/
    int journeechaude; /*définition de la variable qui contiendras la température de la journée la plus chaude*/
    min = temperatures[0]; /*définition de la variable min*/
    max = temperatures[0]; /*définition de la variable max*/
    somme = 0; /*définition de la variable somme*/
    for (indice = 0; indice < NB_MESURES; indice++) {
        /*affichage de chacun des jours avec leur date et leur température*/
        printf("Le %.2d février température :  %+3.1f °C  \n", indice + 1, temperatures[indice]);
        /*calcul du nombre de jours ayant une température négative*/
        if (temperatures[indice] < 0) {
            cpt = cpt + 1;
        }
        /*calcul du minimum*/
        if (min > temperatures[indice]) {
            min = temperatures[indice];
            journeefroide = indice + 1;
        }
        /*calcul du maximum*/
        if (max < temperatures[indice]) {
            max = temperatures[indice];
            journeechaude = indice + 1;
        }
        somme = somme + temperatures[indice];

    }
    printf("\n");
    printf("Au mois de février, il y a eu %d jours ou la température était négative \n", cpt); /* Affichage du nombre de jours avec une température négative*/
    printf("La moyenne des temperatures est : %+.2f°C \n", somme / NB_MESURES); /* Affichage de la température moyenne*/
    printf("Le %d février était la journée  la plus froide avec %+.1f °C \n", journeefroide, min); /* Affichage de la journée la plus froide ainsi que sa température*/
    printf("Le %d février était la journée  la plus chaude avec %+.1f °C \n", journeechaude, max); /* Affichage de la journée la plus chaude ainsi que sa température*/


    return (EXIT_SUCCESS);
}
/* 
 * File:   main.c
 * Author: nvonaesch
 *
 * Created on 20 octobre 2021, 08:12
 */
