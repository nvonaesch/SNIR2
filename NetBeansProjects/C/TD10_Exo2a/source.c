#include "source.h"

void CreerNouvellePersonne(T_PERSONNE *_personne)
{
    printf("Entrez le nom de la personne : ");
    scanf("%s", _personne->nom);
    printf("Entrez le prénom du joueur : ");
    scanf("%s", _personne->prenom);
    printf("Entrez l'age de la personne : ");
    scanf("%d", &_personne->age);
    printf("Entrez le poids en kilos de la personne : ");
    scanf("%f", &_personne->poids);
    printf("Entrez le sexe (m ou f) de la personne : ");
    scanf(" %c", &_personne->sexe);
}

void EcrireFichier()
{
    FILE *pFich;
    T_PERSONNE lesPersonnes[NB_PERSONNES];

    int indice;
    size_t nbEcrits;
    for (indice = 0; indice < NB_PERSONNES; indice++)
    {
        printf("\nPersonne n°%d\n", indice + 1);
        CreerNouvellePersonne(&lesPersonnes[indice]);
    }
    
    pFich = fopen("/home/USERS/ELEVES/SNIR2021/kaubry/Documents/Personne1.txt", "w");
    for (indice = 0; indice < NB_PERSONNES; indice++)
    {
        nbEcrits = fprintf(pFich, "%s / %s / %d / %f / %c\n\n", lesPersonnes[indice].nom, lesPersonnes[indice].prenom,lesPersonnes[indice].age, lesPersonnes[indice].poids, lesPersonnes[indice].sexe);
    }
    fclose(pFich);
    pFich = fopen("/home/USERS/ELEVES/SNIR2021/kaubry/Documents/Personne2.txt", "w");
    for (indice = 0; indice < NB_PERSONNES; indice++)
    {
        nbEcrits = fprintf(pFich, "%s / %s / %d / %f / %c\n\n", lesPersonnes[indice].nom, lesPersonnes[indice].prenom,lesPersonnes[indice].age, lesPersonnes[indice].poids, lesPersonnes[indice].sexe);
    }
    fclose(pFich);
    pFich = fopen("/home/USERS/ELEVES/SNIR2021/kaubry/Documents/Personne3.txt", "w");
    for (indice = 0; indice < NB_PERSONNES; indice++)
    {
        nbEcrits = fprintf(pFich, "%s / %s / %d / %f / %c\n\n", lesPersonnes[indice].nom, lesPersonnes[indice].prenom,lesPersonnes[indice].age, lesPersonnes[indice].poids, lesPersonnes[indice].sexe);
    }
    fclose(pFich);
    pFich = fopen("/home/USERS/ELEVES/SNIR2021/kaubry/Documents/Personne4.txt", "w");
    for (indice = 0; indice < NB_PERSONNES; indice++)
    {
        nbEcrits = fprintf(pFich, "%s / %s / %d / %f / %c\n\n", lesPersonnes[indice].nom, lesPersonnes[indice].prenom,lesPersonnes[indice].age, lesPersonnes[indice].poids, lesPersonnes[indice].sexe);
    }
    fclose(pFich);
    pFich = fopen("/home/USERS/ELEVES/SNIR2021/kaubry/Documents/Personne5.txt", "w");
    for (indice = 0; indice < NB_PERSONNES; indice++)
    {
        nbEcrits = fprintf(pFich, "%s / %s / %d / %f / %c\n\n", lesPersonnes[indice].nom, lesPersonnes[indice].prenom,lesPersonnes[indice].age, lesPersonnes[indice].poids, lesPersonnes[indice].sexe);
    }
    fclose(pFich);
    pFich = fopen("/home/USERS/ELEVES/SNIR2021/kaubry/Documents/Personne6.txt", "w");
    for (indice = 0; indice < NB_PERSONNES; indice++)
    {
        nbEcrits = fprintf(pFich, "%s / %s / %d / %f / %c\n\n", lesPersonnes[indice].nom, lesPersonnes[indice].prenom,lesPersonnes[indice].age, lesPersonnes[indice].poids, lesPersonnes[indice].sexe);
    }
    fclose(pFich);
    pFich = fopen("/home/USERS/ELEVES/SNIR2021/kaubry/Documents/Personne7.txt", "w");
    for (indice = 0; indice < NB_PERSONNES; indice++)
    {
        nbEcrits = fprintf(pFich, "%s / %s / %d / %f / %c\n\n", lesPersonnes[indice].nom, lesPersonnes[indice].prenom,lesPersonnes[indice].age, lesPersonnes[indice].poids, lesPersonnes[indice].sexe);
    }
    fclose(pFich);
    pFich = fopen("/home/USERS/ELEVES/SNIR2021/kaubry/Documents/Personne8.txt", "w");
    for (indice = 0; indice < NB_PERSONNES; indice++)
    {
        nbEcrits = fprintf(pFich, "%s / %s / %d / %f / %c\n\n", lesPersonnes[indice].nom, lesPersonnes[indice].prenom,lesPersonnes[indice].age, lesPersonnes[indice].poids, lesPersonnes[indice].sexe);
    }
    fclose(pFich);
    pFich = fopen("/home/USERS/ELEVES/SNIR2021/kaubry/Documents/Personne9.txt", "w");
    for (indice = 0; indice < NB_PERSONNES; indice++)
    {
        nbEcrits = fprintf(pFich, "%s / %s / %d / %f / %c\n\n", lesPersonnes[indice].nom, lesPersonnes[indice].prenom,lesPersonnes[indice].age, lesPersonnes[indice].poids, lesPersonnes[indice].sexe);
    }
    fclose(pFich);
    pFich = fopen("/home/USERS/ELEVES/SNIR2021/kaubry/Documents/Personne10.txt", "w");
    for (indice = 0; indice < NB_PERSONNES; indice++)
    {
        nbEcrits = fprintf(pFich, "%s / %s / %d / %f / %c\n\n", lesPersonnes[indice].nom, lesPersonnes[indice].prenom,lesPersonnes[indice].age, lesPersonnes[indice].poids, lesPersonnes[indice].sexe);
    }
    fclose(pFich);
    pFich = fopen("/home/USERS/ELEVES/SNIR2021/kaubry/Documents/Personne11.txt", "w");
    for (indice = 0; indice < NB_PERSONNES; indice++)
    {
        nbEcrits = fprintf(pFich, "%s / %s / %d / %f / %c\n\n", lesPersonnes[indice].nom, lesPersonnes[indice].prenom,lesPersonnes[indice].age, lesPersonnes[indice].poids, lesPersonnes[indice].sexe);
    }
    fclose(pFich);
    pFich = fopen("/home/USERS/ELEVES/SNIR2021/kaubry/Documents/Personne12.txt", "w");
    for (indice = 0; indice < NB_PERSONNES; indice++)
    {
        nbEcrits = fprintf(pFich, "%s / %s / %d / %f / %c\n\n", lesPersonnes[indice].nom, lesPersonnes[indice].prenom,lesPersonnes[indice].age, lesPersonnes[indice].poids, lesPersonnes[indice].sexe);
    }
    fclose(pFich);
    pFich = fopen("/home/USERS/ELEVES/SNIR2021/kaubry/Documents/Personne13.txt", "w");
    for (indice = 0; indice < NB_PERSONNES; indice++)
    {
        nbEcrits = fprintf(pFich, "%s / %s / %d / %f / %c\n\n", lesPersonnes[indice].nom, lesPersonnes[indice].prenom,lesPersonnes[indice].age, lesPersonnes[indice].poids, lesPersonnes[indice].sexe);
    }
    fclose(pFich);
    
    
}

void EcrireFichierBinaire(){
    FILE *pFich ;
    T_PERSONNE lesPersonnes[NB_PERSONNES];
  
    int indice;
    int nbOctets;
    size_t nbEnreg;
    for (indice = 0; indice < NB_PERSONNES; indice++)
    {
        printf("\nJoueur n°%d\n",indice+1);
        CreerNouvellePersonne(&lesPersonnes[indice]);
    }                                       
    pFich = fopen("Joueur3.bin","wb");
    nbOctets =fwrite(lesPersonnes, sizeof (T_PERSONNE), NB_PERSONNES,pFich);
    if(nbEnreg != NB_PERSONNES)
           exit(errno); //  L’écriture n’a pas pu se faire correctement on quitte le programme    
    fclose(pFich);
}