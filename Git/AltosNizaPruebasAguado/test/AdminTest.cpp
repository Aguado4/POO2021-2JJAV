//
// Created by lufe0 on 3/11/2021.
//

#include "gtest/gtest.h"
#include "../src/Model/Admin.h"

TEST(AdminTest, calcularRecaudo) {
    //Arrange section
    Admin adminPrueba;

    //Act section
    float recaudado = adminPrueba.recaudarAdmin();

    //Assert section
    EXPECT_EQ(22610, recaudado);
}

TEST (AdminTest, verParqueaderos){
    //Arrange section
    Admin adminPrueba;

    //Act section
    int numParqueaderos = adminPrueba.mostrarPropParqueadero();

    //Assert section
    EXPECT_EQ(4, numParqueaderos);
}

TEST (AdminTest, cambiarProp){
    //Arrange section
    Admin adminPrueba;
    //Act section
    string result = adminPrueba.cambiarTipoPropietario(2, 2, "jose");

    //Assert section
    EXPECT_EQ("1. Descuento el 0,05 en la mensualidad del gimnasio.", result);
}

TEST (AdminTest, errorBeneficios){
    Admin adminPrueba;

    string result = adminPrueba.mostrarBeneficios(1);

    EXPECT_EQ("Funcion realizada con exito", result);
}

TEST (AdminTest, errorCampioProp){
    Admin adminPrueba;

    string result = adminPrueba.cambiarTipoPropietario(100, 100, "juan");

    EXPECT_EQ("Funcion realizada con exito", result);//en este caso va a fallar porque no hay id 100
}