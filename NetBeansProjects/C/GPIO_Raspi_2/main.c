#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>
#include <unistd.h>
#define LED1 4
#define LED2 5
#define LED3 6
#define LED4 7
#define BP1 0
#define BP2 1
#define BP3 2
#define BP4 3
#define INTER 10

int main(int argc, char** argv) {
    wiringPiSetup();
    int indice;
    for (indice = LED1; indice <= LED4; indice++){
        pinMode(indice, OUTPUT);
        digitalWrite(indice, LOW);
    }
    for (indice = BP1; indice <= BP4; indice++)
        pinMode(indice, INPUT);

    do
    {
        if (digitalRead(INTER) != HIGH)
        {
            digitalWrite(LED1,!digitalRead(BP1) & !digitalRead(BP2));
            digitalWrite(LED3,!digitalRead(BP3) | !digitalRead(BP4));
        } else {
            digitalWrite(LED3,!digitalRead(BP3) ^ !digitalRead(BP4));
        }
    }
    while (1);

    return (EXIT_SUCCESS);
}
