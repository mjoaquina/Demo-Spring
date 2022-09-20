#include "Curso.h"
#include <iostream>
using namespace std;

Curso::Curso()
{
    _cantAlumnos = 0;
    _cantCursos = 0;
}

void Curso::setNombre(){
    Curso aux;
    _nombre = aux.pedirNombre();
}

string Curso::getNombre(){
    return _nombre;
}


void Curso::setCodigo(){
    Curso aux;
    _codigo = aux.pedirCodigo();
}

int Curso::getCodigo(){
    return _codigo;
}

void Curso::setProfesor(Profesor profesor){

    _profesor = profesor;
}

Profesor Curso::getProfesor(){
    return _profesor;
}

void Curso::addAlumnos(Alumno alumno){
    if(_cantAlumnos<5){
        _alumnos[_cantAlumnos] = alumno;
        _cantAlumnos++;
    }
}

Alumno Curso::getMejorAlumno(){
    Alumno mejorAlumno = _alumnos[0];
        for(int i=1; i<_cantAlumnos; i++){
        if(_alumnos[i].getNota() > mejorAlumno.getNota()){
            mejorAlumno = _alumnos[i];
            }
        }
    return mejorAlumno;
}

void Curso::addCurso(Curso curso){
    if(_cantCursos<5){
       _cantCursos++;
    }
}

int Curso::getCantCursos(){
    return _cantCursos;
}

int Curso::pedirCodigo(){
    int codigo;
    cout << "Ingrese el codigo del curso (1-5): "<< endl;
    cin >> codigo;
    return codigo;
}

string Curso::pedirNombre(){
    string nombre;
    cout << "Ingrese el nombre del curso: "<< endl;
    cin >> nombre;
    return nombre;
}
