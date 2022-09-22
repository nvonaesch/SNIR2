#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CrypteurDecrypteur.h"


int main(int argc, char** argv)
{
    char phrase[TAILLE_CHAINE];
    printf("Écrivez une phrase : \n");
    fgets(phrase, TAILLE_CHAINE, stdin);
    Menu(phrase);
    printf(phrase);
    return (EXIT_SUCCESS);
}
