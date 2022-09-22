#include <Arduino.h>
#include "Cadran.h"
#include "Clavier.h"
#include "Horloge.h"



Horloge *uneHorloge;
Clavier::TOUCHES_CLAVIER touche ;
void setup()
{
touche = Clavier::AUCUNE ;
uneHorloge = new Horloge;
}
void loop()
{
touche = uneHorloge->Controler(touche);
}



