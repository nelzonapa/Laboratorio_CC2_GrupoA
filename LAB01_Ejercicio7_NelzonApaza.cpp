/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio - GRUPO A
*/
#include <iostream>
#include <stdlib.h>
/*
EJERCICIO 13:
Elabore un algoritmo que lea por teclado dos números enteros y determine si uno es
divisor del otro.
*/
using namespace std;

int main(){
    
    int numero1, numero2;
    cout<<"Ingrese 2 valores: "<<endl;//pedimos valores
    cin>>numero1>>numero2;
    //Comprobamos si uno es divisor de otro
    if (numero1%numero2==0)
    {
        cout<<"El numero "<<numero2<<" es divisor de "<<numero1<<endl;//resultado
    }
    else if (numero2%numero1==0)
    {
        cout<<"El numero "<<numero1<<" es divisor de "<<numero2<<endl;//resultado
    }
    
    cout<<endl;
    system("pause");
    return 0;
}