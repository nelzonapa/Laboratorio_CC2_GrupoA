/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio - GRUPO A
*/
#include <iostream>
#include <stdlib.h>
/*
EJERCICIO 15:
Escribir un programa que genere la tabla de multiplicar de un número introducido por el teclado.

1. Pedir un numero entero
2. Hacer un bucle
3. Imrpimir el resultado
*/
using namespace std;

int main(){
    
    int numero;
    cout<<"Ingrese un numero: "<<endl;
    cin>>numero;

    for (int i = 1; i <= 12; i++)//tabla de multiplicar hasta el  12
    {
        cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;//Aplicamos la multiplicación
    }

    cout<<endl;
    system("pause");
    return 0;
}