#include <iostream>
#include<string>
#include <windows.h> 
#include "funciones.h"
using namespace std;


int main() {
    char opcion;

    do {
        cout << endl;
        cout << "**************************************************\n";
    	cout << "*                                                *\n";
    	cout << "*        BIENVENIDO A LA TIENDA URBANA           *\n";
    	cout << "*                                                *\n";
    	cout << "*           << STAY FRESH, STAY COOL >>          *\n";
    	cout << "*                                                *\n";
    	cout << "**************************************************\n\n";
        cout << endl;
        cout << "***Seleccione una opcion***" << endl;
        cout << "A. Agregar contacto." << endl;
        cout << "B. Eliminar contacto." << endl;
        cout << "C. Mostrar listado general." << endl;
        cout << "D. Mostrar contactos por servidor de correo." << endl;
        cout << "E. Salir del programa." << endl;
        cin >> opcion;
        opcion = toupper(opcion);

        switch (opcion) {
            case 'A': agregarProducto();
            //case 'B': 
            //case 'C': 
            //case 'D': 
            case 'E': cout << "Saliendo del programa..." << endl; break;
            default: cout << "Opcion no valida." << endl;
        }

    } while (opcion != 'E');

    return 0;
}



