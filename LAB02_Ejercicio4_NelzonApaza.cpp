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
Escriba un código que solicite ingresar dos números 𝑥 y 𝑦, tal que 𝑥 < 𝑦. Muestre
todos los números primos que se encuentren entre el rango de valores, de no
encontrarse, mostrar el primo más cercano a 𝑥 o 𝑦.

PASOS:
1. Solicitamos 2 numeros.
2. Si o si el SEGUNDO debe ser MAYOR que el PRIMERO
3. Mostrar los numeros primos entre estos 2 numeros.
4. Si no es así, mostrar el primo más cercano a x o a y

*/
using namespace std;

int main(){
    
    int num_x, num_y;
    cout<<"Ingrese 2 numeros: "<<endl;
    cin>>num_x>>num_y;

    while (num_y<=num_x)//vemos que se cumpla la condicion
    {
        cout<<"Vuelva a intentarlo, recuerde que su segundo numero debe ser el mayor: "<<endl;
        cin>>num_x>>num_y;
    }
    
    int aux=0;//aux que nos ayudará a ver si tenemos o no numeros primos
    cout<<"Imprimiendo numeros primos que se encuentren entre sus numeros..."<<endl;
    for (int i = num_x; i <= num_y; i++)
    {
        if ( (i%i==0) && (i%1==0) && (i%2!=0))//condicion para ser primo
        {
            cout<<i<<" ";//ponemos los primos
        }
        else{
            aux++;
        }
        
    }
    
    if (aux==0)
    {
        cout<<"No hay numeros primos entre los numeros que dio"<<endl;
    }
    

    cout<<endl;
    system("pause");
    return 0;
}