// clase Libros 
#ifdef LIBROS
#define LIBROS
#include <iostream>
#include "../clases/libro.cpp"
#include <string>
#include "Objeto.h"
#include "../clases/objeto.cpp"
using namespace std;

class Libro::public Objeto{
    private:
        string Autor;
        int CantPaginas;
    public:
        string toString(); //falta definir getters, setters, destructores, etc.
};

#endif
