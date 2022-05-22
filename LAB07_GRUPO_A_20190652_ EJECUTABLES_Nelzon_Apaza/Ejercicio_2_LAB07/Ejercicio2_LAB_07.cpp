/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio 07 - GRUPO A
*/
#include "iostream"
#include "stdlib.h"
#include "time.h"//para RAND
#include "string.h"
using namespace std;
#include "COLOR.h"
#include "COLOR.cpp"
//también trabajamos con la clase 2: MATERIAL
#include "MATERIAL.h"
#include "MATERIAL.cpp"
#include "OBJETO.h"
#include "OBJETO.cpp"

int main(){
    //Creamos el objeto: "OBJETITO"
    OBJETO objetito;
    objetito.describir_objeto();
    objetito.~OBJETO();
    return 0;
}