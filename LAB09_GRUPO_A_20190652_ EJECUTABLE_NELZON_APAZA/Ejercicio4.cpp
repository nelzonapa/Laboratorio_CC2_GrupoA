/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio 09 - GRUPO A
*/
/*
EJERCICIO 4. Implemente un programa que haga uso de plantillas para determinar el mínimo 
y máximo valor de un arreglo de elementos dado. Debe de existir dos funciones,
la primera que retorne el mayor de los valores y la segunda que retorne el menor 
de los valores. Asimismo, en la función main, se hace una prueba de estas funciones, 
con arreglos de enteros y flotantes.
int ArrayEntero [5] = {10,7,2, 8, 6};
float ArrayFloat [5] = {12.1, 8.7, 5.6, 8.4, 1.2};

PASOS:
1. Crear plantillas
2. Determinar el mínimo y el máximo valor de un arreglo.
3. 2 FUNCIONES:
    3.1 Retornar el mayor de lo valores.
    3.2 Retornar el menor de los valores.
4. EN MAIN:
    probar las funciones con arreglos enteros y flotantes:
    > int ArrayEntero [5] = {10,7,2, 8, 6};
    > float ArrayFloat [5] = {12.1, 8.7, 5.6, 8.4, 1.2};
*/
#include "iostream"
#include "stdlib.h"
using namespace std;

//PASO 1
//PLATILLAS y PROTOTIPO DE FUNCIONES
template <class DATO_GEN_1>
DATO_GEN_1 Hallar_mayor(DATO_GEN_1[], int);
template <class DATO_GEN_2>
DATO_GEN_2 Hallar_menor(DATO_GEN_2[], int);

int main(){
    cout<<"\tCON EL TIPO INT"<<endl;
    int ArrayEntero[5] = {10,7,2,8,6};
    cout<<"El mayor numero del array 1 es: "<<Hallar_mayor(ArrayEntero,5)<<endl;
    cout<<"El menor numero del array 1 es: "<<Hallar_menor(ArrayEntero,5)<<endl;
    
    cout<<"\tCON EL TIPO FLOAT"<<endl;
    float ArrayFloat [5] = {12.1, 8.7, 5.6, 8.4, 1.2};
    cout<<"El mayor numero del array 2 es: "<<Hallar_mayor(ArrayFloat,5)<<endl;
    cout<<"El menor numero del array 2 es: "<<Hallar_menor(ArrayFloat,5)<<endl;


    return 0;
}

template <class DATO_GEN_1>
DATO_GEN_1 Hallar_mayor(DATO_GEN_1 array[], int longitud){
    DATO_GEN_1 aux_mayor;
    aux_mayor=array[0];
    for (int i = 0; i < longitud; i++)
    {
        if (aux_mayor<array[i])
        {
            aux_mayor=array[i];
        }
    }
    return aux_mayor;
}

template <class DATO_GEN_2>
DATO_GEN_2 Hallar_menor(DATO_GEN_2 array[], int longitud){
    DATO_GEN_2 aux_menor=array[0];
    for (int i = 0; i < longitud; i++)
    {
        if (aux_menor>array[i])
        {
            aux_menor=array[i];
        }
    }
    return aux_menor;
}