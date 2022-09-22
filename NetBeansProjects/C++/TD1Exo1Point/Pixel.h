#ifndef PIXEL_H
#define PIXEL_H

#include <cstdlib>
#include <SenseHat.h>

class Pixel
{
public:
    Pixel(const int _abscisse=0, const int _ordonnee=0);
    ~Pixel();
    void AffecterPoint(const int _abscisse, const int _ordonnee);
    void AfficherPoint(const char _carPoint);
    int LireAbscisse();
    int LireOrdonnee();
    void CalculerDistance(int XPixel, int YPixel);
private:
    int abscisse;
    int ordonnee;
        
};



#endif /* PIXEL_H */

