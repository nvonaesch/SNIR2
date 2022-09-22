#ifndef SERIE_H
#define SERIE_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <bits/fcntl-linux.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif
    int ouvrirPort(char* device);
    /*fonction pour ouvrir le port série
     Renvoie un file descripter
     */



#ifdef __cplusplus
}
#endif

#endif /* SERIE_H */

