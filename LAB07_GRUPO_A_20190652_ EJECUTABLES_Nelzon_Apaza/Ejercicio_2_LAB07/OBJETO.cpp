#include "OBJETO.h"//conectado con OBJETO.h
#include "iostream"
// #include "COLOR.h"//hereda de COLOR.h
// #include "MATERIAL.h"//hereda también de MATERIAL.h

using namespace std;

//Constructor y destructor de OBJETO
OBJETO::OBJETO(){}
OBJETO::~OBJETO(){}

void OBJETO::describir_objeto(){//función que usará métodos de ambas clases
    cout<<"Su material es el siguiente: "<<GET_material()<<endl<<"Y es de color: "<<GET_color()<<endl;
}