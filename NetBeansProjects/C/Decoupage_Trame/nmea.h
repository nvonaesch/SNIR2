#ifndef NMEA_H
#define NMEA_H
#include <stdio.h>
#include <stdlib.h>
#include <termios.h> // structure pour configurer la laison série 
#include <errno.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <ctype.h>

    int decouper(char trame[], char *champs[], int size);


#endif /* NMEA_H */

