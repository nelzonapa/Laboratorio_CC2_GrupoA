/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio 10 - GRUPO A
*/
/*
EJERCICIO 2: Con la implementación de la lista enlazada anterior, desarrolle 
una función que permita ingresar los elementos al inicio de todos los demás 
elementos. Tendrá que modificar el comportamiento del puntero que tiene referencia 
al primer elemento para que sea redireccionado al nuevo elemento por ingresar.

DATOS:
- Cosas nuevas:
    - función que permita ingresar elementos al inicio de todos los elementos de la lista
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
        cout<<"\tMenu"<<endl;
        cout<<"1. Agregar al Final\n2. Mostrar\n3. Agregar al Inicio\n4. Salir\nOpcion a elegir:\n";
        cin>>opcion;
        if ((opcion<1)||(opcion>4))
        {
            cout<<"Dato invalido!! Presione cualquier tecla para continuar..."<<endl;
            system("pause");
        }
    
    }
    while((opcion<1)||(opcion>4));
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
                cout<<"------AGREGAR AL FINAL------"<<endl;
                Aux=new Nodo();
                cout<<"Ingrese el numero nuevo: "<<endl;
                cin>>numero;
                Aux->set_numero(numero);
                //una vez establecido el dato en el nodo, pasamos a agregar un nodo nuevo
                Cadena->Agregar_final(Aux);//agregamos el nodo Aux
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
                cout<<"------AGREGAR AL INICIO------"<<endl;
                Aux=new Nodo();
                cout<<"Ingrese el numero nuevo: "<<endl;
                cin>>numero;
                Aux->set_numero(numero);
                //una vez establecido el dato en el nodo, pasamos a agregar un nodo nuevo
                Cadena->Agregar_inicio(Aux);//agregamos el nodo Aux
                cout<<"Numero almacenado exitosamente..."<<endl;
                break;
            case 4:
                cout<<"Fin del programa"<<endl;
                break;
            default:
                cout<<"Error: dato incorrecto";
                break;
        }
        system("pause");
    } while (opcion!=4);
    return 0;
}