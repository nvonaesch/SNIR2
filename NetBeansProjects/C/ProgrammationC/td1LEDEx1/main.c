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
    InitialiserLeds();
    Allumer(0,0,BLEU);
    Allumer(0,1,ROUGE);
    Allumer(1,0,VERT);
    Allumer(7,0,JAUNE);
    Allumer(0,7,ORANGE);
    Allumer(7,7,MAGENTA);
    return 0;
}

