#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CrypteurDecrypteur.h"

void Menu(char* chaine) {
    char demande[TAILLE_CHAINE];
    printf("Voulez vous crypter où décrypter ? (C / D ?)\n");
    scanf("%s", demande);

    if (demande[0] == 'C') {
        printf("Cryptage en cours...");
        Crypteur(chaine);
    } else if (demande[0] == 'D') {
        printf("Décryptage en cours...");
        Decrypteur(chaine);
    }
}

void Crypteur(char* chaine) {
    char* tableau1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char* tableau2 = "@8[03{6#1}:7WZ*?O%$-V^M+/N";
    int lettre;
    int indice = 0;
    for (indice = 0; chaine[indice] != '\0'; indice++) {
        if (chaine[indice == ' ']) {
            lettre = ' ';
        } else {
            lettre = chaine[indice] - 'A';
        }
        chaine[indice] = tableau2[lettre];
    }
}

void Decrypteur(char* chaine) {
    int indice = 0;
    for (indice = 0; chaine[indice] != '\0'; indice++) {

        while (chaine[indice] != 0) {

        }
    }
}

void ConvertirMajusculeEnMinuscule(char* chaine) {
    int indice = 0;
    for (indice = 0; chaine[indice] != '\0'; indice++) {
        chaine[indice] = toupper(chaine[indice]);
    }
}