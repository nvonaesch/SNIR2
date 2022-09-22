#ifndef _IPV4_H
#define _IPV4_H
#include <math.h>
class ipv4
{
private:
    int NbBitA1(unsigned char val);
    unsigned char * adresse;
    unsigned char * masque ;
    void CalculerMasque(unsigned char _cidr); // _cidr est utilisé en tant que variable locale dans la méthode (pas de const devant)
public:
    ipv4(const unsigned char * _adresse, const unsigned char _cidr);
    ipv4(const unsigned char * _adresse, const unsigned char * _masque);
    ~ipv4();
    void ObtenirMasque(unsigned char * _masque);
    void ObtenirAdresseReseau(unsigned char * _reseau);
    void ObtenirAdresseDiffusion(unsigned char * _diffusion);
    void ObtenirAdressePremiereMachine(unsigned char *_premiereAdresse);
    void ObtenirAdresseDerniereMachine(unsigned char *_derniereAdresse);
    unsigned int ObtenirNombreMachines();
};
#endif
