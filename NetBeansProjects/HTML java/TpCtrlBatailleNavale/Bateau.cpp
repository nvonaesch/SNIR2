#include "Bateau.h"

Bateau::Bateau(const string _nom, const char _vertical, const int _horizontal, const int _taille, const char _sens) :
    vertical(_vertical),
    horizontal(_horizontal),
    nom(_nom),
    taille(_taille),
    sens(_sens)
{
    ETATS_BATEAU(MANQUE); 
    coque[taille];
    for(int i= 0;i<taille;i++)
        coque[i]=0;
}
/*Le destructeur est nécessaire car les bateaux peuvent être coulés*/
Bateau::~Bateau() {
}
Bateau::ETATS_BATEAU Bateau::Torpiller(const char _vertical, const int _horizontal){
    int total;
    int i;
    if(sens == 'H'){
        if(_vertical-vertical<taille  && _horizontal == horizontal){
            coque[_vertical - vertical] =1;
            return TOUCHE;
        }
    }
    if(sens == 'V'){
        if(_vertical == vertical  && _horizontal -horizontal<taille){
            coque[_vertical - vertical] =1;
            return TOUCHE;
        }
    }
    for(i=0;i<taille;i++){
        total+=coque[i];
    }
    if(total==taille){
        return COULE;
    }
    return MANQUE;
}
string Bateau::ObtenirNom(){
    return nom;
}