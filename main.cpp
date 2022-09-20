#include <iostream>
#include "Alumno.h"
#include "Profesor.h"
#include "Curso.h"

using namespace std;

int main()
{
    Curso cursos[5];
    Curso curso;
    int opcion;
    do
    {
        cout << "1.Cargar Profesor" << endl;
        cout << "2.Cargar Alumno" << endl;
        cout << "3.Profesor y mejor alumno" << endl;
        cout << "0.Salir" << endl;
        cout << "Ingrese una opcion:" << endl;
        cin >> opcion;
        cout << endl << endl;
        switch(opcion)
        {
        case 1:
            //cargar profesor
            {
            Profesor profesor;
            curso.setCodigo(); ///revisar
            profesor.cargar();
            cursos[curso.getCodigo()-1].setProfesor(profesor);
            }
            break;
        case 2:
            {
            Alumno alumno;
            curso.setCodigo();
            alumno.cargar();
            cursos[curso.getCodigo()-1].addAlumnos(alumno);
            }
            //cargar alumno
            break;
        case 3:
           for(int i=0; i<5; i++){
                cout << "Profesor " << cursos[i].getProfesor().getNombre() << " alumno con mejor nota " << cursos[i].getMejorAlumno().getNombre() << endl;
            }
            break;
        case 0:
            return 0;
          break;

        default:
            cout << "Opcion incorrecta" << endl;
            break;
        }
    } while (opcion != 0);
}
