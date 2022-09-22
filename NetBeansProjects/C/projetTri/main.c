

/* 
 * File:   main.c
 * Author: nvonaesch
 *
 * Created on 20 octobre 2021, 09:43
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
#define NB_ELEMENTS 5
    int tri[NB_ELEMENTS] = {5, 8, 2, 21, 1};
    int indice;
    int indice2;
    int indice3;
    int permutemp;
    int nbrpermu;

    printf("Tableau avant le tri: \n");
    for (indice3 = 0; indice3 < NB_ELEMENTS; indice3++)
    {
        printf("%4d", tri[indice3]);
    }
    printf("\n\n");

    for (indice = 0; indice < NB_ELEMENTS - 1; indice++)
    {
        nbrpermu = 0;
        for (indice2 = 0; indice2 < NB_ELEMENTS - indice - 1; indice2++)
        {
            
            if (tri[indice2] > tri[indice2 + 1])
            {
                permutemp = tri[indice2];
                tri[indice2] = tri[indice2 + 1];
                tri[indice2 + 1] = permutemp;
                nbrpermu = nbrpermu + 1;
            }

        }
        for (indice3 = 0; indice3 < NB_ELEMENTS; indice3++)
            printf("%4d", tri[indice3]);
        printf("\t Nombre de permutation : %d", nbrpermu);
        printf("\n");

    }
    for (indice3 = 0; indice3 < NB_ELEMENTS; indice3++)
        printf("%4d", tri[indice3]);
    printf("\t Nombre de permutation : %d", nbrpermu-1);
    printf("\n");

    return (EXIT_SUCCESS);
}
/* 
 * File:   main.c
 * Author: nvonaesch
 *
 * Created on 20 octobre 2021, 09:43
 */
