// clase JuegoMesa
#ifdef JUEGOMESA
#define JUEGOMESA
#include <iostream>
#include "../clases/juegomesa.cpp"
#include <string>
#include "Objeto.h"
#include "../clases/objeto.cpp"
using namespace std;

class JuegoMesa::public Objeto{
    private:
        int EdadRecomendada;
        int CantJugadores;
    public:
        string toString();
};

#endif