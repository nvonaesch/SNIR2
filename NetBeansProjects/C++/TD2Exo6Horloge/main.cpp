#include <cstdlib>
#include <SenseHat.h>
#include <string>
#include <iostream>

using namespace std;

string ObtenirHeure(){
    time_t t = time(nullptr);
    stringstream ss;
    ss << put_time(localtime(&t), " %H:%M");
    return ss.str();
}
int main(int argc, char** argv) {
    
    SenseHat carte;
    float x,y,z;
    int angle;
    
    carte.Effacer();
    carte << setcouleur(carte.ConvertirRGB565(64,84,0));
    
    system("clear");
    
    while(1){
        carte.ObtenirAcceleration(x, y, z);
        if(x<-0.8)
            angle = 270;
        if(x<+0.8)
            angle = 90;
        if(x<-0.8)
            angle = 180;
        if(x<+0.8)
            angle = 0;
        system("clear");
        if(z<-0.5){
            
        }
        carte << setrotation(angle)<< ObtenirHeure() << endl;
        
        sleep(1);
    }

    return 0;
}

