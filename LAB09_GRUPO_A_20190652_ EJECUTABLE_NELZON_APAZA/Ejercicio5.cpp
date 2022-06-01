/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio 09 - GRUPO A
*/
/*
EJERCICIO 5. Realizar la implementación de un programa que haga uso de plantillas, para elaborar una 
función que permita ordenar ascendentemente y descendentemente los elementos de un arreglo 
de valores enteros y otro arreglo de valores flotantes. Las funciones deben recibir como parámetros, 
un puntero al tipo de elemento dado, y dos enteros que indican los índices del primero y último elemento.
int ArrayEntero [9] = {5,7,2,8,6,1,3,4,9};
float ArrayFloat [5] = {10.1, 8.4, 3.6, 4.4, 11.2};

PASOS:
1. creamos plantillas
2. crear UNA función que ordene de manera ascendente y descendente.
    parámetro:
        - un puntero
        - 2 enteros(indices del primero y último elemento)
3. Probar en main con:
int ArrayEntero [5] = {5,7,2,8,6,1,3,4,9};
float ArrayFloat [5] = {10.1, 8.4, 3.6, 4.4, 11.2};

ANOTE: Método Quicksort: https://www.programiz.com/dsa/quick-sort
*/
#include "iostream"
#include "stdlib.h"
using namespace std;

//PLANTILLAS Y PROTOTIPO DE FUNCIONES:
template <class Dato_General>
void Ordenar_Ascen_Descen(Dato_General *,int, int);//parámetros: Puntero y 2 enteros

int main(){
    int ArrayEntero[9]={5,7,2,8,6,1,3,4,9};
    int *Puntero_array_1=new int[9];//array dinámico con puntero
    //llenamos el vector dinamico
    for (int i = 0; i < 9; i++)
    {
        Puntero_array_1[i]=ArrayEntero[i];
    }
    
    cout<<"------------- Ordenando ARRAY 1: ----------------"<<endl;
    Ordenar_Ascen_Descen(Puntero_array_1,0,8);

    //PARTE FLOAT
    float ArrayFloat [5] = {10.1, 8.4, 3.6, 4.4, 11.2};
    float *Puntero_array_2=new float[5];
    //llenamos el vector dinámico
    for (int i = 0; i < 5; i++)
    {
        Puntero_array_2[i]=ArrayFloat[i];
    }

    cout<<endl<<"------------- Ordenando ARRAY 2: -----------------"<<endl;
    Ordenar_Ascen_Descen(Puntero_array_2,0,4);
    
    return 0;
}

template <class Dato_General>
void Ordenar_Ascen_Descen(Dato_General *puntero_array, int inicio, int fin){
    int longitud=fin;//para darnos la longitud
    Dato_General auxiliar;//almacenará datos momentaneamente para el flujo de datos

    //ORDENAR LOS NÚMEROS ASCENDENTEMENTE
    //Uso de 2 for
    for (int i = 0; i <= longitud; i++)
    {
        for (int j = 0; j < longitud; j++)
        {
            if (puntero_array[j]>puntero_array[j+1])//filtramos el mayor mientras se avanza
            {
                //cambiamos de ubicación a los datos
                auxiliar=puntero_array[j];
                puntero_array[j]=puntero_array[j+1];
                puntero_array[j+1]=auxiliar;
            }
            
        }
        
    }

    //Imprimimos primera parte ASCENDENTE:
    cout<<endl<<"Array en forma ascendente: "<<endl;
    for (int i = 0; i <= longitud; i++)
    {
        cout<<" "<<puntero_array[i];
        
    }
    cout<<endl;

    Dato_General auxiliar2;
    //ORDENAR LOS NÚMEROS DESCENDENTEMENTE
    //Uso de 2 for
    for (int i = 0; i <= longitud; i++)
    {
        for (int j = 0; j < longitud; j++)
        {
            if (puntero_array[j]<puntero_array[j+1])//filtramos el mayor mientras se avanza
            {
                //cambiamos de ubicación a los datos
                auxiliar2=puntero_array[j];
                puntero_array[j]=puntero_array[j+1];
                puntero_array[j+1]=auxiliar2;
            }
        }
    }
    

    //Imprimimos segunda parte DESCENDENTE:
    cout<<endl<<"Array en forma descendente: "<<endl;
    for (int i = 0; i <= longitud; i++)
    {
        cout<<" "<<puntero_array[i];
        
    }
    cout<<endl;
    
}