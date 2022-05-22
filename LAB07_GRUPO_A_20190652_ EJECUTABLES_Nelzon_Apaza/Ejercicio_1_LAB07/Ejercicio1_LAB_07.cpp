/*
DATOS PERSONALES:
Alumno: Apaza Apaza Nelzon Jorge 
CUI:20190652
CURSO: CC2 - Laboratorio 07 - GRUPO A
*/

#include "iostream"
#include "stdlib.h"
using namespace std;
#include "PERSONA.h"
#include "PERSONA.cpp"//Para que compilen junto a la compilación del archivo actual
#include "ALUMNO.h"
#include "ALUMNO.cpp"

/*
EJERCICIO 1:
Crear una clase Persona de la cual tendrá métodos, asignar una edad y nombre. Una segunda 
calse ALUMNO tendrá que heredar el contenido y a través de esta clase poder asignar los 
datos de edad y nombre de los estudiantes.

PASOS:
1. Creamos la class PERSONA.
    1.1 definimos sus atributos: Edad y nombre.
    1.2 definir funciones para poder asignar valores a los atributos (Podemos usar GETTERS Y SETTERS).
2. Creamos la segunda class ALUMNO que será hijo de PERSONA.
    2.1 Definimos su constructor y su destructor.
3. Creamos el objeto de clase ALUMNO y con este usamos las funciones SETTERS
de la clase PERSONA para poder asignar datos de la edad y nombre de los estudiantes.
*/
/*-----------FUNCIÓN PRINCIPAL---------*/
int main(){
    //PASO 3
    //Creamos un objeto de clase ALUMNO
    ALUMNO Alumnito1;//ya creamos el objeto
    Alumnito1.SET_edad(21);
    Alumnito1.SET_nombre("Nelzon");
    Alumnito1.mostrar_persona();
    Alumnito1.~ALUMNO();
    return 0;
}