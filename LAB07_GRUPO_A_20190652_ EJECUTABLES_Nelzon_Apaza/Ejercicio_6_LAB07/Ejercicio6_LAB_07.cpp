/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio 07 - GRUPO A
*/
#include "iostream"
#include "stdlib.h"
using namespace std;

#include "Ave.h"
#include "Ave.cpp"
#include "Ganzo.h"
#include "Ganzo.cpp"
#include "Pato.h"
#include "Pato.cpp"
#include "Gallina.h"
#include "Gallina.cpp"

int main(){
    GANZO Ganzito=GANZO(2,1,"plumas","Hock!!");
    Ganzito.mostrar_caracteristicas();
    Ganzito.Graznar();
    Ganzito.~GANZO();

    PATO Lucas=PATO(2,1,"plumas","Cuack!!");
    Lucas.mostrar_caracteristicas();
    Lucas.Parpar();
    Lucas.~PATO();

    GALLINA Dora=GALLINA(2,1,"plumas","Coc!!");
    Dora.mostrar_caracteristicas();
    Dora.Cacarear();
    Dora.~GALLINA();
    return 0;
}