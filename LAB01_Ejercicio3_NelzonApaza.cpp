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
EJERCICIO 7:
Elabore un programa que solicite ingresar una hora del día (HH:MM en formato de
cadena), solicite un tiempo en minutos a agregar, y retorne la hora de finalización (el
formato de salida debe de estar en AM o PM según corresponda).
*/
using namespace std;

int main(){
    
    string hora_dia;
    cout<<"Ingrese la hora del día: "<<endl;
    cin>>hora_dia;

    string minutos_agregar;
    cout<<"Ingrese los minutos que desea agregar"<<endl;
    cin>>minutos_agregar;


    cout<<endl;
    system("pause");
    return 0;
}