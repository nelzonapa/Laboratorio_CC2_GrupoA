/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio - GRUPO A
*/
#include <iostream>
#include <stdlib.h>

/*
EJERCICIO 1. Sumar todos los enteros pares desde 2 hasta 100.

2+4+6+8+10....100 = SUMA

1. Creamos un auxiliar acumulador de la suma.
2. Implementamos el for.
3. Damos el resultado.

*/
using namespace std;

int main(){
    /*PASO 1*/
    int aux_acumulador=0;
    /*PASO 2*/
    for (int i = 1; i < 101; i++)
    {
        if (i%2==0)
        {
            aux_acumulador=i+aux_acumulador;
        }
        
    }
    
    /*PASO 3*/
    cout<<"La suma de todos los enteros pares desde 2 hasta 100 es: "<<aux_acumulador<<endl;

    system("pause");
    return 0;
}