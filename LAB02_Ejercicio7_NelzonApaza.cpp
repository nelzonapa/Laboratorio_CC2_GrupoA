/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio - GRUPO A
*/
#include <iostream>
#include <stdlib.h>
/*
EJERCICIO 14:
Calcula el promedio de 3 notas para n estudiantes.
*/
using namespace std;

int main(){
    
    int n;
    cout<<"Ingrese la cantidad de estudiantes que tiene: "<<endl;
    cin>>n;

    int nota1,nota2,nota3;//3 notas a ingresar

    for (int i = 1; i <= n; i++)
    {
        cout<<"Estudiante numero "<<i<<endl<<"Ingrese sus 3 notas: "<<endl;
        cin>>nota1>>nota2>>nota3;
        cout<<"El promedio de notas del "<<i<<" alumno es: "<<(nota1+nota2+nota3)/3<<endl;//calculamos para cada uno
    }
    
    cout<<endl;
    system("pause");
    return 0;
}