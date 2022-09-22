
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int annee = 2021;
     if ((annee % 4) == 0 && (annee % 100) != 0 || (annee % 400) == 0)
    {
        printf("%d est une année Bissextile", annee);
    } else {
        printf("%d n'est pas une année Bissextile", annee);
    }
    
    return (EXIT_SUCCESS);
}

