#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int intt = 618;
    short int sintt = 18;
    long int lintt = 94387;
    printf("%d octets pour une variable de type int\n",sizeof(int));
    printf("%X octets pour un exemple de variable de type int\n",intt);
    printf("%d octets pour une variable de type short int\n",sizeof(short int));
    printf("%X octets pour un exemple de variable de type short int\n",sintt);
    printf("%d octets pour une variable de type long int\n",sizeof(long int));
    printf("%X octets pour un exemple de variable de type long int\n",lintt);
    printf("%d octets pour une variable de type float\n",sizeof(float));
    printf("%d octets pour une variable de type double\n",sizeof(double));
    printf("%d octets pour une variable de type char\n",sizeof(char));
    printf("%d octets pour une variable de type unsigned char\n",sizeof(unsigned char));
    printf("%x en héxadécimale égale à 618 en décimal\n",intt);
    printf("%x en héxadécimale égale à 18 en décimal\n",sintt);
    printf("%x en héxadécimale égale à 94387 en décimal\n",lintt);
    return (EXIT_SUCCESS);
}
