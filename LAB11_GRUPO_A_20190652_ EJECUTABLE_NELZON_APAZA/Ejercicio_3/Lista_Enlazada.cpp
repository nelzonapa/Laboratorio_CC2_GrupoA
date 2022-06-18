/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio 11 - GRUPO A
*/
/*
EJERCICIO 3. Implemente un algoritmo para buscar elementos de la Pila.

PASOS:
1. Se tiene 2 tipos de clases(Nodo-Lista) para que funcione la pila(Lista).
2. Se interactuará mediante un menú de opciones
3. Todos los archivos trabajan en conjunto. Para más detalle de todo
lo desarrollado debe dirigirse a estos
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
    cout<<"1. Agregar\n2. Mostrar\n3. Buscar\n4. Salir\nOpcion a elegir:\n";
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
    Nodo *Aux=NULL;//creamos un nodo llamado Aux
    Nodo *Temp=NULL;
    Lista *Cadena=new Lista();

    do
    {
        opcion=Menu();
        switch (opcion)
        {
        case 1:
            cout<<"------AGREGAR ELEMENTO------"<<endl;
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
            cout<<"------BUSCAR------"<<endl;
            cout<<"Ingrese el numero a buscar: "<<endl;
            cin>>numero;
            Temp=Cadena->Buscar(numero);//almacenamos el resultado en el Nodo Temporal
            if (Temp!=NULL)
            {
                cout<<"Su numero fue hallado en la lista: "<<Temp->get_numero()<<endl;
            }
            else{//si es NULL
                cout<<"Su numero no fue hallado"<<endl;
            }
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