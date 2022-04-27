/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio - GRUPO A
*/
#include <iostream>
#include <stdlib.h>
#include <string.h>
/*
EJERCICIO 20:
Escribir un programa que pida al usuario una palabra y luego muestre por pantalla una a una las letras de la 
palabra introducida empezando por la última.

1. pedir una contraseña al usuario
2. Guardamos en un string
3. Con bucle for, mostramos la contraseña al revés
*/
using namespace std;

int main(){

    string contrasena;
    cout<<"Ingrese su contrasena:"<<endl;
    cin>>contrasena;
    int longitud_contrasena=contrasena.length();//sacamos la longitud de la contraseña

    cout<<"Imprimiendo contrasena: "<<endl;//imprimimos con for
    for (int i =longitud_contrasena ; i >=0; i--)
    {
        cout<<contrasena[i]<<" ";
    }

    cout<<endl;
    system("pause");
    return 0;
}