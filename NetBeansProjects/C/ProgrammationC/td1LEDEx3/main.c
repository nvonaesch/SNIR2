#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>

int main(int argc, char** argv) {
    int ligne;
    int colonne;
    InitialiserLeds();
    for (ligne= 0 ; ligne <= 7 ; ligne++)
    {
        Effacer();
        for (colonne= 0 ; colonne <= 7 ; colonne++){
            Allumer(ligne,colonne,BLEU);
            Allumer(colonne,ligne,BLEU);  
        }
        usleep(500000);
    }
   
    return (0);
}