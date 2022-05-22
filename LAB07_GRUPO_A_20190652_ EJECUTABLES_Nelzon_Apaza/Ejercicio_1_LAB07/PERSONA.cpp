#include "PERSONA.h"//incluimos el archivo .h
#include <iostream>

//DE cada CLASE: SUS MÉTODOS los defines en un cpp APARTE

using namespace std;

/*Desarrollo de los métodos de la CLASE PERSONA*/

//Constructor y Destructor
PERSONA::PERSONA(){}
PERSONA::~PERSONA(){}

void PERSONA::SET_edad(int _edad){//para establecer edad
    edad=_edad;
}

void PERSONA::SET_nombre(string _nombre){//para establecer nombre
    nombre=_nombre;
}

void PERSONA::mostrar_persona(){//Mostrar datos de persona
    cout<<"\tNombre de la persona: "<<nombre<<endl<<"\tEdad: "<<edad<<endl;
}