// clase ninio
#ifdef NINIO
#define NINIO
#include <iostream>
#include "../clases/ninio.cpp"
#include <string>
using namespace std;

class ninio
{
    private:
        string Nombre;
        int Edad;
        string Direccion;
        string telefono;
        Objeto **listaobjetosprestados;
    public:
        set listarObjetosPrestados(string); //el retorno set es depende de como queramos retornar el conjunto, ya sea lista, arreglo, etc
    // faltan getters y setters y constructores y destructores 
};

#endif