/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio 08 - GRUPO A
*/
/*
2. Defina una clase Elipse derivada de forma. Recordatorio: una elipse queda
definida por su radio mayor (R) y su radio menor (r), tal que el área de una elipse
es igual a π*(R*r).

PASOS:
1. CLASE FORMA del ejercicio anterior
2. Crear otra clase Elipse
    Atributos:
        - Radio_mayor-->(R)
        - Radio_menor-->(r)
    Métodos:
        - Area_elipse()=π*(R*r)
*/
#include "iostream"
#include "stdlib.h"
using namespace std;

#include "FORMA.h"
#include "FORMA.cpp"
#include "ELIPSE.h"
#include "ELIPSE.cpp"

int main(){
    //Introducimos los elementos de acuerdo a la clase ELIPSE
    ELIPSE Elipse1("amarillo",2.0,3.1,"Elipsita",8.9,4.56);
    Elipse1.imprimir();//mostramos elementos de la FORMA
    Elipse1.area_elipse();//damos el area de la elipse
    return 0;
}