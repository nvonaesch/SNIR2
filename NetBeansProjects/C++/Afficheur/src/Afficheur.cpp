#include "Font.h"
#include "Afficheur.h"

Afficheur::Afficheur():
SSD1306Wire(0x3c,SDA,SCL, GEOMETRY_128_64)
{
}

void Afficheur::Initialiser(){
    init();
    flipScreenVertically();
}

void Afficheur::AfficherTemperature(const int _temperature,const int _dixieme,const uint16_t _dx,const uint16_t _dy){
    clear();
    drawRect(0,0,128,64);
    setFont(DejaVu_Sans_32);
    uint16_t posPixel=getStringWidth(String(_temperature));
    if (_temperature>=0){
        drawString(_dx,_dy,"+"+String(_temperature));
        posPixel+=getStringWidth("+");
    }
    else{
        drawString(_dx,_dy,String(_temperature));

    }
    setFont(DejaVu_Sans_16);
    drawString(_dx+posPixel,_dy,"°C");
    drawString(_dx+posPixel,_dy+16,"."+String(_dixieme));
    
    display();
}