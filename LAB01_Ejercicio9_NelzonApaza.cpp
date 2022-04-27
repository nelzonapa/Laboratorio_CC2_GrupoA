/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio - GRUPO A
*/
#include <iostream>
#include <stdlib.h>
/*
EJERCICIO 17:
Escribir un programa que lea 10 datos desde el teclado y sume sólo aquellos que sean negativos.

1. Pedir 10 datos al usuario.
2. Filtramos que solo se tomen en cuenta numeros negativos
3. Sumar los valores negativos.
4. Mostrar resultado
*/
using namespace std;

int main(){
    float numero_ingresado;
    float aux_acumulador=0.0;
    cout<<"Ingrese 10 numeros positivos o negativos: "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<"Ingrese el numero "<<i+1<<": "<<endl;
        cin>>numero_ingresado;
        //filtramos: PAso 2
        if (numero_ingresado<0)
        {
            aux_acumulador=aux_acumulador+numero_ingresado;//Ya tenemos la suma de los valores solo negativos
        }
        
    }
    cout<<"La suma de los valores negativos que ingreso es: "<<aux_acumulador<<endl;
    cout<<endl;
    system("pause");
    return 0;
}