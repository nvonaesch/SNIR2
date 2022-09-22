#include "Serrure.h"

Serrure::Serrure(const uint8_t _broche):
broche(_broche)
{
    pinMode(broche, OUTPUT);
}

void Serrure::Verouiller(){
    
    pinMode(broche,OUTPUT);
    digitalWrite(broche,HIGH);
    
}
void Serrure::Deverouiller(){
    
    pinMode(broche,OUTPUT);
    digitalWrite(broche,LOW);
    
}
