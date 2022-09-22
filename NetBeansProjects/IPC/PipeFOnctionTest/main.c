/*
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define BUFSIZ 255


int main() {
    int nbOctets;
    int descTube[2];
    const char chaine[] = "123456789798789897987987987987987987987";
    char buffer[BUFSIZ];
    memset(buffer, '\0', BUFSIZ);
    
    if (pipe(descTube) == 0){
        nbOctets = write(descTube[1], chaine, strlen(chaine));
        printf("%d octets ecrits\n", nbOctets);
        nbOctets = read(descTube[0], buffer, BUFSIZ);
        printf("octets lus: %d: %s\n",nbOctets, buffer);
    }
    return (EXIT_FAILURE);
}
*/
