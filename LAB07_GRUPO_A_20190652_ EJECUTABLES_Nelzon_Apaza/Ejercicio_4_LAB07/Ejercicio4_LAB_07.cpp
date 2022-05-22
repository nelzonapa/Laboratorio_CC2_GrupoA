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
//agregamos los demás archivos
#include "CLASE_MULTIMEDIA.h"
#include "CLASE_MULTIMEDIA.cpp"
#include "CLASE_DISCO.h"
#include "CLASE_DISCO.cpp"

/*
Escribe una clase de nombre ClaseDisco, que herede de la clase ClaseMultimedia los
atributos y métodos definidos por usted. La clase ClaseDisco tiene, aparte de los
elementos heredados, un atributo más también definido por usted. Al momento de
imprimir la información debe mostrase por pantalla toda la información.

PASOS:
1. Crear clase CLASE_MULTIMEDIA
    1.1 definir tus atributos y métodos: 
2. Crear Hijo CLASE_DISCO de clase_multimedia
    2.1 atributo aparte de los que pusiste: OTRO + que tu le des
    2.2 método:
    Imprimir información de todo
*/
int main(){
    CLASE_DISCO disquitos_multimedia;
    disquitos_multimedia.poner_nombre_disco_multimedia();
    disquitos_multimedia.mostrar_toda_info();
    return 0;
}