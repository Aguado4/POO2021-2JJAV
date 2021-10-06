#ifndef FUNDADOR_H
#define FUNDADOR_H

#include <iostream>
#include "Propietario.h"

using std::cin;
using std::cout;
using std::string;

class Fundador:public Propietario 
{ 
protected:
    float descuentoTienda = 0.99;
    bool gratisSalonSocial = true;

public:
    void mostrarBeneficios() override;
    virtual ~Fundador();
};

#endif //FUNDADOR_H