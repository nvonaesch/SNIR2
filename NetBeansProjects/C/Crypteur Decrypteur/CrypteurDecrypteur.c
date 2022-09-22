#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CrypteurDecrypteur.h"

void Menu(char* chaine) {
    char demande[TAILLE_CHAINE];
    printf("Voulez vous crypter où décrypter ? (C / D ?)\n");
    scanf("%s", demande);
    ConvertirMinusculeEnMajuscule(demande);
    if (demande[0] == 'C') {
        printf("Cryptage en cours...\n");
        Crypteur(chaine);
    } else if (demande[0] == 'D') {
        printf("Décryptage en cours...\n");
        Decrypteur(chaine);
    }
}

void Crypteur(char* chaine)
{
    ConvertirMinusculeEnMajuscule(chaine);
    char* tableau1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char* tableau2 = "@8[03{6#1}:7WZ*?O4$-V^M+/N";
    int indice = 0;
    int indice2 = 0;
    for (indice = 0; chaine[indice] != '\0'; indice++)
    {
        for (indice2 = 0; tableau1[indice2] != '\0'; indice2++){
            if (chaine[indice] == tableau1[indice2]){
                chaine[indice] = tableau2[indice2];
            }
        }

        }
}

void Decrypteur(char* chaine) 
{
    ConvertirMinusculeEnMajuscule(chaine);
    char* tableau1 = "@8[03{6#1}:7WZ*?O4$-V^M+/N";
    char* tableau2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int indice = 0;
    int indice2 = 0;
    for (indice = 0; indice < strlen(chaine); indice++)
    {
        for (indice2 = 0; indice2 < strlen(chaine); indice2++){
            if (chaine[indice] == tableau1[indice2]){
                chaine[indice] = tableau2[indice2];
            }
        }

        }
}


void ConvertirMinusculeEnMajuscule(char* chaine) {
    int indice = 0;
    for (indice = 0; chaine[indice] != '\0'; indice++) {
        chaine[indice] = toupper(chaine[indice]);
    }
}

