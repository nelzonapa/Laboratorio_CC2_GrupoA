/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio 09 - GRUPO A
*/
/*
EJERCICIO 1.
Se pide escribir una función utilizando plantillas que tome tres argumentos genéricos y devuelva el menor
y el máximo de ellos como valor de retorno. La función debe ser capaz de dar este tipo de resultados.

PASOS:
1. Creamos el tipo de variable GENERAL (DatoGenerico)
1. Funcion que tome 3 argumentos(genericos)
2. Esta función debe devolver el numero mayor, menor de los 3.
*/
#include "iostream"
#include "stdlib.h"
using namespace std;
// PASO 1
template <class DatoGenerico>//PLANTILLA

//PROTOTIPOS de las funciones:
void Mostrar_menor_mayor(DatoGenerico,DatoGenerico,DatoGenerico);

int main(){
    float n1=5.23434,n2=3.45324,n3=2.78123;//datos puestos de manera automatica
    Mostrar_menor_mayor(n1,n2,n3);
    int n4=3,n5=5,n6=8;//datos puestos de manera automatica
    Mostrar_menor_mayor(n4,n5,n6);
    system("pause");
    return 0;
}

//DESARROLLAMOS LAS FUNCIONES
template <class DatoGenerico>
void Mostrar_menor_mayor(DatoGenerico n1,DatoGenerico n2,DatoGenerico n3){
    DatoGenerico aux_mayor, aux_menor;//almacenarán datos
    DatoGenerico array[3]={n1,n2,n3};//creamos y rellenamos array
    aux_mayor=array[0];
    aux_menor=array[0];
    for (int i = 0; i < 3; i++)
    {
        if (aux_mayor<array[i])
        {
            aux_mayor=array[i];
        }
        if (aux_menor>array[i])
        {
            aux_menor=array[i];
        }
    }
    
    cout<<endl;
    cout<<"El numero mayor es: "<<aux_mayor<<endl;
    cout<<"El numero menor es: "<<aux_menor<<endl;    

}