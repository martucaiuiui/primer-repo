#include "alumno.h"
#include <string>
using namespace std;


alumno::alumno(const std::string & nombre, const std::string & id, const int & edad, const std::string & carrera)
{
     this->nombre = nombre;
        this->edad = edad;
        this->id = id;
        this->carrera = carrera;

}

std::string alumno::getNombre() const {
    return nombre;
}
std::string alumno::getId() const {
    return id;
}
int alumno::getEdad() const {
    return edad;
}
std::string alumno::getCarrera() const {
    return carrera;
}