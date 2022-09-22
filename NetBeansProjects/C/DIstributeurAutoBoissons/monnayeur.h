/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   monnayeur.h
 * Author: nvonaesch
 *
 * Created on 30 novembre 2021, 15:20
 */

#ifndef MONNAYEUR_H
#define MONNAYEUR_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

#define NB_BOISSONS 5
#define NB_PIECES 5
    
    int CalculerMontantDepose(int _pieces[][NB_PIECES], int _nbPieces);
    int piecesIntroduites[2][NB_PIECES];
#ifdef __cplusplus
}
#endif

#endif /* MONNAYEUR_H */

