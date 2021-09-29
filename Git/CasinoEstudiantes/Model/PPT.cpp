//
// Created by Aguado on 28/09/2021.
//

#include "PPT.h"

float PPT::jugar(float gonzosApostar) {
    float gonzosResultado;
    srand(time(NULL));
    // para calcular numero aleatorio variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    cout << "ELige alguna de las siguientes opciones \n1.) Piedra\n2.)Papel\n3.)Tijera" << endl;
    cin >> numeroJugador;
    numeroCasino = 1 + rand() % 3;// numeros de 1 a 3
    cout << "Tu eleccion es: "<< numeroJugador << endl;
    cout << "La eleccion del casino es: "<< numeroCasino << endl;
    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}

float PPT::calcularResultado(float gonzosApostar) {
    if(numeroJugador == numeroCasino){// Si empatan, es decir, sacan la misma opcion, devuelve los gonzos, no gana ni pierde
        return gonzosApostar;
    // casos en que pierde
    }else if(numeroJugador == 1 && numeroCasino == 2){//piedra v papel
        return 0;
    }else if(numeroJugador == 2 && numeroCasino == 3){//papel v tijera
        return 0;
    }else if(numeroJugador == 3 && numeroCasino == 1){//tijera v piedra
        return 0;
    // casos en que gana
    }else if(numeroJugador == 1 && numeroCasino == 3){//piedra v tijera
        return 2 * gonzosApostar;
    }else if(numeroJugador == 2 && numeroCasino == 1){//papel v piedra
        return 2 * gonzosApostar;
    }else if(numeroJugador == 1 && numeroCasino == 3){//tijera v papel
        return 2 * gonzosApostar;
    }else{
        cout << "Usted ha escogido un numero invalido\n";
        return gonzosApostar;
    }
}

PPT::~PPT() {

}