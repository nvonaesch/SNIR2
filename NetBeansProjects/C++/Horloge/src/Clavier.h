#ifndef CLAVIER_H
#define CLAVIER_H

#include <Arduino.h>


class Clavier
{
public:

    enum TOUCHES_CLAVIER {
        AUCUNE = -1,
        MODE, 
        PLUS,
        MOINS,
        FIN
    };
    Clavier(const uint8_t _bps[], const int _nbPoussoirs = 4);
    ~Clavier();
    TOUCHES_CLAVIER Scruter();
private:
    uint8_t *lesboutonPoussoirs;
    int nbPoussoirs;
};

#endif /* CLAVIER_H */

