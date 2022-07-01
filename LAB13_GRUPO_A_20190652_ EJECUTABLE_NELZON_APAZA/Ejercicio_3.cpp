/*
DATOS:
- ALUMNO: Nelzon Jorge Apaza Apaza
- CUI: 20190652
- CURSO: CC2 Laboratorio - GA - Laboratorio 13
*/
#include "iostream"
#include "stdlib.h"
#include "string.h"
using namespace std;
/*
Ejercicio 3. Implemente un programa que maneje un arreglo de estructuras que solicite el
nombre, edad y talla de 10 jugadores, debe mostrar por pantalla los que son
menores de 20 años y tienen una talla mayor a 1,70 mts de altura.

Pasos:
1. Datos con que trabajar
    - nombre
    - edad
    - talla
10 jugadores
2. Mostrar a los jugadores menores de 20 años
3. Mostrar a los jugadores con talla mayor a 1,70mts.
*/

struct JUGADOR
{
    string nombre;
    int edad;
    float talla;
    JUGADOR *siguiente;
};

void agregar_jugador(JUGADOR *&,string,int,float);
void mostrar_menores(JUGADOR *&, int);
void mostrar_talla(JUGADOR *&,int);

int main(){
    string nombre;
    int edad;
    float talla;
    int cantidad_jugadores=10;
    JUGADOR *jugadores=NULL;
    //agregar los 10 jugadores
    for (size_t i = 0; i < cantidad_jugadores; i++)
    {
        cout<<"------------- Jugador "<<i+1<<" --------------"<<endl;
        cout<<"Ingrese el nombre del jugador: "<<endl;
        cin>>nombre;
        cout<<"Ingrese la edad del jugador: "<<endl;
        cin>>edad;
        cout<<"Ingrese su talla(mts): "<<endl;
        cin>>talla;
        agregar_jugador(jugadores,nombre,edad,talla);
    }
    mostrar_menores(jugadores,cantidad_jugadores);
    mostrar_talla(jugadores,cantidad_jugadores);

    return 0;
}

void agregar_jugador(JUGADOR *& nodo,string _nombre,int _edad,float _talla){//para agregar nuevos jugadores
    JUGADOR *nuevo_nodo=new JUGADOR();
    nuevo_nodo->nombre=_nombre;
    nuevo_nodo->edad=_edad;
    nuevo_nodo->talla=_talla;
    nuevo_nodo->siguiente=nodo;
    nodo=nuevo_nodo;
}

void mostrar_menores(JUGADOR *& nodo, int cantidad){
    cout<<endl<<"---------- Jugadores menores a 20 anios ---------"<<endl;
    JUGADOR *puntero_nodo=new JUGADOR();
    puntero_nodo=nodo;
    for (int i = 0; i < cantidad; i++)
    {
        if ((puntero_nodo->edad)<20)//menores de 20 años
        {
            cout<<puntero_nodo->nombre<<" --> Edad: "<<puntero_nodo->edad<<" anios"<<endl;
            puntero_nodo=puntero_nodo->siguiente;
        }
        else{
            puntero_nodo=puntero_nodo->siguiente;
        }
        
    }
    
}

void mostrar_talla(JUGADOR *& nodo, int cantidad){
    cout<<endl<<"---------- Jugadores con tallas mayores a 1.7 metros ---------"<<endl;
    JUGADOR *puntero_nodo=new JUGADOR();
    puntero_nodo=nodo;
    for (int i = 0; i < cantidad; i++)
    {
        if ((puntero_nodo->talla)>1.7)//talla mayor a 1.7 mts
        {
            cout<<puntero_nodo->nombre<<" --> Talla: "<<puntero_nodo->talla<<" mts"<<endl;
            puntero_nodo=puntero_nodo->siguiente;
        }
        else{
            puntero_nodo=puntero_nodo->siguiente;
        }
        
    }
}