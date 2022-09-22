#ifndef BIBLIOSERIE_H
#define BIBLIOSERIE_H

#include <stdio.h>
#include <stdlib.h>
#include <termios.h> // structure pour configurer la laison série 
#include <errno.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

#ifdef __cplusplus
extern "C" {
#endif

    int OuvrirPort(char* fichier);
    void configurerSerie(const int fd, const int baud);
    int recevoirMessage(const int fd, char *message, const char fin, const int size);
    
#ifdef __cplusplus
}
#endif

#endif /* BIBLIOSERIE_H */

