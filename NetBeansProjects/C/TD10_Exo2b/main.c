#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>


int main(int argc, char** argv) {
    FILE *pFich;
    char carLu;
    int indice;
    int retour;
    pFich = fopen("/home/USERS/ELEVES/SNIR2021/kaubry/NetBeansProjects/language c/TD10_Exo2a/personnes.txt", "r"); 
    // Si le programme ne fonctionne pas il faut changer le chemin ci-dessus.
    do
    {
        retour = fread(&carLu, sizeof (char), 1, pFich);
        if (retour == 1)
        {
            printf("%c", carLu);
            indice++;
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
    
    return (EXIT_SUCCESS);
}

