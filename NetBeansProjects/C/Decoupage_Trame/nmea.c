#include "nmea.h"

int decouper(char trame[], char *champs[], int size)
{

    char *ptr = trame;
    char fin = 0; // la fin n'est pas trouvée
    int i = 0;

    do
    {
        while (*ptr != '\0' && isspace(*ptr))
        { //On saute les caractères qui ne sont pas des lettres
            ptr++;
        }
        if (*ptr == '\0')
        {
            fin = 1;
        }
        else
        {
            champs[i] = ptr;
            while (*ptr != ',' && *ptr != '\0')
            {
                ptr++;
            }
            if (*ptr != '\0')
            {
                *ptr = '\0';
                ptr++;
            }
            i++;
        }
    }
    while (!fin && i < size - 1);
    champs[i] = NULL;
    return i;
}