

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char** argv) {
    float a = 5;
    double b = 7;
    float c = 0;
    float delta;
    float x;
    float x1;
    float x2;
    delta = b*b -4*a*c;
    double sqrt(double delta);
    if(delta>0){
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta))/ (2 * a);
        printf("Il y'a deux solutions %f et %f", x1,x2);
    }
    else if (delta==0){
        x = -b/(2*a);
        printf("La solution x0 = %f",x);
    } 
    else if(delta<0){
        printf("Il n'y a pas de solutions");
    }
    return (EXIT_SUCCESS);
}

