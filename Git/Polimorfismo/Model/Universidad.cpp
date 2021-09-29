#include "Universidad.h"

Universidad::Universidad()
{
    personas.push_back(new Colaborador("Luisa Rincon", "1112245", "lfrincon", "Profesora", 10000));
    personas.push_back(new Colaborador("Gerado Sarria", "222222", "lfrincon", "Profesora", 20000));
    personas.push_back(new Estudiante("Manuel zapata", "5555", "mzapata", 4.5, "Ing civil"));
}

void Universidad::calcularRecaudoParqueadero()
{
    float total = 0;
    for (vector<Persona*>::iterator pPersona = personas.begin();
         pPersona != personas.end(); pPersona++){
        total += (*pPersona)->pagarParqueadero();
    }
    // TODO Itera el vector de personas y suma el valor a pagar del parqueadero. Al final muestra el mensaje del valor a pagar.
    cout << "El total de ganancias por el parqueadero es de $" << total << "\n";
}

void Universidad::mostrarUsuarios()
{
    for (vector<Persona*>::iterator pPersona = personas.begin();
         pPersona != personas.end(); pPersona++)
    {
        (*pPersona)->mostrar();
    }
}
