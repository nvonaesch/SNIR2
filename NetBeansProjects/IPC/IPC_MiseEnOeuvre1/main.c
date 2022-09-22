#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
int system (const char *chaine);
/*
 * 
 */
int main() {
    int retour;
    retour=system("uname -rom");
    if (retour==1){
        printf("pb avec appel fonction system");
        exit(0);
    }
    return (0);
}

