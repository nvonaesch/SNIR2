#include <iostream>
#include "contenant.h"
#include "carton.h"
#include "caissedebouteille.h"
using namespace std;

int main()
{
    Carton lecarton(10,10,30,590);
    cout<<"Volume de la caisse: " << uneCaisse.CalculerVolume() << endl;
    return 0;
}
