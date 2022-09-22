#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE_CHAINE 50



int VerifierVerbePremierGrp(char* chaine);
void SupprimerTerminaison(char* chaine);
void Conjuguer(char* chaine);

int main(int argc, char** argv) {

    char verbe[TAILLE_CHAINE];

    printf("Entrez un verbe du 1 er groupe : ");
    scanf("%s", verbe);

    printf("\nVous avez saisi la chaine suivant |%s|", verbe);
    if (VerifierVerbePremierGrp(verbe)) {
        printf("c'est un verbe du 1er groupe\n");
    } else
        printf("ce n'est pas un verbe du 1er groupe \n");
    SupprimerTerminaison(verbe);
    printf("Verbe sans terminaison %s\n", verbe);
    Conjuguer(verbe);
    return (EXIT_SUCCESS);
}

int VerifierVerbePremierGrp(char* verbe) {

    int retour = 0;
    int longueurVerbe = strlen(verbe);
    if (verbe[longueurVerbe - 1] == 'r' && verbe[longueurVerbe - 2] == 'e' && (strcmp("aller", verbe) != 0 || strcmp("aller", verbe) != 0)) {
        retour = 1;
    }
    return retour;
}

void SupprimerTerminaison(char* verbe) {
    int longueurchaine = strlen(verbe);
    verbe[longueurchaine - 2] = '\0';
}

void Conjuguer(char* verbe) {
    char *terminaisons[TAILLE_CHAINE] = {"e", "es", "e", "ons", "ez", "ent"};
    char *terminaisonsGer[TAILLE_CHAINE] = {"e", "es", "e", "eons", "ez", "ent"};
    char *sujet [TAILLE_CHAINE] = {"je", "tu", "il", "nous", "vous", "ils"};
    char *sujetvoyelle [TAILLE_CHAINE] = {"j'", "tu", "il", "nous", "vous", "ils"};
    int indice;
    int longueurVerbe = strlen(verbe);
    for (indice = 0; indice < 6; indice++) {
        if (verbe[0] == 'a' || verbe[0] == 'e' || verbe[0] == 'i' || verbe[0] == 'o' || verbe[0] == 'u' || verbe[0] == 'y' || verbe[0] == 'A' || verbe[0] == 'E' || verbe[0] == 'I' || verbe[0] == 'O' || verbe[0] == 'U' || verbe[0] == 'Y') {
            printf("%s %s%s\n", sujetvoyelle[indice], verbe, terminaisons[indice]);
        } else {
            if (verbe[longueurVerbe - 1] = 'g') {
                printf("%s %s%s\n", sujet[indice], verbe, terminaisonsGer[indice]);
            } else {
                printf("%s %s%s\n", sujet[indice], verbe, terminaisons[indice]);
            }
        }
    }
}