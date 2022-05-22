/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio 08 - GRUPO A
*/
/*
4. Defina una clase Circulo derivada de la clase Elipse.

PASOS:
1. Tomamos como ejemplo a la clase ELIPSE del ejercicio 2
2. Creamos la clase Circulo
    Atributos:
        - El mismo radio
    Métodos:
        - area()
        - diametro()
*/
#include "iostream"
#include "stdlib.h"
using namespace std;

#include "ELIPSE.h"
#include "ELIPSE.cpp"
#include "CIRCULO.h"
#include "CIRCULO.cpp"

int main(){
    CIRCULO circulito(5.0,5.0);//circulo, mismo radio
    circulito.area();
    circulito.diametro();
    circulito.~CIRCULO();
    return 0;
}