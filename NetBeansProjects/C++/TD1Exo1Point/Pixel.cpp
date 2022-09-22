#include "Pixel.h"

Pixel::Pixel(const int _abscisse, const int _ordonnee):
    abscisse(6),
    ordonnee(7)
    {
    }

Pixel::~Pixel(){
    
}

void Pixel::AffecterPoint(const int _abscisse, const int _ordonnee) {
    abscisse = _abscisse;
    ordonnee = _ordonnee;
}


int Pixel::LireAbscisse(){
    return abscisse;
}
int Pixel::LireOrdonnee(){
    return ordonnee;
}
void Pixel::AfficherPoint(const char _carPoint) {
    printf("Coordonnée du point: %c(%d;%d)", _carPoint, abscisse, ordonnee);
}






















































































































































































void Pixel::CalculerDistance(int XPixel, int YPixel){
    float distance=0;
    distance=sqrt((YPixel-abscisse)*(YPixel-abscisse)+(XPixel-ordonnee)*(XPixel-ordonnee));
    printf("%f",distance);
}


