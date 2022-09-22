#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CrypteurDecrypteur.h"


int main(int argc, char** argv)
{
    char phrase[TAILLE_CHAINE];
    int choix;
    
    printf("\n\t\tProgramme de Cryptage / Décryptage de messages\n");
    printf("\n\t\tPOur crypter un message : 1\n");
    printf("\n\t\tPOur décrypter un message : \n");
    printf("\t\tQuel choix désirez vous faire ?");
    scanf("%d", &choix);
    getchar();
    switch (choix) {
        case 1: printf("\n\n Veuillez saisir le message à crypter" );
            fgets(phrase, TAILLE_CHAINE, stdin);
            Crypteur(phrase);
            printf("\n\n MEssage crypté: %s\n", phrase);
            break;
        case 2: printf("\n\n Veuillez saisir le message à crypter" );
            fgets(phrase, TAILLE_CHAINE, stdin);
            Decrypteur(phrase);
            printf("\n\n MEssage crypté: %s\n", phrase);
            break;
        
    }
    ConvertirMinusculeEnMajuscule(phrase);
    
    Menu(phrase);
    
    printf(phrase);
    
    return (EXIT_SUCCESS);
}


