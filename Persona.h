#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using namespace std;

class Persona
{
    private:
        int _legajo;
        string _nombre;
        string _apellido;
    public:
        Persona();
        void setLegajo(int legajo);
        void setNombre(string nombre);
        void setApellido(string apellido);
        int getLegajo();
        string getNombre();
        string getApellido();

        void cargar();
};

#endif // PERSONA_H
