#ifndef SERRURE_H
#define SERRURE_H
#include <Arduino.h>
class Serrure {
public:
    Serrure(const uint8_t _broche=2);
    
    void Verouiller();
    
    void Deverouiller();
private:
    uint8_t broche;
};

#endif /* SERRURE_H */

