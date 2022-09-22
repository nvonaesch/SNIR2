
#ifndef CLAVIER_H
#define CLAVIER_H
#include <termios.h>
#include <unistd.h>



class Clavier 
{
public:
    enum TOUCHES_CLAVIER // déclaration des touches du clavier
    {
        AUCUNE,
        FIN,
        MODE,
        PLUS,
        MOINS      
    };

    Clavier();
    ~Clavier();    
    TOUCHES_CLAVIER Scruter();
    
private:
    struct termios etatInitial ;
  
 };

#endif /* CLAVIER_H */

