#include "serie.h"
int ouvrirPort(char* device){
     int port;
    port = open("/dev/ttyS0", O_RDWR);
    if (port == -1) {
        perror("Erreur à l'ouverture du port série\n");
        exit(errno);
    } else {
        printf("ttyS0 ouvert");
    }
    return port;
}