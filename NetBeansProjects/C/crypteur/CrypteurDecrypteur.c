/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CrypteurDecrypteur.h"

void Crypteur(char* chaine)
{
    ConvertirMinusculeEnMajuscule(chaine);
    char* tableau1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char* tableau2 = "@8[03{6#1}:7wz*?o4$-v^m+/n";
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
    char* tableau1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char* tableau2 = "@8[03{6#1}:7wz*?o4$-v^m+/n";
    int indice = 0;
    int indice2 = 0;
    for (indice = 0; chaine[indice] != '\0'; indice++)
    {
        for (indice2 = 0; tableau2[indice2] != '\0'; indice2++)
        {
            if (chaine[indice] == tableau2[indice2])
            {
                chaine[indice] = tableau1[indice2];
            }
        }

    }
}

void ConvertirMinusculeEnMajuscule(char* chaine)
{
    int indice = 0;
    for (indice = 0; chaine[indice] != '\0'; indice++)
    {
        chaine[indice] = toupper(chaine[indice]);
    }
}