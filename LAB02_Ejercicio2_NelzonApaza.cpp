
/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio - GRUPO A
*/
#include <iostream>
#include <stdlib.h>

/*
EJERCICIO 4:
Calcule los primeros 50 números primos y muestre el resultado en pantalla.

1. Abrimos un for.
2. Condiciones de un número para ser primo:
    - Un número primo se puede dividir entre 1 y el mismo.
3. mostrar todos esos números.
*/
using namespace std;

int main(){
    
    cout<<"Imprimiendo numeros primos del 1 al 50..."<<endl;
    for (int i = 2; i < 51; i++)
    {
        if ( (i%i==0) && (i%1==0) && (i%2!=0))//condicion para ser primo
        {
            cout<<i<<" ";
        }
        
    }
    cout<<endl;
    system("pause");
    return 0;
}