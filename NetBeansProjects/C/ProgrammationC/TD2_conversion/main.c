
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    float tempCapteur = 17.568;
    float tempCelsius = (tempCapteur-32)*5/9;
    printf("Temperature obtenue du capteur: %f°F\nTemperature convertie en degré celsius: %.2f°C",tempCapteur,tempCelsius);

    
    return (EXIT_SUCCESS);
}

