#include "libs/List.h"


#include <iostream>

using namespace std;

void printMenu();

int main() {
    
    printMenu();

    int option = 0;


    do {
        cout << "Ingrese una opción: ";
        cin >> option;

       switch (option)
        {
            case 1:
                cout << "Opción 1" << endl;
                break;
            case 2:
                cout << "Opción 2" << endl;
                break;
            case 3:
                cout << "Opción 3" << endl;
                break;
            case 4:
                cout << "Opción 4" << endl;
                break;
            case 5:
                cout << "Opción 5" << endl;
                break;
            case 0:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción inválida" << endl;
                break;
        } 

    } while (option != 0);
    
    return 0;
}

void printMenu() {
    cout << "1. Generar lista con número aleatorios" << endl;
    cout << "2. Generar lista de apuntadores a la primera lista" << endl;
    cout << "3. Ordenar lista de apuntadores" << endl;
    cout << "4. Imprimir lista original" << endl;
    cout << "5. Imprimir lista de apuntadores" << endl;
    cout << "0. Salir" << endl;
}
