#include <stdio.h>
#include <stdlib.h>
int main()
{
    int age=18;
    float taille=1.75;
    float note=15;
    char nom[255] ="toto" ; 
    printf("Bonjour %s , vous avez %d ans, vous mesurez %.2f m, vous avez de la note de %.2f/20",nom,age,taille,note);
}