#include "iostream"
#include "stdlib.h"
#include "time.h"//para RAND
#include "string.h"
#include "COLOR.h"//esta conectado con COLOR.H
using namespace std;

/*----------CLASE 1: COLOR métodos o funciones----------*/
//Constructor y Destructor
COLOR::COLOR(){}
COLOR::~COLOR(){}

//para devolver un color de los 3 que tenemos en el array simple
string COLOR::GET_color(){
    srand(time(NULL));
    //USAMOS RAND() --> valor = 0 + rand() % 2;// Obtiene valores entre 0 y 1
    int ubicacion=0+rand()%2;
    return colores[ubicacion];
}