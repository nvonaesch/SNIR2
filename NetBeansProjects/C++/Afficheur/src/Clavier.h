#ifndef CLAVIER_H
#define CLAVIER_H

#include <Arduino.h>

class Clavier {
public:

    enum TOUCHES_CLAVIER {
        AUCUNE = -1,
        BP1, 
        BP2,
        BP3,
        BP4
    };
    Clavier(const uint8_t _bps[], const int _nbPoussoirs = 4);
    TOUCHES_CLAVIER Scruter();
private:
    uint8_t lesboutonPoussoirs[4];
    int nbPoussoirs;
};

#endif /* CLAVIER_H */
