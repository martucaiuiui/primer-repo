#ifndef ALUMNO_H
#define ALUMNO_H
#include <iostream>
#include <string>
using namespace std;
class alumno
{
private:
    std::string nombre;
    std::string id;
    int edad;
    std::string carrera;
public:
    alumno(const std::string &nombre, const std::string &id , const int &edad, const std::string &carrera); 

    std::string getNombre();
    std::string getId();
    int getEdad();
    std::string getCarrera();
};
#endif
