#ifndef LISTAALUMNOS_H
#define LISTAALUMNOS_H

#include <iostream>
#include <string>
#include "alumno.h"
using namespace std;

    struct Nodo 
    {
        alumno* alumno;
        Nodo* siguiente;
    };

class ListaAlumnos
{
private:
    Nodo* cabeza;
    
public:
   ListaAlumnos();
   void AgregarAlumnos(string nombre, string id, int edad, string carrera);
   alumno* BuscarAlumnoPorID(string id);
   alumno* BuscarAlumnoPorNombre(string nombre);
   void MostrarLista();

};
#endif
