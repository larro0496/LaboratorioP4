// Clase abstracta objeto
#ifdef OBJETO
#define OBJETO
#include <iostream>
#include "../clases/objeto.cpp"
#include <string>
using namespace std;

class Objeto
{
    private:
        string Nombre;
        int AnioComparado;
        enumerado Estado;
        ninio *linkninio;
    public:
        virtual string toString() = 0;
        //dejo lo de getters y setters pendiente
};

#endif