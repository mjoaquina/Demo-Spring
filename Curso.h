#ifndef CURSO_H
#define CURSO_H
#include "Profesor.h"
#include "Alumno.h"
#include <string>
using namespace std;

class Curso
{
    private:
        string _nombre;
        int _codigo;
        Profesor _profesor;
        Alumno _alumnos[5];
        int _cantAlumnos;
        int _cantCursos;

    public:
       Curso();
       void setNombre();
       string getNombre();

       void setCodigo();
       int getCodigo();

       void setProfesor(Profesor profesor);
       Profesor getProfesor();

       void addAlumnos(Alumno alumno);
       Alumno getMejorAlumno();

       void addCurso(Curso curso);
       int getCantCursos();

       int pedirCodigo();
       string pedirNombre();

};

#endif // CURSO_H
