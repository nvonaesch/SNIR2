#ifndef ECRAN_H
#define ECRAN_H
#include <Arduino.h>
#include <SSD1306Wire.h>
#include "Font.h"

class Ecran : public SSD1306Wire
{
public:
    Ecran(const uint16_t _dx=0, const uint16_t _dy=0);
    void AfficherMessage(const String _message, const int _ligne=0);
private:
    int dx;
    int dy;
};

#endif /* ECRAN_H */

