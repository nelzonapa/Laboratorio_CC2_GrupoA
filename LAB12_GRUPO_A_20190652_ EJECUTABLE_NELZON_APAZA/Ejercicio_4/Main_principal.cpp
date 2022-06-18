/*
ALUMNO: Nelzon Jorge Apaza Apaza
CUI: 20190652
CURSO: CC2 Laboratorio - GA - Laboratorio 12

EJERCICIO 4. Escribir un programa que permita comparar las edades de diferentes elementos.
Debe utilizar el formato de colas en clases. Se debe definir· inicialmente el
número de elementos y valores de cada cola (pudiendo ser de diferentes tamaños
ej. 2-3). Se evaluará el resultado de la comparación de los primeros elementos de
las colas, realizada en un número de iteraciones 'n', en cada iteración se debe
realizar el procedimiento de inserción y eliminación de elementos (rotando los
elementos definidos inicialmente)

PASOS:
1. Creamos 2 objetos:
2. Se debe de llenar ambos objetos de clase COLA. De acuerdo a una longitud
(no necesariamente del mismo tamaño)
3. Cada iteración i, comparará ambos elementos de ambas colas
4. Despues de la iteración, estos elementos deben ser ordenados por inserción
5. Finalmente se deben eliminar

*/
#include "iostream"
#include "stdlib.h"
#include "time.h"//para numeros aleatorios
#include "vector"//Para inserción

#include "Nodo.h"
#include "Nodo.cpp"
#include "Aux_punt.h"
#include "Aux_punt.cpp"
#include "Cola.h"
#include "Cola.cpp"
using namespace std;

void comparar(COLA,COLA);

int main() {
    srand(time(NULL));//para rand()
    int dato;
    COLA edad_hombres;
    COLA edad_mujeres;
    //LONGITUD DEFINIDA DE HOMBRES=3
    for (int i=0; i < 3; i++)
    {
        dato=1+rand()%(30);//dará numeros entre 1 y 30
        edad_hombres.agregar_elem(dato);
    }
    //LONGITUD DEFINIDA DE MUJERES=2
    for (int i=0; i < 3; i++)
    {
        dato=1+rand()%(30);//dará numeros entre 1 y 30
        edad_mujeres.agregar_elem(dato);
    }

    //mostrando los DATOS ALMACENADOS:
    cout<<"\n-----Cola de HOMBRES-----"<<endl;
    edad_hombres.mostrar_elem();
    cout<<"\n-----Cola de MUJERES-----"<<endl;
    edad_mujeres.mostrar_elem();
    cout<<endl;

    //COMPARAREMOS
    comparar(edad_hombres,edad_mujeres);
    //ELIMINAMOS OBJETOS
    system("pause");
    cout<<"Eliminando objetos..."<<endl;
    edad_hombres.~COLA();
    edad_mujeres.~COLA();
    return 0;
}

void comparar(COLA hombres,COLA mujeres){//Compararemos ambas colas y sus elementos en orden
    for (int i = 1; i <= 3; i++)
    {
        //ordenamos e imprimimos
        if(i==1 && (hombres.get_dato(i)>mujeres.get_dato(i))){
            cout<<"Iteracion "<<i<<" ---> "<<hombres.get_dato(i)<<" (varones) es mayor que "<<mujeres.get_dato(i)<<" (mujeres)";
        }
        else
        {
            cout<<"Iteracion "<<i<<" ---> "<<hombres.get_dato(i)<<" (varones) es menor que "<<mujeres.get_dato(i)<<" (mujeres)";
        }
        cout<<endl;
        
    }
    
}