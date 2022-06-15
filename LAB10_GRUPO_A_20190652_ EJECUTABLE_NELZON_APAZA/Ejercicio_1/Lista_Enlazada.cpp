/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio 10 - GRUPO A
*/
/*
EJERCICIO 1: Defina una lista enlazada que permita insertar elementos al final de todos 
los elementos que ya se hayan ingresado. Por el momento no es necesario preservar un 
orden, simplemente los elementos nuevos deben de ingresar como el último elemento.

PASOS:
1. Creamos 2 clases:
    1.1 Clase Nodo
    1.2 Clase Lista
2. Cada nodo tendrá sus atributos necesarios de acuedo a lo que deseamos hacer
*/

#include "iostream"
#include "stdlib.h"
using namespace std;

#include "Clase_Nodo.h"
#include "Def_class_Nodo.cpp"
#include "Clase_Lista.h"
#include "Def_class_Lista.cpp"

int Menu(){
    int opcion;
    do{
        cout<<"\tMenu"<<endl;//menu para elegir
        cout<<"1. Agregar\n2. Mostrar\n3. Salir\nOpcion a elegir:\n";
        cin>>opcion;
        if ((opcion<1)||(opcion>3))
        {
            cout<<"Dato invalido!! Presione cualquier tecla para continuar..."<<endl;
            system("pause");
        }
    
    }
    while((opcion<1)||(opcion>3));
    return opcion;
}

int main()
{
    int opcion, numero;
    Nodo *Aux=NULL;//creamos un puntero de clase Nodo llamado Aux
    Nodo *Temp=NULL;//creamos un puntero de clase Nodo llamado Temp
    Lista *Cadena=new Lista();//creamos un puntero de clase Lista llamado Cadena

    do
    {
        opcion=Menu();
        switch (opcion)
        {
            case 1:
                cout<<"------AGREGAR------"<<endl;
                Aux=new Nodo();
                cout<<"Ingrese el numero nuevo: "<<endl;
                cin>>numero;
                Aux->set_numero(numero);
                //una vez establecido el dato en el nodo, pasamos a agregar un nodo nuevo
                Cadena->Agregar(Aux);//agregamos el nodo Aux
                cout<<"Numero almacenado exitosamente..."<<endl;
                break;
            case 2:
                cout<<"------MOSTRAR------"<<endl;
                //usaremos el nodo temporal TEMP de tipo Nodo
                Temp=Cadena->get_cabeza();//le pasará la dirección del nodo que esta primero en la lista
                while (Temp!=NULL)
                {
                    cout<<Temp->get_numero()<<" ";//imrpimimos
                    //avanzamos al siguiente
                    Temp=Temp->get_enlace();
                }
                cout<<endl;
                break;
            case 3:
                cout<<"Fin del programa"<<endl;
                break;
            default:
                cout<<"Error: dato incorrecto";
                break;
        }
        system("pause");
    } while (opcion!=3);
    return 0;
}