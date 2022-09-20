#ifndef ALUMNO_H
#define ALUMNO_H
#include "Persona.h"

class Alumno : public Persona
{
    private:
        int _nota;
    public:
        void setNota(int nota);
        int getNota();
        void cargar();
};

#endif // ALUMNO_H
