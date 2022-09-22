#include <cstdlib>
#include <SenseHat.h>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    SenseHat carte;
    float x, y, z;
    int angle;
    
    carte.Effacer();
    carte << setcouleur(carte.ConvertirRGB565(255,84,0));
    
    system("clear");
    
    while (1){
        carte.ObtenirAcceleration(x,y,z);
        if(x<-0.8){
            angle = 270;
        }
        if(x>+0.8){
            angle = 90;
        }
        if(y<-0.8){
            angle = 180;
        }
        if(x>0.8){
            angle = 0;
        }
        system("clear");
        
        cout << "x=" << x << "\t\ty=" << y << "\t\ty=" << z << endl;
        cout << "Temperature: " << carte.ObtenirTemperature() << flush;
        sleep(1);
    }
    return 0;
}

