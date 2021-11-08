#include "Admin.h"

Admin::Admin(){
    this->tarifaAdmin = 100;
    crearDummyData();
}

void Admin::crearDummyData(){
    Propiedad propUno(1, 1, 120, true);
    // Fundador* x = new Fundador("juan", 1, propUno);
    Fundador * x = new Fundador("nombre", 1, propUno);
    this->propietarios.insert({1, x});

    Propiedad propDos(2, 2, 160, false);
    Fundador* x1 = new Fundador("jose", 2, propDos);
    this->propietarios.insert({2, x1});

    Propiedad propTres(3, 1, 100, true);
    Reventa* x2 = new Reventa("juana", 3, propTres);
    this->propietarios.insert({3, x2});

    Propiedad propCuatro(4, 4, 1120, true);
    Fundador* x3 = new Fundador("juanito", 4, propCuatro);
    this->propietarios.insert({4, x3});

    Propiedad propCinco(6, 2, 120, false);
    Reventa* x4 = new Reventa("juance", 5, propCinco);
    this->propietarios.insert({5, x4});

    Propiedad propSeis(6, 1, 10, true);
    Reventa* x5 = new Reventa("juanpa", 6, propSeis);
    this->propietarios.insert({6, x5});
}

float Admin::recaudarAdmin(){
    float recaudo = 0;
    int i;
    for(i = 1; i < propietarios.size() + 1; i++){
        recaudo += this->propietarios[i]->calcularPagoAdmin(tarifaAdmin);
    }
    cout << recaudo << endl;
    return recaudo;
}

string Admin::mostrarBeneficios(int id){
    if (verExistePropietario(id) == true) {
        this->propietarios[id]->mostrarBeneficios();
        return "Funcion realizada con exito";
    }else{
        throw std::domain_error("No existe un propietario con esta id\n");
    }
}

int Admin::mostrarPropParqueadero(){
    int i, p = 0;
    for(i = 1; i < propietarios.size() + 1; i++){
        if(this->propietarios[i]->getPropiedad().getParqueadero()){
            cout << this->propietarios[i]->getNombre() << endl;
            p++;
        }
    }
    return p;
}

string Admin::cambiarTipoPropietario(int id, int idNuevoProp, string nuevoProp){
    if (verExistePropietario(id) == true){
        Propiedad propiedad = this->propietarios[id]->getPropiedad();
        Propietario *pFundador = this->propietarios[id];
        delete (pFundador); // Se elimina el propietario fundador
        this->propietarios.erase(id); // Se elimina también del mapa

        Reventa *pReventa = new Reventa(nuevoProp, idNuevoProp, propiedad);
        this->propietarios.insert({id, pReventa});

        return pReventa->mostrarBeneficios(); //para comprobar que sea de reventa y no fundador
    }else{
        throw std::domain_error("No existe un propietario con esta id\n");
    }
}

bool Admin::verExistePropietario(int id){
    for(map<int, Propietario*>::iterator it = propietarios.begin(); it != propietarios.end(); it++){
        if(it->first == id){
            return true;
        }
    }
    return false;
}
