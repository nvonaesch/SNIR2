#include "Cadran.h"

Cadran::Cadran(const int16_t _dx, const int16_t _dy) :
SSD1306Wire(0x3c, SDA, SCL, GEOMETRY_128_64) {
    init();
    flipScreenVertically();
    dx = _dx;
    dy = _dy;
    clear();
}

void Cadran::Afficher(const int _heures, const int _minutes) {
    setFont(DejaVu_Sans_32);
    clear();
    drawRect(0, 0, 128, 64);
    uint16_t posPixel = getStringWidth(String(_heures));
    if (_heures < 10) {
        drawString(dx, dy, "0" + String(_heures) + ":");
        posPixel += getStringWidth("0");
        posPixel += getStringWidth(":");
    } else {
        drawString(dx, dy,String(_heures) + ":");
        posPixel += getStringWidth(":");
    }
    if (_minutes < 10)
        drawString(dx + posPixel, dy, "0" + String(_minutes));
    else
        drawString(dx + posPixel, dy, String(_minutes));
    display();
}

void Cadran::Afficher(const String _texte, const int _valeur) {
    setFont(DejaVu_Sans_32);
    clear();
    drawRect(0, 0, 128, 64);
    uint16_t posPixel = getStringWidth(String(_texte));
    drawString(dx, dy,String(_texte)+" ");
    posPixel += getStringWidth(" ");
    if (_valeur < 10)
        drawString(dx + posPixel, dy, "0" + String(_valeur));
    else{
        drawString(dx + posPixel, dy, String(_valeur));
        setFont(DejaVu_Sans_32);
    }
        
    display();
}




