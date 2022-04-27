/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio - GRUPO A
*/
#include <iostream>
#include <stdlib.h>

/*
EJERCICIO 2:
Escriba un código que solicite al usuario ingresar dos números enteros y que muestre
el producto de ambos.

1. Solictamos datos.
2. multiplicar.
3. mostrar resultado.
*/
using namespace std;

int main(){
    
    int valor1, valor2;
    cout<<"Ingrese 2 valores enteros: "<<endl;
    cin>>valor1>>valor2;
    cout<<"El producto de ambos numeros es: "<<valor1*valor2<<endl;
    system("pause");
    return 0;
}