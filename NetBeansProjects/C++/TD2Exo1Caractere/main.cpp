#include <iostream>
#include <SenseHat.h>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    SenseHat carte;
    string message;
    
    system("clear");
    carte.Effacer();
    
    cout << "Entrer votre message";
    getline(cin, message);
    
    carte.SetColor(carte.ConvertRGB565(84,84,0));
    carte.SetRotation(270);
    
    while(1){
        carte << "'" << message << "'" << flush;
        sleep(1);
    }
    return 0;
}

