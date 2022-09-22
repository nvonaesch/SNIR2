#ifndef CADRAN_H
#define CADRAN_H

#include <Arduino.h>
#include <SSD1306Wire.h>
#include <string>
#include "font.h"

class Cadran : public SSD1306Wire// Relation d’héritage
{
public:

   
    Cadran(const int16_t _dx = 15, const int16_t _dy = 16);
    void Afficher(const int _heures, const int _minutes);
    void Afficher(const String _texte, const int _valeur);
private:
    int16_t dx; /// Coordonnée en x du 1er caractère à afficher dans le cadran
    int16_t dy; /// Coordonnée en y du 1er caractère à afficher dans le cadran
};
#endif /* CADRAN_H */

