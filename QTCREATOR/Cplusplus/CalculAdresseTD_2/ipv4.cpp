#include "ipv4.h"

ipv4::ipv4(const unsigned char * _adresse,const unsigned char _cidr)
{
    adresse = new unsigned char [4];
    masque = new unsigned char [4];
    for(int indice = 0 ; indice < 4 ; indice++)
        adresse[indice] = _adresse[indice];
    if(_cidr <= 32)
        CalculerMasque(_cidr);
}

ipv4::ipv4(const unsigned char * _adresse,const unsigned char * _masque)
{
    adresse = new unsigned char [4];
    masque = new unsigned char [4];
    for(int indice = 0 ; indice < 4 ; indice++)
    {
        adresse[indice] = _adresse[indice];
        masque[indice] = _masque[indice];
    }
}

ipv4::~ipv4()
{
    delete [] adresse;
    delete [] masque ;
}

void ipv4::CalculerMasque(unsigned char _cidr)
{
    int indice ;
    // Le masque est remis à 0 -> 0.0.0.0
    for(indice = 0 ; indice < 4 ; indice++)
        masque[indice] = 0 ;
    indice = 0;
    // tant que le cidr est un multiple de 8
    while(_cidr >= 8)
    {
        masque[indice++] = 255 ;
        _cidr -= 8 ;
    }
    // Complément pour la fin du cidr (<8)
    unsigned char puissance = 128 ;
    while(_cidr-- > 0) // Après le test la variable _cidr est décrémentée
    { // les puissances de 2 sont ajoutées à l'octet par valeur décroissante
        masque[indice] += puissance ;
        puissance /=2 ;
    }
}

void ipv4::ObtenirAdresseReseau(unsigned char * _reseau)
{
    for(int indice = 0 ; indice < 4 ; indice++)
        _reseau[indice] = adresse[indice] & masque[indice] ;
}

void ipv4::ObtenirMasque(unsigned char * _masque)
{
    for(int indice = 0 ; indice < 4 ; indice++)
        _masque[indice] = masque[indice];
}

void ipv4::ObtenirAdresseDiffusion(unsigned char *_diffusion)
{
    unsigned char adresseDuReseau[4];
    ObtenirAdresseReseau(adresseDuReseau);
    for(int indice = 0 ; indice < 4 ; indice++)
        _diffusion[indice] = adresseDuReseau[indice] | ~masque[indice] ;
}

void ipv4::ObtenirAdressePremiereMachine(unsigned char *_premiereAdresse)
{
    unsigned char adresseDuReseau[4];
    ObtenirAdresseReseau(adresseDuReseau);
    for(int indice = 0 ; indice < 4 ; indice++)
        _premiereAdresse[indice] = adresseDuReseau[indice] ;
    _premiereAdresse[3]++;
}

void ipv4::ObtenirAdresseDerniereMachine(unsigned char *_derniereAdresse)
{
    unsigned char adresseDiffusion[4];
    ObtenirAdresseDiffusion(adresseDiffusion);
    for(int indice = 0 ; indice < 4 ; indice++)
        _derniereAdresse[indice] = adresseDiffusion[indice] ;
    _derniereAdresse[3]--;
}
int ipv4::NbBitA1(unsigned char val){
    int n = 0;
    do{
        n+= val & 1;
    }while (val >>=1);
    return n;
}
unsigned int ipv4::ObtenirNombreMachines()
{
    unsigned int nb=0;
    for (int i =0; i<4;i++)
        nb += NbBitA1(masque[i]);
    return exp2(32-nb)-2;
}

