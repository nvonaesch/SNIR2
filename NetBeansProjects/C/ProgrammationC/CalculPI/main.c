/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tmussard
 *
 * Created on 13 octobre 2021, 09:29
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    double precision = 0.0001;
    double sommePisur4 = 1;
    double sommePisur4prec = 0;
    float signe = -1;
    float denominateur = 3;
    double ecart;
    int i;
    do {
        sommePisur4prec = sommePisur4;
        sommePisur4 = sommePisur4 + signe / denominateur;
        signe = signe * (-1);
        denominateur = denominateur + 2;
        
        ecart = fabs((sommePisur4 - sommePisur4prec)*4);
        printf(" itération = %d :Nombre Pi avec 8 chiffre après la virgule %lf avec un ecart de %lf\n\n", i, sommePisur4 * 4, ecart);
        i = i+1;
    }    while (ecart > precision);
    
    return (EXIT_SUCCESS);
    
}