#ifndef AFFICHEUR_H
#define AFFICHEUR_H

#include <Arduino.h>
#include <SSD1306Wire.h>
#include "Font.h"


class Afficheur : public SSD1306Wire
{
public:
    Afficheur();
    void Initialiser();
    void AfficherTemperature(const int _temperature,const int _dixieme,const uint16_t _dx=25,const uint16_t _dy=10);
};

#endif /* AFFICHEUR_H */
