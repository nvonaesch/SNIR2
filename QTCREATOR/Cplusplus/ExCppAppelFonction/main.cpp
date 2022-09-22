#include <iostream>
using namespace std;

void Ajouter(int a, int b ,int &c);

int main()
{
    int a = 1;
    int b = -2;
    int c = 0;
    cout << "avant l'appel de Ajouter" << endl;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    cout << "c= " << c << endl;

    Ajouter(a,b,c);
    // Appel le la fonction Ajouter à compléter dans le tableau suivant le cas.

    cout << "après l'appel de Ajouter" << endl;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    cout << "c= " << c << endl;
    return 0;
}

void Ajouter(int a, int b ,int &c)
{
    c=a+b ;
}
