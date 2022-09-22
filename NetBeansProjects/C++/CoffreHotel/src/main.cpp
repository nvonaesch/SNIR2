#include <cstdlib>
#include <Arduino.h>
#include "Ecran.h"
#include "Serrure.h"

Ecran *ecran;
Serrure laSerrure;
void setup(){
    ecran = new Ecran;
    ecran->AfficherMessage("Porte Ouverte");
    ecran->AfficherMessage("Code :",1);
}

void loop(){
    laSerrure.Deverouiller();
    delay(500);
    laSerrure.Verouiller();
}