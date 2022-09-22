#ifndef SOURCE_H
#define SOURCE_H
#define NB_MAX_CAR 50
#define NB_PERSONNES 5

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#pragma pack(push, 1)

typedef struct {
    char nom[NB_MAX_CAR];
    char prenom[NB_MAX_CAR];
    int age;
    float poids;
    char sexe; // 'f' ou 'm'
} T_PERSONNE;

void CreerNouvellePersonne(T_PERSONNE *_personne);
void EcrireFichier();
void EcrireFichierBinaire();
#endif /* SOURCE_H */