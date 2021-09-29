#include "View.h"

View::View()
{
}

void View::mostrarMenuReportes()
{
    int opcion = -1;
    do
    {

        cout << "Reportes\n"
             << endl;
        cout << "0. Volver \n";
        cout << "1. Reporte de productos con menos existencias que x numero\n";
        cout << "2. Ver cantidad de snacks y licores vendidos\n";
        cout << "3. Calcular ganancias obtenidas por la tienda\n";
        cout << "4. Valor a pagar por IVA a la DIAN\n"
        std::cout << "Digita el numero: ";
        std::cin >> opcion;

        // TODO completar
        switch (opcion)
        {
        case 1:
            laFarra.comprobarExistencias();
            break;
        case 2:
            laFarra.cantTipoVendidos();
            break;
        case 3:
            laFarra.gananciasTienda();
            break;
        case 4:
            laFarra.valorPagarIvaDian();
            break;
        }

    } while (opcion != 0);
}

void View::mostrarMenu()
{
    int opcion = -1;
    do
    {

        cout << "Menu Tienda\n";
        cout << "1. Agregar Productos \n";
        cout << "2. Mostrar Productos \n";
        cout << "3. Vender \n";
        cout << "4. Mostrar Ventas \n";
        cout << "5. Reportes \n";
        cout << "0. Salir \n";
        std::cout << "Digita el numero: ";
        std::cin >> opcion;

        switch (opcion)
        {

        case 1:
            laFarra.agregarProducto();
            break;
        case 2:
            laFarra.mostrarProductos();
            break;

        case 3:
            laFarra.vender();
            break;

        case 4:
            laFarra.mostrarFacturas();
            break;

        case 5:
            mostrarMenuReportes();
            break;
        }

    } while (opcion != 0);
}