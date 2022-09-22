#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE 50

int VerificationGroupe(char* str);
void Conjugaison(char* str);
int EstUneVoyelle(char* str);

int main(int argc, char** argv)
{
    char verbe[TAILLE];

    printf("Saisir un verbe du premier groupe :\n");
    fgets(verbe, TAILLE - 1, stdin);
    verbe[strlen(verbe) - 1] = '\0';

    if (VerificationGroupe(verbe) == 1)
    {
        printf("Le verbe est du premier groupe\n");
        Conjugaison(verbe);
    }
    else
    {
        printf("Le verbe n'est pas du premier groupe\n");
    }
    return (EXIT_SUCCESS);
}

int VerificationGroupe(char* str)
{
    int indice = strlen(str) - 1;
    int indice2 = strlen(str) - 2;
    int estDuPremierGroupe = 0;

    if (str[indice] == 'r' && str[indice2] == 'e')
    {
        estDuPremierGroupe = 1;
        if (strcmp(str, "aller") == 0 || strcmp(str, "Aller") == 0)
        {
            estDuPremierGroupe = 0;
            printf("Le verbe aller n'est pas un verbe du premier groupe\n");
        }
    }
    return estDuPremierGroupe;
}

int EstUneVoyelle(char* str)
{
    int retour = 0;
    char voyelles[] = "aeiouyAEIOUY";
    int indice;
    
    for (indice = 0 ; indice < strlen(voyelles); indice++){
        if (str[0] == voyelles[indice]){
            retour = 1;
        }
    }
    return retour;
}

void Conjugaison(char* str)
{
    int indice = strlen(str) - 1;
    int indice2 = strlen(str) - 2;
    char conjugue[TAILLE];

    strncpy(conjugue, str, strlen(str) - 2);
    conjugue[strlen(str)-2] = '\0';

    if (EstUneVoyelle(str) == 1)
    {
        printf("J'%se\n", conjugue);
    }
    else
    {
        printf("Je %se\n", conjugue);
    }
    printf("Tu %ses\n", conjugue);
    printf("Il/Elle %se\n", conjugue);
    if (conjugue[strlen(conjugue) - 1] == 'g')
    {
        printf("Nous %seons\n", conjugue);
    }
    else
    {
        printf("Nous %sons\n", conjugue);
    }
    printf("Vous %sez\n", conjugue);
    printf("Ils/Elles %sent\n", conjugue);
}
