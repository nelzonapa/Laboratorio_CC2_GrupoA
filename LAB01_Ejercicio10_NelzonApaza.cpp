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
EJERCICIO 19:
Escribir un programa que almacene la cadena de caracteres contraseña en una variable, 
pregunte al usuario por la contraseña hasta que introduzca la contraseña correcta.

1. pedir una contraseña al usuario
2. Guardamos en un string
3. Pedimos que vuelva a ingresar la contraseña
4. Con un Bucle pedimos que repita la misma contraseña
5. Mostramos error o exito
*/
using namespace std;

int main(){

    string contrasena;
    cout<<"Ingrese su contrasena:"<<endl;
    cin>>contrasena;

    system("pause");

    string aux_contrasena;//aux que guardará la segunda contraseña y comparar
    cout<<"Ahora volvera a introducir su contrasena para verificacion: "<<endl;
    cin>>aux_contrasena;

    while (aux_contrasena!=contrasena)//igualamos hasta obtener lo correcto
    {
        cout<<"Vuelva a intentarlo..";
        cin>>aux_contrasena;
    }
    cout<<"La verificacion fue un exito!";
    
    

    cout<<endl;
    system("pause");
    return 0;
}