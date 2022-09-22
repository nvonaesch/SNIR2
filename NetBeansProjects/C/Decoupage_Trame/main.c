
#include "nmea.h"

int main(int argc, char** argv)
{

    char trame[1500] = "$GPGGA,064036.289,4836.5375,N,00740.9373,E,1,4,1.0,200.2,M,,,,0000*0E";
    char *champs[20];
    int nb = 0;
    
    nb = decouper(trame, champs, 20);
    
    for(int i=0 ; i < nb ; i++){
        printf("%s\n", champs[i]);
    }
    
    return (EXIT_SUCCESS);
}