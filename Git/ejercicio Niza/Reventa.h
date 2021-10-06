#ifndef REVENTA_H
#define REVENTA_H

#include <iostream>
#include "Propietario.h"

using std::cin;
using std::cout;
using std::string;

class Reventa:public Propietario
{
protected:
    float descuentoGym = 0.95;
public:
    void mostrarBeneficios() override;
    virtual ~Reventa();
};

#endif //REVENTA_H