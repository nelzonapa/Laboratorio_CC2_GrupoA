/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio - GRUPO A
*/
#include <iostream>
#include <stdlib.h>
#include <string>

/*
EJERCICIO 3:
Escriba un código que solicite el primer nombre de una persona, el apellido paterno
y el apellido materno. Retornar su correo UNSA generado, el cual consiste de la
primera letra del nombre, el apellido paterno completo, y la primera letra del apellido
materno. (se agrega el dominio de la universidad al final)

1. solicita nombre.
2. solicita apellido paterno
3. solicita apellido materno.
4. Hacer logaritmo de correo UNSA.
    - 1(Nombre) --> Apellido Paterno --> 1(AP materno) --> @unsa.edu.pe
5. Mostrar el resultado.
*/
using namespace std;

int main(){

    string nombre;
    cout<<"Ingrese su primer nombre: "<<endl;//PASO1
    cin>>nombre;

    string Apellido_PA;
    cout<<"Ingrese su apellido paterno: "<<endl;//PASO2
    cin>>Apellido_PA;

    string Apellido_MA;
    cout<<"Ingrese su apellido materno: "<<endl;//PASO3
    cin>>Apellido_MA;

    string correo_unsa;//PASO4
    correo_unsa=nombre[0] + Apellido_PA + Apellido_MA[0] + "@unsa.edu.pe";

    cout<<"Su correo UNSA es: "<<correo_unsa<<endl;

    system("pause");
    return 0;
}