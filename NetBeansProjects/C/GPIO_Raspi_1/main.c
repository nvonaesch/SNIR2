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
    for (indice = LED1; indice <= LED4; indice++)
        pinMode(indice, OUTPUT);

    do {
        digitalWrite(LED1, HIGH);
        digitalWrite(LED4, LOW);
        sleep(1);
        digitalWrite(LED1, LOW);
        digitalWrite(LED4, HIGH);
        sleep(1);
    } while (1);
    return (EXIT_SUCCESS);
}