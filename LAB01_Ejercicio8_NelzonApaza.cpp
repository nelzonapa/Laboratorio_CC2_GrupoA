/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio - GRUPO A
*/
#include <iostream>
#include <stdlib.h>
/*
EJERCICIO 16:
Escribir un programa que calcule la media de x cantidad números introducidos por el teclado.

1. Pedir la cantidad de numeros que desea ingresar.
2. Comenzar a pedirle los datos, mediante un bucle.
    2.1 Creamos un valor auxiliar que ayude sumar los numeros ingresados para sacar la media
3. Calculamos la media.
4. Mostramos resultados.
*/
using namespace std;

int main(){
    
    int cantidad_numeros;
    int aux_acumulador=0;//aux que almacenara la suma
    cout<<"Ingrese un cantidad de numeros que ingresara: "<<endl;
    cin>>cantidad_numeros;
    //cantidad_numeros será el limite
    for (int i = 0; i < cantidad_numeros; i++)//tabla de multiplicar del 12
    {
        cout<<"Ingrese el numero "<<i+1<<": "<<endl;
        cin>>aux_acumulador;
        aux_acumulador=aux_acumulador+aux_acumulador;
    }

    /*Sacamos la media*/
    cout<<"La media de los numeros ingresados es: "<<aux_acumulador/cantidad_numeros<<endl;

    cout<<endl;
    system("pause");
    return 0;
}