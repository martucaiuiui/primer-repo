#include "ListaAlumnos.h"
#include "alumnos.cpp"
#include <iostream>

ListaAlumnos::ListaAlumnos{
    cabeza = nulltpr;
}


void ListaAlumnos::AgregarAlumnos(string nombre, string id, int edad, string carrera) {
    alumno* nuevo = new alumno(nombre, id, edad, carrera);
    Nodo* nodo = new Nodo(nuevo, cabeza);
    cabeza = nodo;
}

alumno* ListaAlumnos::BuscarAlumnoPorID(string id){
     Nodo* actual = cabeza;
      while (actual != nullptr) {
        if (actual->alumno->id == id) {
            return actual->alumno;
        }
        actual = actual->siguiente;
      }
}
alumno* ListaAlumnos::BuscarAlumnoPorNombre(string nombre) {
     Nodo* actual = cabeza;
      while (actual != nullptr) {
        if (actual->alumno->nombre == nombre) {
            return actual->alumno;
        }
        actual = actual->siguiente;
      }
}
void ListaAlumnos::MostrarLista() {
    Nodo* actual = cabeza;
    while (cabeza != nullptr) {
        std::cout<< actual->alumno->getNombre << endl;
        actual = actual->siguiente;
    }
}
