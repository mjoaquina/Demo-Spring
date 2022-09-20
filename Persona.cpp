#include <iostream>
#include "Persona.h"

Persona::Persona()
{
    //ctor
}

void Persona::setLegajo(int legajo){
   _legajo = legajo;
}

void Persona::setNombre(string nombre){
    _nombre = nombre;
}

void Persona::setApellido(string apellido){
    _apellido = apellido;
}

int Persona::getLegajo(){
    return _legajo;
}

string Persona::getNombre(){
    return _nombre;
}

string Persona::getApellido(){
    return _apellido;
}

void Persona::cargar(){

    cout << "Ingrese nombre: ";
    cin >> _nombre;
    cout << "Ingrese apellido: ";
    cin >> _apellido;
    cout << "Ingrese legajo: ";
    cin >>_legajo;

}
