//
// Created by Aguado on 28/09/2021.
//

#ifndef CASINO_PPT_H
#define CASINO_PPT_H

#include "Juego.h"
#include<cstdlib>
#include<ctime>

class PPT:public Juego {

protected:
    float calcularResultado(float gonzosApostar) override;
public:
    float jugar(float gonzosApostar) override;
    virtual ~PPT();
};


#endif //CASINO_PPT_H