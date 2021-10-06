#ifndef PROPIEDAD_H
#define PROPIEDAD_H

#include <iostream>
#include <string>

class Propiedad 
{
private:
    int piso;
    int numero;
    float area;
    bool tieneParqueadero;

public:
    Propiedad(int piso, int numero, float area, bool tieneParqueadero);
    float calcularAdministracion (float valorBaseAdmin);

#endif //PROPIEDAD_H