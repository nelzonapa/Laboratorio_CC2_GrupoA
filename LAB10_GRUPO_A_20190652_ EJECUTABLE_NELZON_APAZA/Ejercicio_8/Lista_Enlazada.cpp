/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio 10 - GRUPO A
*/
/*
EJERCICIO 8: Desarrolle un algoritmo de ordenamiento que permita ordenar los 
elementos de forma descendente (EJERCICIO 8). 
Se debe poder simular el ingreso de 10 mil elementos de forma aleatoria y 
ordenarlos en el menor tiempo posible ( < 2 seg)
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
        cout<<"1. Agregar al Final\n2. Mostrar\n3. Eliminar de acuerdo a una posicion\n4. Ordenar de forma DESCENDENTE\n5. Salir\nOpcion a elegir:\n";
        cin>>opcion;
        if ((opcion<1)||(opcion>5))
        {
            cout<<"Dato invalido!! Presione cualquier tecla para continuar..."<<endl;
            system("pause");
        }
    
    }
    while((opcion<1)||(opcion>5));
    return opcion;
}

int main()
{
    int opcion, numero, posicion;
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
                    cout<<Temp->get_numero()<<" ";//imprimimos
                    //avanzamos al siguiente
                    Temp=Temp->get_enlace();
                }
                cout<<endl;
                cout<<"El numero de nodos ingresados es: "<<Cadena->get_numero_nodos()<<endl;
                break;
            case 3:
                cout<<"------ELIMINAR DE ACUERDO A UNA POSICION------"<<endl;
                Aux=new Nodo();
                cout<<"Ingrese la posicion donde del nodo"<<endl;
                cin>>posicion;
                Cadena->Eliminar_posicion(posicion);

                cout<<"Numero Eliminado exitosamente..."<<endl;
                break;
            case 4:
                cout<<"------ORDENAR DE FORMA DESCENDENTE------"<<endl;
                Cadena->Ordenar_Descendente();
                cout<<"Lista ordenada exitosamente..."<<endl;
                break;
            case 5:
                cout<<"Fin del programa"<<endl;
                break;
            default:
                cout<<"Error: dato incorrecto";
                break;
        }
        system("pause");
    } while (opcion!=5);
    return 0;
}