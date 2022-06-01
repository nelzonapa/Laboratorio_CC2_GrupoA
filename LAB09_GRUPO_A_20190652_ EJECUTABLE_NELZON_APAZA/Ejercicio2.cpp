/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio 09 - GRUPO A
*/
/*
EJERCICIO 2. Se pide escribir una función utilizando plantillas que tome dos argumentos genéricos de tipo entero y 
flotante que devuelva las cuatro operaciones básicas.

PASOS:
1. crear plantilla
2. Crear función que use 2 variables(puden ser de tipo int o float)
3. Debe devolver las cuatro operaciones básicas (+,-,*,/)
*/
#include "iostream"
#include "stdlib.h"
using namespace std;

template <class DATO_GENERAL>//PLANTILLA
void Operaciones_Basicas(DATO_GENERAL,DATO_GENERAL);//prototipo

int main(){
    int int1=1,int2=2;
    Operaciones_Basicas(int1,int2);
    float float1=2.34,float2=9.31;
    Operaciones_Basicas(float1,float2);
    return 0;
}

//Desarrollamos la función
template <class DATO_GENERAL>
void Operaciones_Basicas(DATO_GENERAL num1,DATO_GENERAL num2){//operaciones básicas
    cout<<endl;
    cout<<"SUMA: "<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
    cout<<"RESTA: "<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
    cout<<"MULTIPLICACION: "<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
    cout<<"DIVISION: "<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
    cout<<endl;
}