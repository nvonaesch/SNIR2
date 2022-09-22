/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: nvonaesch
 *
 * Created on 16 novembre 2021, 14:15
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE 1000

int main(int argc, char** argv) {
    char code[TAILLE];
    char boncode[TAILLE] = "camomille";
    int cmplog;
    int tentafausse = 0;
    int nbrtenta = 0;
    printf("Alors que vous êtes entrain de combattre le télégraphe reçois un message décodez le !"
            ": https://youtu.be/ZgHzyKtxjSc \n"
            "\n"
            "Dans la description sera présente la table du code morse que vous as donné votre officier dépéchez-vous !. "
            "\n\nBonne chance à vous.\n");
    printf("Entrez le code que vous avez trouvez en minuscule\n");
    while (tentafausse == 0){
            gets(code);
            cmplog = strcmp(code, boncode);

            if (cmplog == 0) {
                system("clear");
                        nbrtenta++;
                        printf("Bien joué vous avez réussit à trouver le code \n");
                        printf("Vous avez réussit en %d tentatives\n", nbrtenta);
                        tentafausse++;
            } else {
                system("clear");
                        nbrtenta++;
                        printf("Accès Refusé, Veuillez réessayer !\n");
            }
        }
        return (EXIT_SUCCESS);
    }


