#include "iostream"
#include "stdlib.h"
#include "time.h"//para RAND
#include "string.h"
#include "MATERIAL.h"//conectado con MATERIAL.h
using namespace std;
/*----------CLASE 2: MATERIAL----------*/
//Constructor y destructor
MATERIAL::MATERIAL(){}
MATERIAL::~MATERIAL(){}

string MATERIAL::GET_material(){
    srand(time(NULL));
    int ubicacion_material=0+rand()%2;//recorre los 3 espacios
    return material[ubicacion_material];
}
