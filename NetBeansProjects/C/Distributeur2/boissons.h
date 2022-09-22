/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   boissons.h
 * Author: nvonaesch
 *
 * Created on 7 décembre 2021, 14:23
 */

#ifndef BOISSONS_H
#define BOISSONS_H
#define NB_BOISSONS 5
#ifdef __cplusplus
extern "C" {
#endif
    
typedef struct {
        
        int _valeurBoissons;
        int _nbBoissonsEnStock;
        char montantBoissons [10];
        char nomBoissons[50];
        
    }T_BOISSONS;
    
    void InitialiserBoissons(T_BOISSONS _boissons[]);
    void RemplirStockBoissons(T_BOISSONS _boissons[]);


#ifdef __cplusplus
}
#endif

#endif /* BOISSONS_H */

