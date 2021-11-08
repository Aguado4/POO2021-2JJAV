//
// Created by lufe0 on 3/11/2021.
//

#include "gtest/gtest.h"
#include "../src/Model/Fundador.h"

TEST(PropietarioTest, calcularAdministracion) {
    //Arrange section
    Propiedad propiedadPrueba(1,  10, 200,  false);
    Fundador fundador("CAMILO", 1,propiedadPrueba);
    int baseAdministracion = 50000;

    //Act section
    int costoAdministracion= fundador.calcularPagoAdmin(baseAdministracion);

    //Assert section
    // Se espera que para un propietario fundador que vive en un piso 10 con un apto de 200mts el cobro de la administración sea de 70005
    EXPECT_EQ(70005,costoAdministracion);
}

TEST (PropietarioTest, mostrarBeneficios){
    //Arrange section
    Propiedad propiedadPrueba(1,  10, 200,  false);
    Fundador fundPrueba ("CAMILO", 1, propiedadPrueba);

    //Act section
    string beneficiosFund = fundPrueba.mostrarBeneficios();

    //Assert section
    // se espera que retorne los beneficios del fundador al pie de la letra
    EXPECT_EQ("1. Derecho a usar el salón social de manera gratuita. 2. Descuento del 1 para la compra de productos en la tienda del edificio.", beneficiosFund);
}