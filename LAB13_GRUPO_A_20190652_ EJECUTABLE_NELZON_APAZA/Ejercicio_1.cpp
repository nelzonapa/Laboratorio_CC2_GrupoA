/*
DATOS:
- ALUMNO: Nelzon Jorge Apaza Apaza
- CUI: 20190652
- CURSO: CC2 Laboratorio - GA - Laboratorio 13
*/
/*
1. Implementar un programa que maneje un arreglo de estructuras para almacenar
los nombres y las fechas de cumpleaños de sus n compañeros. Y debe mostrarse
por pantalla quienes cumplen años en este mes.

PASOS:
1. almacena nombres y fechas de cumpleaños de n compañeros.
1.1 define la cantidad de compañeros(int main)
1.2 creamos el struct
1.3 arreglo de fechas

2. obtener fecha del sistema 
*/

#include "iostream"
#include "stdlib.h"
#include "time.h"
#include "string.h"

using namespace std;
/*---------------------------------------------------------------*/
//en este caso creamos 2 structs
struct NOMBRES{
    string nombre;//dato
    NOMBRES *siguiente;//puntero
};

void agregar_nombre(NOMBRES *&,string);
void mostrar_nombres(NOMBRES *&, int );

struct FECHAS{
    int dia;
    int mes;
    int anio;//dato
    FECHAS *siguiente;//puntero
};

void agregar_Fecha(FECHAS *&,int, int, int);
void mostrar_Fecha(FECHAS *&,int);

void mostrar_cumpleanios(FECHAS *&, NOMBRES *&,int);

/*---------------------------------------------------------------*/
int main(){
    NOMBRES *alumnos=NULL;
    int cantidad_alumnos;
    string nombre;
    cout<<"Ingrese la cantidad de alumnos que tendra la lista: "<<endl;
    cin>>cantidad_alumnos;
    for (int i = 0; i < cantidad_alumnos; i++)
    {
        cout<<"Ingrese el nombre del alumno: "<<i+1<<endl;
        cin>>nombre;
        agregar_nombre(alumnos,nombre);
    }
    
    cout<<"---------Mostramos nombres: ---------"<<endl;
    mostrar_nombres(alumnos,cantidad_alumnos);
    cout<<endl;
    system("pause");

    FECHAS *cumples=NULL;//creamos un puntero
    int dia, mes, anio;

    cout<<"Ahora ingresara la fecha de cumpleanios de cada alumno: "<<endl;
    for (int i = 0; i < cantidad_alumnos; i++)
    {   
        cout<<"-----Alumno "<<i+1<<" ------"<<endl;
        cout<<"Ingrese dia: "<<endl;
        cin>>dia;
        cout<<"Ingrese mes: "<<endl;
        cin>>mes;
        cout<<"Ingrese anio: "<<endl;
        cin>>anio;
        agregar_Fecha(cumples,dia,mes,anio);
    }

    cout<<"-------- Mostrando fechas: ---------"<<endl;
    mostrar_Fecha(cumples, cantidad_alumnos);
    
    cout<<endl<<"-------- Mostrando si la persona cumplio o no anios: ---------"<<endl;
    mostrar_cumpleanios(cumples,alumnos,cantidad_alumnos);
    return 0;
}

/*---------------------------------------------------------------*/

void agregar_nombre(NOMBRES *&pila,string _nombre){
    //paso 1
    NOMBRES *nuevo_nodo=new NOMBRES();
    //paso 2
    nuevo_nodo->nombre=_nombre;
    //paso 3
    nuevo_nodo->siguiente=pila;
    //paso 4
    pila=nuevo_nodo;
}

void mostrar_nombres(NOMBRES *&pila, int cantidad){
    NOMBRES *avanzar=new NOMBRES();
    avanzar=pila;
    for (int i = 0; i < cantidad; i++)
    {
        cout<<avanzar->nombre<<" --- ";
        avanzar=avanzar->siguiente;
    }
    
}

//------------------PARA STRUCT DE FECHAS---------------------

void agregar_Fecha(FECHAS *&pila,int _dia, int _mes, int _anio){
    FECHAS *nuevo_nodo=new FECHAS();
    nuevo_nodo->dia=_dia;
    nuevo_nodo->mes=_mes;
    nuevo_nodo->anio=_anio;
    nuevo_nodo->siguiente=pila;
    pila=nuevo_nodo;
}
void mostrar_Fecha(FECHAS *&pila,int cantidad){
    FECHAS *avanzar=new FECHAS();
    avanzar=pila;
    for (int i = 0; i < cantidad; i++)
    {
        cout<<avanzar->dia<<"/"<<avanzar->mes<<"/"<<avanzar->anio<<" --- ";
        avanzar=avanzar->siguiente;
    }
}

void mostrar_cumpleanios(FECHAS *& _cumples, NOMBRES *& _nombres,int cantidad){
    FECHAS *puntero_fecha=new FECHAS();
    puntero_fecha=_cumples;
    NOMBRES *puntero_nombre=new NOMBRES();
    puntero_nombre=_nombres;
    /*El ejercicio nos manda a comparar el mes actual (Junio=06) con el de la persona*/
    for (int i = 0; i < cantidad; i++)
    {
        if ((puntero_fecha->mes)<06)
        {
            cout<<puntero_nombre->nombre<<" --> Ya cumplio un anio mas"<<endl;
            puntero_nombre=puntero_nombre->siguiente;//avanzar en la lista
            puntero_fecha=puntero_fecha->siguiente;
        }
        else
        {
            cout<<puntero_nombre->nombre<<"Aun no cumple un anio mas"<<endl;
            puntero_nombre=puntero_nombre->siguiente;//avanzar en la lista
            puntero_fecha=puntero_fecha->siguiente;
        }
        
    }
    
}