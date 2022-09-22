#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE 100

int main(int argc, char** argv)
{

    char chaine[TAILLE];
    char chaine2[TAILLE];
    char chainecopy[TAILLE];
    int len;
    int len2;
    int cmp;
    int indice;
    int nbmots = 0;
    int nbesp = 0;
    char * substr;
    int nbresp = 0;


    printf("Saisir une premiere chaîne de caractères :");
    gets(chaine);
    printf("Saisir une deuxieme chaîne de caractères :");
    gets(chaine2);

    //2.

    len = strlen(chaine);
    len2 = strlen(chaine2);
    printf("La longueur de %s est de %d\n", chaine, len);
    printf("La longueur de %s est de %d\n\n", chaine2, len2);

    //3.

    cmp = strcmp(chaine, chaine2);
    if (cmp < 0)
    {
        printf("chaine est plus petit que chaine2\n");
    }
    else if (cmp > 0)
    {
        printf("chaine est plus grand que chaine2\n");
    }
    else
    {
        printf("chaine est égal à chaine2\n");
    }

    //4.

    substr = strstr(chaine, chaine2);
    printf("Il n'y a pas de sous-chaîne\n", substr);

    //5.

    for (indice = 0; indice < strlen(chaine); indice++)
    {
        if (chaine[indice] == ' ')
        {
            nbesp++;
        }
    }
    printf("Il y a %d espaces dans la premiere chaine\n", nbesp);

    //6.

    for (indice = 0; indice < strlen(chaine); indice++)
    {
        if (chaine[indice] == ' ')
        {
            nbmots++;
        }
    }
    printf("Il y a %d mots dans la premiere chaine\n", nbmots + 1);

    //7.

    strcpy(chainecopy, chaine);
    strcat(chainecopy, " ");
    strcat(chainecopy, chaine2);
    printf("Les deux chaînes cote a cote donnent : %s\n", chainecopy);
    
    char *positionEspace = chaine;
    
    while(positionEspace != NULL)
    {
        positionEspace = strchr(positionEspace+1, ' ');
        if(positionEspace != NULL)
        {
            printf("%s\n",positionEspace);
            nbresp++;
        }
    }
    printf("IL y'a %d espace", nbresp);
    return (EXIT_SUCCESS);
}