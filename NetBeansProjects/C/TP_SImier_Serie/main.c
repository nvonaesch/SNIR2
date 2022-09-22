#include "biblioserie.h"
#include <stdlib.h>
#include <stdio.h>

#define TAILLE 1000

int main(int argc, char** argv) {
    int serial;
    char message[TAILLE];
    printf("TP liaison serie\n");
    serial = OuvrirPort("/dev/ttyUSB0");
    
    configurerSerie(serial,9600);
    recevoirMessage(serial, message, 0x04, 1000);
    printf("%s", message);
    
    return (EXIT_SUCCESS);
}
