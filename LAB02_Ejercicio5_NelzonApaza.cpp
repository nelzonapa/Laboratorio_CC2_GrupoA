/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio - GRUPO A
*/
#include <iostream>
#include <stdlib.h>
/*
EJERCICIO 11:
Elabore un programa que lea n números y determine cuál es el mayor, el menor y la
media de los números leídos.

1. Con for leemos n numeros.
2. mientras se llenan los datos determinamos con dos auxiliares el menor y el mayor de todos.
3. un tercer auxiliar sumará todo y sacará la media aritmetica
*/
using namespace std;

int main(){
    
    int n;
    cout<<"Cuantos numeros desea leer?: "<<endl;
    cin>>n;//limite
    float dato_ingresado, aux_mayor=0, aux_menor=0, aux_acumulador=0;

    for (int i=0; i < n; i++)
    {
        cout<<"Ingrese el dato "<<i+1<<": ";
        cin>>dato_ingresado;//leemos los datos

        aux_acumulador=dato_ingresado + aux_acumulador;//acumulador en general
        
        if (aux_mayor<=dato_ingresado){
            aux_mayor=dato_ingresado;//almacenamos solo dato mayor
        }
        else{
            aux_menor=dato_ingresado;//almacenamos solo dato menor
        }
    }
    
    cout<<"El numero mayor de los datos ingresados es: "<<aux_mayor<<endl;
    cout<<"El numero menor de los datos ingresados es: "<<aux_menor<<endl;
    cout<<"El promedio de los datos ingresados es: "<<aux_acumulador/n<<endl;

    cout<<endl;
    system("pause");
    return 0;
}