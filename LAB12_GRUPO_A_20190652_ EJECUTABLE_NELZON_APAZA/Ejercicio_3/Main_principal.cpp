/*
ALUMNO: Nelzon Jorge Apaza Apaza
CUI: 20190652
CURSO: CC2 Laboratorio - GA - Laboratorio 12

EJERCICIO 3. Implemente un algoritmo para buscar elementos de la Cola.
*/
#include "iostream"
#include "Nodo.h"
#include "Nodo.cpp"
#include "Aux_punt.h"
#include "Aux_punt.cpp"
#include "Cola.h"
#include "Cola.cpp"
using namespace std;

int main() {
    int numero;//para buscar
    int opcion;//opción a elegir
    COLA colita;//objeto creado de clase COLA

    colita.Inicializar();

    cout<<"--------- COLAS --------";//menu de opciones
    cout <<"\n\t1. Agregar elemento";
    cout <<"\n\t2. Eliminar elemento";
    cout <<"\n\t3. Mostrar COLA";
    cout <<"\n\t4. Buscar elemento";
    cout <<"\n\t5. SALIR del programa";

    // Usamos switch para el menu
    while(opcion !=5)
    {
        cout<<"\nIngresa tu opcion:\t";
        cin>>opcion;
        switch(opcion){
            case 1:
                colita.agregar_elem();
                break;
            case 2:
                colita.eliminar_elem();
                break;
            case 3:
                colita.mostrar_elem();
                break;
            case 4:
                cout<<"Ingrese el elemento a buscar: "<<endl;
                cin>>numero;
                colita.buscar_elem(numero);
                break;
            case 5:
                cout<<"Saliendo del programa...";
                break;
            default:
                cout << "Opcion incorrecta...";
        }
    }
    return 0;
}