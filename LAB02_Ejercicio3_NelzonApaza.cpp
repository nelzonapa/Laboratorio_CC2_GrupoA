/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio - GRUPO A
*/
#include <iostream>
#include <stdlib.h>

/*
EJERCICIO 5:
Escribir un programa que visualice en pantalla los números múltiplos de 5
comprendidos entre 1 y 100.
*/
using namespace std;

int main(){
    
    cout<<"Mostrando los numeros multiplos de 5 comprendidos entre 1 y 100..."<<endl;
    for (int i = 1; i < 101; i++)
    {
        if (i%5==0)//Revisamos cada uno
        {
            cout<<i<<" ";
        }
        
    }
    cout<<endl;

    system("pause");
    return 0;
}