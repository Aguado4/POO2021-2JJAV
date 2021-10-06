#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <iostream>
#include <string>
#include "Propiedad.h"

using std::cin;
using std::cout;
using std::string;

class Propietario
{
protected: 
    string nombre;
    int id;
    Propiedad propiedad;

public:
    virtual ~Propietario();
    virtual mostrarBeneficios();
 
};

#endif //PROPIETARIO_H
