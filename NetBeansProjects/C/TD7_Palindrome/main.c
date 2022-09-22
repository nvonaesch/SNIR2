#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE 50

//position des prototypes
int SupprimerEspace(char* chaine);
void ConvertirMajusculeEnMinuscule(char* laPhrase);
int VerifierPalindrome(char* laPhrase);

int main(int argc, char** argv) {
    char laPhrase[TAILLE];
    int nbEspace = 0;

    printf("Entrez une phrase : ");
    fgets(laPhrase, TAILLE - 1, stdin);
    laPhrase[strlen(laPhrase) - 1 ] = '\0'; // supprime \n à la fin de la phrase.

    // complétez à partir d’ici
    nbEspace = SupprimerEspace(laPhrase);
    printf("la chaine contient %d d'espace \n", nbEspace);
    printf("La chaine sans espace(s): %s \n", laPhrase);
    ConvertirMajusculeEnMinuscule(laPhrase);
    printf("La chaine sans majuscule et espaces: %s \n", laPhrase);
    
    if (VerifierPalindrome(laPhrase) == 0)
    {
        printf("la chaine n'est pas un palindrome.");
    }
    else
    {
        printf("la chaine est un palindrome.");
    }
    
    return (EXIT_SUCCESS);

}

int SupprimerEspace(char* chaine) {
    int iEcriture=0;
    int iLecture = 0;
    while (chaine[iLecture] != '\0') {
        if (chaine[iLecture] != ' ') {
            chaine[iEcriture] = chaine[iLecture];
            iEcriture++;
        }
        iLecture++;
    }
    chaine[iEcriture] = '\0';

   return iLecture - iEcriture;
}

void ConvertirMajusculeEnMinuscule(char* laPhrase) {

    int indice = 0;

    while (laPhrase[indice] != '\0') {
        if (laPhrase[indice] >= 'A' && laPhrase[indice] <= 'Z') {
            laPhrase[indice] = laPhrase[indice] + ('a' - 'A');
        }
        indice++;
    }
}

int VerifierPalindrome(char* laPhrase)
{
    int indice = 1;
    int debut = 0;
    int fin = strlen(laPhrase) - 1;

    while (debut <= fin && laPhrase[debut] == laPhrase[fin])
    {
        debut++;
        fin--;
    }
    if (laPhrase[debut] != laPhrase[fin])
    {
        indice = 0;
    }

    return indice;
}