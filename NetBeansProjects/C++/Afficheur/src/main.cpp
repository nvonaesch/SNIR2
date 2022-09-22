#include <Arduino.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include "Afficheur.h"
#include <math.h>

OneWire oneWire(18); 
DallasTemperature capteur(&oneWire);
Afficheur afficheur;
int dixieme;

void setup() {
    capteur.begin();
    Serial.begin(115200);
    afficheur.Initialiser();
}

void loop() {
    capteur.requestTemperatures();
    
    float tempC = capteur.getTempCByIndex(0);
    if (tempC != DEVICE_DISCONNECTED_C) {
        dixieme=(tempC-(int)tempC)*10;
        afficheur.AfficherTemperature((int)tempC,floor(dixieme));
    } else {
        Serial.println("La température ne peut pas être obtenue");
    }
    delay(50);
}


/*
uint8_t bps[4] = {36,39,34,35};

Clavier leClavier(bps);
Afficheur afficheur;
int temperature;
int dixieme;

void setup()
{
    temperature=0;
    dixieme=0;
    afficheur.Initialiser();
    //AfficherTemperature(10,2);
}
void loop()
{
    afficheur.AfficherTemperature(temperature,dixieme);
    Clavier::TOUCHES_CLAVIER touche = leClavier.Scruter();
    if (touche != Clavier::AUCUNE)
    {
        switch(touche)
        {
            case Clavier::BP1:
                temperature++;
               
                break;
            case Clavier::BP2:
                temperature--;
                break;
            case Clavier::BP3:
                dixieme++;
                if (dixieme==10){
                    dixieme=0;
                }
                break;
            case Clavier::BP4:
                dixieme--;
                if (dixieme==-1){
                    dixieme=9;
                }
                break;
        }
         afficheur.AfficherTemperature(temperature,dixieme);
    }
}
 */
