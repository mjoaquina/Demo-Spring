#include "Profesor.h"
#include <iostream>
using namespace std;

Profesor::Profesor()
{
    //ctor
}

void Profesor::setTitulo(string titulo){
    _titulo = titulo;
}

string Profesor::getTitulo(){
    return _titulo;
}

void Profesor::cargar(){
    Persona::cargar();
    cout << "Ingrese titulo: ";
    cin >> _titulo;

}
