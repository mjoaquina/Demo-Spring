#ifndef PROFESOR_H
#define PROFESOR_H
#include "Persona.h"

class Profesor : public Persona
{
    private:
        string _titulo;
    public:
        Profesor();
        void setTitulo(string titulo);
        string getTitulo();

        void cargar();
};

#endif // PROFESOR_H
