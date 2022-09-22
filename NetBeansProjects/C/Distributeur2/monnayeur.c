#include "monnayeur.h"
#include "menu.h"
void InitialiserPieces(T_PIECE _pieces[]) {
    _pieces[0].valeurPiece = 200;
    _pieces[1].valeurPiece = 100;
    _pieces[2].valeurPiece = 50;
    _pieces[3].valeurPiece = 20;
    _pieces[4].valeurPiece = 10;

    strcpy(_pieces[0].montant, "2.00€");
    strcpy(_pieces[1].montant, "1.00€");
    strcpy(_pieces[2].montant, "0.50€");
    strcpy(_pieces[3].montant, "0.20€");
    strcpy(_pieces[4].montant, "0.10€");

}

void RemplirStockPieces(T_PIECE _pieces[]) {
    int indice;
    char nomPieces[NB_PIECES][TAILLE_NOM_OPTION];
    int numPiece;
   
    
    for (indice = 0; indice < NB_PIECES; indice++) {
        _pieces[indice]._nbEnStock = 0;
        strcpy(nomPieces[indice],_pieces[indice].montant);
    }
    do
    {
        numPiece = AfficherMenu("Ajouter des pièces dans le stock", nomPieces, NB_PIECES);
        if(numPiece != 0)
        {
            _pieces[numPiece-1]._nbEnStock +=1;
        }
    
    } while (numPiece != 0);
    
}

void AfficherPiecesEnStock(T_PIECE _pieces[])
{
    int indice;
    printf("Pièces en stock : \n\n");
    for(indice=0 ; indice < NB_PIECES ; indice++)
    {
        printf("%s x %d\n", _pieces[indice].montant, _pieces[indice]._nbEnStock);
    }
}

int RendreMonnaie(T_PIECE _pieces[], int _montant)
{
    int indice = 0;
    int retour = 0;
    for (indice = 0; indice < NB_PIECES; indice++)
    {
        _pieces[indice]._nbRendu = 0;
        while (_montant >= _pieces[indice].valeurPiece && _pieces[indice]._nbEnStock > 0)
        {
            _pieces[indice]._nbEnStock = _pieces[indice]._nbEnStock-1;
            _montant -= _pieces[indice].valeurPiece;
            _pieces[indice]._nbRendu = _pieces[indice]._nbRendu+1;
            retour = retour+1;
        }
    }
    return (retour);
}

void AfficherPiecesRendues(const T_PIECE _pieces[]){
    int indice;
    printf("Pièces rendues : \n\n");
    for(indice = 0; indice < NB_PIECES ; indice++){
        printf("%s x %d\n", _pieces[indice].montant, _pieces[indice]._nbRendu);
    }
}
void CalculerMontantIntroduit(T_PIECE _pieces[]){
    int indice;
    printf("Calcul du montant introduit...");
    for(indice =0; indice < NB_PIECES ; indice++){
        
    }
}