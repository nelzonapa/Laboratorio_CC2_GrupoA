/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio 11 - GRUPO A
*/
/*
EJERCICIO 2. Sobre el ejercicio anterior, adecue el programa para eliminar elementos de una
Pila.

PASOS:
1. Se tiene 2 tipos de clases(Nodo-Lista) para que funcione la pila(Lista).
2. Se interactuará mediante un menú de opciones
3. El programa preguntará cuántas veces se quiere eliminar el útlimo elemento por ser pila
4. Todos los archivos trabajan en conjunto. Para más detalle de todo
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
        cout<<"1. Agregar\n2. Mostrar\n3. Eliminar ultimo elemento\n4. Salir\nOpcion a elegir:\n";
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
                cout<<"El numero de nodos ingresados es: "<<Cadena->get_numero_nodos()<<endl;
                break;
            case 3:
                cout<<"------ELIMINAR ULTIMOS ELEMENTOS------"<<endl;
                int limite;
                cout<<"Cuantos elementos desea eliminar"<<endl;
                cin>>limite;
                for (int i = 0; i < limite; i++)
                {
                    Cadena->Eliminar_ultimo();
                }
                if (limite==1)
                    cout<<"Numero eliminado exitosamente..."<<endl;
                else
                    cout<<"Numeros eliminados exitosamente..."<<endl;
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