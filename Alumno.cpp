#include "Alumno.h"
#include <iostream>

void Alumno::setNota(int nota){
    _nota = nota;
}

int Alumno::getNota(){
    return _nota;
}

void Alumno::cargar(){
    Persona::cargar();
    cout << "Ingrese la nota:";
    cin >> _nota;
}
