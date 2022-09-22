#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CrypteurDecrypteur.h"


int main(int argc, char** argv)
{
    char phrase[TAILLE_CHAINE];
    printf("Écrivez une phrase : \n");
    scanf("%s", phrase);
    ConvertirMajusculeEnMinuscule(phrase);
    Menu(phrase);
    printf(phrase);
    return (EXIT_SUCCESS);
}
