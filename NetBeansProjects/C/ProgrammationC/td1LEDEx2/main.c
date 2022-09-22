/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: nvonaesch
 *
 * Created on 12 octobre 2021, 13:47
 */

#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>
int main() 
{
    int colonne ;
    InitialiserLeds();
    for(colonne = 0 ; colonne <= 7 ; colonne++)
    {
        Allumer(0,colonne,ROUGE);
        colonne = colonne +1;
    }
    return 0;
}

