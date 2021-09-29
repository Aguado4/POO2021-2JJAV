//
// Created by lufe0 on 7/05/2021.
//

#include "Mayor13.h"

float Mayor13::jugar(float gonzosApostar) {
    int opcion;
    float gonzosResultado;
    srand(time(NULL));
    // para calcular numero aleatorio variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    numeroJugador = 1 + rand() % 13;// numeros de 1 a 13
    cout << "Su numero es " << numeroJugador << ", ingrese 1 para seguir jugando o 2 para retirarse :";
    cin >> opcion;
    if (opcion == 2){
        return 0.5 * gonzosApostar;//se retira y pierde la mitad de lo apostado
    }
    numeroCasino = 1 + rand() % 13;// numeros de 1 a 13
    cout << "El numero del casino es " << numeroCasino << "\n";
    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}


float Mayor13::calcularResultado(float gonzosApostar) {
    if (numeroJugador <= numeroCasino){
        return 0;
    }else{
        return 2 * gonzosApostar;
    }
}

Mayor13::~Mayor13() {

}
