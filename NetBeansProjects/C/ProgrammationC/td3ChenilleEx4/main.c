/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: nvonaesch
 *
 * Created on 19 octobre 2021, 14:13
 */

#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>
do{
    

    int main(int argc, char** argv) {
        int indice;
        uint16_t couleurs[8] = {ROUGE, VERT, BLEU, BLANC, JAUNE, ORANGE, MAGENTA, CYAN};
        uint16_t chenille[8] = {};
        uint16_t aux;
           InitialiserLeds();
        for (indice = 0; indice < 8; indice++) {
            chenille[indice] = couleurs[indice];
        }
        for (indice = 0; indice < 8; indice++) {
            Allumer(0,indice, chenille[indice]);
            Allumer(indice+1,7, chenille[indice]);
            Allumer(indice,0, chenille[7-indice]);
            Allumer(7,indice, chenille[7-indice]);
            chenille[indice] = chenille[indice + 1];
        }
        usleep(1000000);
    }
        chenille[indice] = aux;
        return (EXIT_SUCCESS);
}
