#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(int argc, char** argv) {
    FILE *pFich;
    char carLu;
    int indice;
    pFich = fopen("fichierTexte.txt", "r");
    int carMin = 0;
    int retour;
    /*
    if (pFich == NULL) {
        printf("%s\n", strerror(errno));
        printf("Problème à l'ouverture du fichier");
        exit(errno);
    }

    do {
        carLu = fgetc(pFich);
        if (carLu != EOF) {
            printf("%c", carLu);
            if (carLu >= 'a' && carLu <= 'z') {
                carMin++;
            }
        } else {
            if (!feof(pFich)){
                printf("Erreur de lecture");
                exit(errno);
            }
        }
    } while (!feof(pFich));


    retour = fclose(pFich);
    if (retour == EOF) {
        printf("Problème à la fermeture du fichier");
        exit(errno);
    }

    printf("\nIl y'a %d lettres non accentuées dans le fichier texte\n", carMin);
    */
    do
    {
        retour = fread(&carLu, sizeof (char), 1, pFich);
        if (retour == 1)
        {
            printf("%c", carLu);
            indice++;
            if ((carLu >= 'a') && (carLu <= 'z'))
            {
                carMin++;
            }
        }
        else
        {
            if (!feof(pFich))
            {
                printf("Erreur de lecture");
                exit(errno);
            }
        }
    }
    while (!feof(pFich));

    retour = fclose(pFich);
    if (retour == EOF)
    {
        printf("Problème à la fermeture : %s\n", strerror(errno));
        exit(errno);
    }

    printf("\nIl y a %d caractères dans le fichier\n", indice);
    printf("\nIl y a %d caractères minuscules dans le fichier\n", carMin);
     
    return (EXIT_SUCCESS);
}