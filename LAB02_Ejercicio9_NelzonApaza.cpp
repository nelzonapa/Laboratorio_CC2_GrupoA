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
EJERCICIO 18:
Escribir un programa que pida al usuario un número entero y muestre por pantalla un triángulo rectángulo como el de más abajo,
de altura el número introducido. 

*               1-> Se imprime un asterisco
**              2 -> Se imrpime 2 asteriscos
***             3   .
****            4   .
*****           5   .

1. Pide un numero entero.
2. hacemos un bucle para conteo de saltos
3. Dentro del anterior otro bucle para imprimir los asteriscos.
    3.1 Tenemos un contador: cont_asterisco
*/
using namespace std;

int main(){

    int cont_asterisco=1;//este nos ayudará a aumentar la impresión de asteriscos
    int num_asteriscos;
    cout<<"Ingrese un numero entero: para graficar el triangulo "<<endl;
    cin>>num_asteriscos;

    for (int i = 0; i < num_asteriscos; i++)//primer for, para los saltos de línea
    {
        for (int j = 0; j < cont_asterisco; j++)//segundo for para imprimir *
        {
            cout<<"*";
        }
        cout<<endl;//salto
        cont_asterisco++;
        
    }
    
    cout<<endl;
    system("pause");
    return 0;
}