#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(int argc, char** argv) {
    FILE *pFich;
    int _nbrCouleur;
    int _largeur;
    int _longueur;
    int _retour;
    pFich = fopen("/home/USERS/ELEVES/SNIR2021/nvonaesch/NetBeansProjects/TD10_EXO3a/imgbmp/plasma.bmp", "r");
    if (pFich == NULL) {
        printf("Erreur àl'ouverture du fichier");
        exit(errno);
    }
    if (fseek(pFich, 18, SEEK_SET) >= 0) {

        _retour = fread(&_largeur, sizeof (u_int), 1, pFich);

        if (_retour == 1) {
            printf("La largeur de l'image est de %d pixel\n", _largeur);
        } else {
            printf("Problème à l'éxécution de la fonction fread\n");
        }

        _retour = fread(&_longueur, sizeof (u_int), 1, pFich);
        if (_retour == 1) {
            printf("La longueur de l'image est de %d pixel\n", _longueur);
        } else {
            printf("Problème à l'éxécution de la fonction fread\n");
        }
        if (fseek(pFich, 20, SEEK_CUR) == 0) {

            _retour = fread(&_nbrCouleur, sizeof (u_int), 1, pFich);

            if (_retour == 1) {
                printf("Il y'a %d Couleurs dans l'image\n", _nbrCouleur);
            } else {
                printf("Problème à l'éxécution de la fonction fread\n");
            }

        } else {
            printf("Problème lors de l'éxécution de la fonction fseek\n");
        }
    } else {
        printf("Problème lors de l'éxécution de la fonction fseek\n");
        exit(errno);
    }

    _retour = fclose(pFich);
    if (_retour == EOF) {
        printf("Problème de fermeture : %s\n", strerror(errno));
        exit(errno);
    }
    return (EXIT_SUCCESS);
}