#include <stdio.h>
#include <stdlib.h>
#include <SenseHat.h>

int main(int argc, char** argv) {
    
    SenseHat senseHat;
    
    int temperature;
    int ligne, colonne;
    
    senseHat.Effacer();
    
    COULEUR rouge = senseHat.ConvertirRGB565(255,0,0);
    COULEUR vert = senseHat.ConvertirRGB565(0,255,0);
    COULEUR bleu = senseHat.ConvertirRGB565(0,0,255);
    
    temperature = senseHat.ObtenirTemperature();
    usleep(20 * 1000);
    
    system("clear");
    
    printf("Temperature: %d °C\n\r", temperature);
    
    ligne = temperature/8;
    colonne = temperature - ligne *8;
    
    if (temperature < 15){
        senseHat.AllumerPixel(ligne, colonne, bleu);
    }
    if (temperature >= 15 && temperature <=30){
        senseHat.AllumerPixel(ligne, colonne, vert);
    }
    if (temperature > 30){
        senseHat.AllumerPixel(ligne, colonne, rouge);
    }
    return 0;
}

