#ifndef MONNAYEUR_H
#define MONNAYEUR_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NB_PIECES 5

#ifdef __cplusplus
extern "C" {
#endif

 typedef struct {
        
        int valeurPiece;
        int _nbEnStock;
        int _nbIntroduit;
        int _nbRendu;
        char montant [10];
        
    }T_PIECE;
    
    void InitialiserPieces(T_PIECE _pieces[]);
    void RemplirStockPieces(T_PIECE _pieces[]);
    void AfficherPiecesEnStock(T_PIECE _pieces[]);
    int RendreMonnaie(T_PIECE _pieces[], int _montant);
    void AfficherPiecesRendues(const T_PIECE _pieces[]);
    void CalculerMontantIntroduit(T_PIECE _pieces[]);
    
#ifdef __cplusplus
}
#endif

#endif /* MONNAYEUR_H */

