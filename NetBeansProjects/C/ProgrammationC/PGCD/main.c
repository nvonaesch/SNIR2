
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int dividende;
    int diviseur;
    int memo;
    diviseur = 15;
    dividende = 21;
    while (diviseur != 0) {
        memo = diviseur;
        diviseur = dividende % diviseur;
        dividende = memo;
    }
    printf("Le PGCD est: %d", dividende);

    return (EXIT_SUCCESS);
}

