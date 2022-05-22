/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio 07 - GRUPO A
*/
#include "iostream"
#include "stdlib.h"
#include "string.h"
using namespace std;

#include "ProductoBancario.h"
#include "ProductoBancario.cpp"
#include "Cuenta.h"
#include "Cuenta.cpp"
#include "Prestamo.h"
#include "Prestamo.cpp"
#include "CuentaJoven.h"
#include "CuentaJoven.cpp"
#include "Hipoteca.h"
#include "Hipoteca.cpp"

int main(){

    ProductoBancario vector("Pedro",234.56,35);
    vector.imprimir();
    
    return 0;
}