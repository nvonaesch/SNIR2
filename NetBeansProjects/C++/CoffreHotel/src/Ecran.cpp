#include "Ecran.h"

Ecran::Ecran(const uint16_t _dx, const uint16_t _dy):
SSD1306Wire(0x3c, SDA, SCL, GEOMETRY_128_64),
dx(_dx),
dy(_dy)
{
    init();
    flipScreenVertically();
    setFont(Dialog_plain_16);
}
    
void Ecran::AfficherMessage(const String _message, const int _ligne) {
    setColor(BLACK);
    fillRect(0,32 * _ligne, 128, 32+ _ligne * 32);
    setColor(WHITE);
    display();
    int nbPixels = getStringWidth(_message);
    int pos = (128 - nbPixels)/2;
    drawString(dx + pos, dy+ _ligne *32, _message);
    display();
}