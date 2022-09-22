#include <valarray>
#include <SenseHat.h>

#include "Pixel.h"

using namespace std;

int main(int argc, char** argv) {
    
    SenseHat senseHat;
    system("clear");
    Pixel pointA;
    Pixel pointB(4,5);
    
    pointA.AffecterPoint(2, 2);
    pointB.AffecterPoint(3, 3);
    
    pointA.AfficherPoint('A');
    pointB.AfficherPoint('B');
    
    senseHat.Effacer();
    
    int valXA, valYA, valXB, valYB;

    senseHat.AllumerPixel(pointB.LireAbscisse(), pointB.LireOrdonnee(), ORANGE);
    senseHat.AllumerPixel(pointA.LireAbscisse(), pointA.LireOrdonnee(), ORANGE);
    
    pointA.CalculerDistance(pointB.LireAbscisse(), pointB.LireOrdonnee());
    
    return 0;
}